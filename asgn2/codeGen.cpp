#include "mipsCode.cpp"

using namespace std;

int main(int argc, char** argv){

    int siz;
    map <string, Symbol*> ::iterator itt;

    // Reading the text file and storing it in "ir" data structure
    readFile(argv[1]);

    // Populating blocks
    getBlocks();

    nextUseTable.resize(IR.size()+1);

    siz = blocks.size();

    fori(0, siz)
    {
        blocks[i]->computeNextUse();
    }

    mipsCode* code = new mipsCode(symTable);
    code->addLine(".data");

    for(itt = symTable.symbols.begin() ; itt != symTable.symbols.end() ; itt++)
    {
        if( (*itt).se->type == "int" )
        {
            code->addLine((*itt).fi + ":\t.word 0");
        }
    }

    string reg_out, reg_in1, reg_in2;

    // add all the data variables

    code->addLine(".text");
    code->addLine("main:");

    /* 
    -> Arrays are to be implemented
    -> String printing is to be allowed
    */

    siz = IR.size();
    fori(0,siz){
        TAC* ir = IR[i];
        if (ir->op == "exit")
        {
            code->addLine("li $v0, 10");
            code->addLine("syscall");
        }   
        else if (ir->op == "=")
        {
            /* code */
            reg_out = code->getReg(ir->dest->name, (ir->lineNum));

            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                code->addLine("li "+reg_out+", "+ir->l1);
            }
            else
            {
                /* assignment through variable, e.g. a=b */
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum));
                code->addLine("move "+reg_out+", "+reg_in1);
            }
            // flushVar call ?
        }
        else if (ir->op == "+=")
        {
            /* code */
            reg_out = code->getReg(ir->dest->name, (ir->lineNum));

            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                code->addLine("addi "+reg_out+", "+reg_out+", "+ir->l1);
            }
            else
            {
                /* assignment through variable, e.g. a=b */
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum));
                code->addLine("add "+reg_out+", "+reg_out+", "+reg_in1);
            }
            // flushVar call ?
        }
        else if (ir->op == "-=")
        {
            /* code */
            reg_out = code->getReg(ir->dest->name, (ir->lineNum));
            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                code->addLine("subi "+reg_out+", "+reg_out+", "+ir->l1);
            }
            else
            {
                /* assignment through variable, e.g. a=b */
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum));
                code->addLine("sub "+reg_out+", "+reg_out+", "+reg_in1);
            }
            // flushVar call ?
        }
        else if (ir->op == "<<=")
        {
            /* code */
            reg_out = code->getReg(ir->dest->name, (ir->lineNum));

            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                code->addLine("sll "+reg_out+", "+reg_out+", "+ir->l1);
            }
            else
            {
                /* assignment through variable, e.g. a=b */
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum));
                code->addLine("sllv "+reg_out+", "+reg_out+", "+reg_in1);
            }
            // flushVar call ?
        }
        else if (ir->op == ">>=")
        {
            /* code */
            reg_out = code->getReg(ir->dest->name, (ir->lineNum));

            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                code->addLine("srl "+reg_out+", "+reg_out+", "+ir->l1);
            }
            else
            {
                /* assignment through variable, e.g. a=b */
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum));
                code->addLine("srlv "+reg_out+", "+reg_out+", "+reg_in1);
            }
            // flushVar call ?
        }
        else if (ir->op == "&=")
        {
            /* code */
            reg_out = code->getReg(ir->dest->name, (ir->lineNum));

            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                code->addLine("andi "+reg_out+", "+reg_out+", "+ir->l1);
            }
            else
            {
                /* assignment through variable, e.g. a=b */
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum));
                code->addLine("and "+reg_out+", "+reg_out+", "+reg_in1);
            }
            // flushVar call ?
        }
        else if (ir->op == "|=")
        {
            /* code */
            reg_out = code->getReg(ir->dest->name, (ir->lineNum));

            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                code->addLine("ori "+reg_out+", "+reg_out+", "+ir->l1);
            }
            else
            {
                /* assignment through variable, e.g. a=b */
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum));
                code->addLine("or "+reg_out+", "+reg_out+", "+reg_in1);
            }
            // flushVar call ?
        }
        else if (ir->op == "^=")
        {
            /* code */
            reg_out = code->getReg(ir->dest->name, (ir->lineNum));

            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                code->addLine("xori "+reg_out+", "+reg_out+", "+ir->l1);
            }
            else
            {
                /* assignment through variable, e.g. a=b */
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum));
                code->addLine("xor "+reg_out+", "+reg_out+", "+reg_in1);
            }
            // flushVar call ?
        }
        else if (ir->op == "+")
        {
            /* code */
            reg_out = code->getReg(ir->dest->name, (ir->lineNum));

            if(ir->isInt1 && ir->isInt2)
            {
                code->addLine("li "+reg_out+", "+ir->l1);
                code->addLine("addi "+reg_out+", "+reg_out+", "+ir->l2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum));
                code->addLine("addi "+reg_out+", "+reg_in2+", "+ir->l1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum));
                code->addLine("addi "+reg_out+", "+reg_in1+", "+ir->l2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum));
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum));
                code->addLine("add "+reg_out+", "+reg_in1+", "+reg_in2);
            }
            //flushVar call ?
        }
        else if (ir->op == "-")
        {
            /* code */
            reg_out = code->getReg(ir->dest->name, (ir->lineNum));

            if(ir->isInt1 && ir->isInt2)
            {
                code->addLine("li "+reg_out+", "+ir->l1);
                code->addLine("subi "+reg_out+", "+reg_out+", "+ir->l2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum));
                code->addLine("subi "+reg_out+", "+reg_in2+", "+ir->l1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum));
                code->addLine("subi "+reg_out+", "+reg_in1+", "+ir->l2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum));
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum));
                code->addLine("sub "+reg_out+", "+reg_in1+", "+reg_in2);
            }
            //flushVar call ?
        }
        else if (ir->op == "&")
        {
            /* code */
            reg_out = code->getReg(ir->dest->name, (ir->lineNum));

            if(ir->isInt1 && ir->isInt2)
            {
                code->addLine("li "+reg_out+", "+ir->l1);
                code->addLine("andi "+reg_out+", "+reg_out+", "+ir->l2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum));
                code->addLine("andi "+reg_out+", "+reg_in2+", "+ir->l1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum));
                code->addLine("andi "+reg_out+", "+reg_in1+", "+ir->l2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum));
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum));
                code->addLine("and "+reg_out+", "+reg_in1+", "+reg_in2);
            }
            //flushVar call ?
        }
        else if (ir->op == "|")
        {
            /* code */
            reg_out = code->getReg(ir->dest->name, (ir->lineNum));

            if(ir->isInt1 && ir->isInt2)
            {
                code->addLine("li "+reg_out+", "+ir->l1);
                code->addLine("ori "+reg_out+", "+reg_out+", "+ir->l2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum));
                code->addLine("ori "+reg_out+", "+reg_in2+", "+ir->l1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum));
                code->addLine("ori "+reg_out+", "+reg_in1+", "+ir->l2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum));
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum));
                code->addLine("or "+reg_out+", "+reg_in1+", "+reg_in2);
            }
            //flushVar call ?
        }
        else if (ir->op == "^")
        {
            /* code */
            reg_out = code->getReg(ir->dest->name, (ir->lineNum));

            if(ir->isInt1 && ir->isInt2)
            {
                code->addLine("li "+reg_out+", "+ir->l1);
                code->addLine("xori "+reg_out+", "+reg_out+", "+ir->l2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum));
                code->addLine("xori "+reg_out+", "+reg_in2+", "+ir->l1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum));
                code->addLine("xori "+reg_out+", "+reg_in1+", "+ir->l2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum));
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum));
                code->addLine("xor "+reg_out+", "+reg_in1+", "+reg_in2);
            }
            //flushVar call ?
        }
        else if (ir->op == "<<")
        {
            /* code */
            reg_out = code->getReg(ir->dest->name, (ir->lineNum));

            if(ir->isInt1 && ir->isInt2)
            {
                code->addLine("li "+reg_out+", "+ir->l1);
                code->addLine("sll "+reg_out+", "+reg_out+", "+ir->l2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum));
                code->addLine("sll "+reg_out+", "+reg_in2+", "+ir->l1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum));
                code->addLine("sll "+reg_out+", "+reg_in1+", "+ir->l2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum));
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum));
                code->addLine("sllv "+reg_out+", "+reg_in1+", "+reg_in2);
            }
            //flushVar call ?
        }
        else if (ir->op == ">>")
        {
            /* code */
            reg_out = code->getReg(ir->dest->name, (ir->lineNum));

            if(ir->isInt1 && ir->isInt2)
            {
                code->addLine("li "+reg_out+", "+ir->l1);
                code->addLine("srl "+reg_out+", "+reg_out+", "+ir->l2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum));
                code->addLine("srl "+reg_out+", "+reg_in2+", "+ir->l1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum));
                code->addLine("srl "+reg_out+", "+reg_in1+", "+ir->l2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum));
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum));
                code->addLine("srlv "+reg_out+", "+reg_in1+", "+reg_in2);
            }
            //flushVar call ?
        }
        else if (ir->op == "<")
        {
            /* code */
            reg_out = code->getReg(ir->dest->name, (ir->lineNum));

            if(ir->isInt1 && ir->isInt2)
            {
                code->addLine("li "+reg_out+", "+ir->l1);
                code->addLine("slti "+reg_out+", "+reg_out+", "+ir->l2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum));
                code->addLine("slti "+reg_out+", "+reg_in2+", "+ir->l1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum));
                code->addLine("slti "+reg_out+", "+reg_in1+", "+ir->l2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum));
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum));
                code->addLine("slt "+reg_out+", "+reg_in1+", "+reg_in2);
            }
            //flushVar call ?
        }
        else if (ir->op == ">")
        {
            /* code */
            reg_out = code->getReg(ir->dest->name, (ir->lineNum));

            if(ir->isInt1 && ir->isInt2)
            {
                code->addLine("li "+reg_out+", "+ir->l1);
                code->addLine("sgti "+reg_out+", "+reg_out+", "+ir->l2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum));
                code->addLine("sgti "+reg_out+", "+reg_in2+", "+ir->l1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum));
                code->addLine("sgti "+reg_out+", "+reg_in1+", "+ir->l2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum));
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum));
                code->addLine("sgt "+reg_out+", "+reg_in1+", "+reg_in2);
            }
            //flushVar call ?
        }
        else if (ir->op == "<=")
        {
            /* code */
            reg_out = code->getReg(ir->dest->name, (ir->lineNum));

            if(ir->isInt1 && ir->isInt2)
            {
                code->addLine("li "+reg_out+", "+ir->l1);
                code->addLine("slei "+reg_out+", "+reg_out+", "+ir->l2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum));
                code->addLine("slei "+reg_out+", "+reg_in2+", "+ir->l1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum));
                code->addLine("slei "+reg_out+", "+reg_in1+", "+ir->l2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum));
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum));
                code->addLine("sle "+reg_out+", "+reg_in1+", "+reg_in2);
            }
            //flushVar call ?
        }
        else if (ir->op == ">=")
        {
            /* code */
            reg_out = code->getReg(ir->dest->name, (ir->lineNum));

            if(ir->isInt1 && ir->isInt2)
            {
                code->addLine("li "+reg_out+", "+ir->l1);
                code->addLine("sgei "+reg_out+", "+reg_out+", "+ir->l2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum));
                code->addLine("sgei "+reg_out+", "+reg_in2+", "+ir->l1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum));
                code->addLine("sgei "+reg_out+", "+reg_in1+", "+ir->l2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum));
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum));
                code->addLine("sge "+reg_out+", "+reg_in1+", "+reg_in2);
            }
            //flushVar call ?
        }
        else if (ir->op == "!=")
        {
            /* code */
            reg_out = code->getReg(ir->dest->name, (ir->lineNum));

            if(ir->isInt1 && ir->isInt2)
            {
                code->addLine("li "+reg_out+", "+ir->l1);
                code->addLine("snei "+reg_out+", "+reg_out+", "+ir->l2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum));
                code->addLine("snei "+reg_out+", "+reg_in2+", "+ir->l1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum));
                code->addLine("snei "+reg_out+", "+reg_in1+", "+ir->l2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum));
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum));
                code->addLine("sne "+reg_out+", "+reg_in1+", "+reg_in2);
            }
            //flushVar call ?
        }
        else if (ir->op == "==")
        {
            /* code */
            reg_out = code->getReg(ir->dest->name, (ir->lineNum));

            if(ir->isInt1 && ir->isInt2)
            {
                code->addLine("li "+reg_out+", "+ir->l1);
                code->addLine("seqi "+reg_out+", "+reg_out+", "+ir->l2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum));
                code->addLine("seqi "+reg_out+", "+reg_in2+", "+ir->l1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum));
                code->addLine("seqi "+reg_out+", "+reg_in1+", "+ir->l2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1->name, (ir->lineNum));
                reg_in2 = code->getReg(ir->opd2->name, (ir->lineNum));
                code->addLine("seq "+reg_out+", "+reg_in1+", "+reg_in2);
            }
            //flushVar call ?
        }
        else if (ir->op == "printint")
        {
            // printing integer
            reg_out = code->getReg(ir->dest->name, (ir->lineNum));
            code->addLine("lw " + reg_out + ", " + ir->dest->name);
            code->addLine("li $a0, "+reg_out);
            code->addLine("li $v0, 1");
            code->addLine("syscall");

        //     //flushVar call ?
        }
        else if (ir->op == "label")
        {
            /* code */
            code->addLine(ir->target+":");

            //flushVar call ?
        }
        else if (ir->op == "scan")
        {
            code->addLine("li $v0, 5");
            code->addLine("syscall");
            code->addLine("sw $v0, " + ir->dest->name);

            //flushVar call ?
        }

        // flushAll call ?
    }

    code->printCode();

    return 0;    
}
