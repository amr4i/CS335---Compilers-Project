#include "getBlocks.cpp"

using namespace std;

SymTable* ST = new SymTable();

int main(int argc, char** argv){

    int siz;

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

    siz = IR.size();
    fori(0, siz)
    {
        // cout<<IR[i]->opType<<" "<<IR[i]->op<<"\n";
        if(IR[i]->opType == 0 || IR[i]->op == "callvoid")  continue;
        // cout<<nextUseTable[i].fi->lineNum<<" :\n";
        for(map<string, pair<string, int> >::iterator it = nextUseTable[i].se.begin() ; it != nextUseTable[i].se.end() ; it++ )
        {
            cout<<"\t"<<((*it).fi)<<" -> "<<((*it).se.fi)<<" , "<<((*it).se.se)<<"\n";
        }
    }

	mipsCode *code = new mipsCode();
	code->addLine(".data");

    string reg_out, reg_in1, reg_in2;

    // add all the data variables

    code->addLine(".text");
    code->addLine("main:");

    /* 
    -> Arrays are to be implemented
    -> String printing is to be allowed
    */

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
            reg_out = code->getReg(ir->dest);

            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                code->addLine("li "+reg_out+", "+IR[i]->opd1);
            }
            else
            {
                /* assignment through variable, e.g. a=b */
                reg_in1 = code->getReg(ir->opd1);
                code->addLine("move "+reg_out+", "+reg_in1);
            }
            // flushVar call ?
        }
        else if (ir->op == "+=")
        {
            /* code */
            reg_out = code->getReg(ir->dest);

            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                code->addLine("addi "+reg_out+", "+reg_out+", "+IR[i]->opd1);
            }
            else
            {
                /* assignment through variable, e.g. a=b */
                reg_in1 = code->getReg(ir->opd1);
                code->addLine("add "+reg_out+", "+reg_out+", "+reg_in1);
            }
            // flushVar call ?
        }
        else if (ir->op == "-=")
        {
            /* code */
            reg_out = code->getReg(ir->dest);

            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                code->addLine("subi "+reg_out+", "+reg_out+", "+IR[i]->opd1);
            }
            else
            {
                /* assignment through variable, e.g. a=b */
                reg_in1 = code->getReg(ir->opd1);
                code->addLine("sub "+reg_out+", "+reg_out+", "+reg_in1);
            }
            // flushVar call ?
        }
        else if (ir->op == "<<=")
        {
            /* code */
            reg_out = code->getReg(ir->dest);

            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                code->addLine("sll "+reg_out+", "+reg_out+", "+IR[i]->opd1);
            }
            else
            {
                /* assignment through variable, e.g. a=b */
                reg_in1 = code->getReg(ir->opd1);
                code->addLine("sllv "+reg_out+", "+reg_out+", "+reg_in1);
            }
            // flushVar call ?
        }
        else if (ir->op == ">>=")
        {
            /* code */
            reg_out = code->getReg(ir->dest);

            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                code->addLine("srl "+reg_out+", "+reg_out+", "+IR[i]->opd1);
            }
            else
            {
                /* assignment through variable, e.g. a=b */
                reg_in1 = code->getReg(ir->opd1);
                code->addLine("srlv "+reg_out+", "+reg_out+", "+reg_in1);
            }
            // flushVar call ?
        }
        else if (ir->op == "&=")
        {
            /* code */
            reg_out = code->getReg(ir->dest);

            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                code->addLine("andi "+reg_out+", "+reg_out+", "+IR[i]->opd1);
            }
            else
            {
                /* assignment through variable, e.g. a=b */
                reg_in1 = code->getReg(ir->opd1);
                code->addLine("and "+reg_out+", "+reg_out+", "+reg_in1);
            }
            // flushVar call ?
        }
        else if (ir->op == "|=")
        {
            /* code */
            reg_out = code->getReg(ir->dest);

            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                code->addLine("ori "+reg_out+", "+reg_out+", "+IR[i]->opd1);
            }
            else
            {
                /* assignment through variable, e.g. a=b */
                reg_in1 = code->getReg(ir->opd1);
                code->addLine("or "+reg_out+", "+reg_out+", "+reg_in1);
            }
            // flushVar call ?
        }
        else if (ir->op == "^=")
        {
            /* code */
            reg_out = code->getReg(ir->dest);

            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                code->addLine("xori "+reg_out+", "+reg_out+", "+IR[i]->opd1);
            }
            else
            {
                /* assignment through variable, e.g. a=b */
                reg_in1 = code->getReg(ir->opd1);
                code->addLine("xor "+reg_out+", "+reg_out+", "+reg_in1);
            }
            // flushVar call ?
        }
        else if (ir->op == "+")
        {
            /* code */
            reg_out = code->getReg(ir->dest);

            if(ir->isInt1 && ir->isInt2)
            {
                code->addLine("li "+reg_out+", "+ir->opd1);
                code->addLine("addi "+reg_out+", "+reg_out+", "+ir->opd2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2);
                code->addLine("addi ",reg_out+", "+reg_in2+", "+ir->opd1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1);
                code->addLine("addi ",reg_out+", "+reg_in1+", "+ir->opd2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1);
                reg_in2 = code->getReg(ir->opd2);
                code->addLine("add ",reg_out+", "+reg_in1+", "+reg_in2);
            }
            //flushVar call ?
        }
        else if (ir->op == "-")
        {
            /* code */
            reg_out = code->getReg(ir->dest);

            if(ir->isInt1 && ir->isInt2)
            {
                code->addLine("li "+reg_out+", "+ir->opd1);
                code->addLine("subi "+reg_out+", "+reg_out+", "+ir->opd2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2);
                code->addLine("subi ",reg_out+", "+reg_in2+", "+ir->opd1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1);
                code->addLine("subi ",reg_out+", "+reg_in1+", "+ir->opd2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1);
                reg_in2 = code->getReg(ir->opd2);
                code->addLine("sub ",reg_out+", "+reg_in1+", "+reg_in2);
            }
            //flushVar call ?
        }
        else if (ir->op == "&")
        {
            /* code */
            reg_out = code->getReg(ir->dest);

            if(ir->isInt1 && ir->isInt2)
            {
                code->addLine("li "+reg_out+", "+ir->opd1);
                code->addLine("andi "+reg_out+", "+reg_out+", "+ir->opd2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2);
                code->addLine("andi ",reg_out+", "+reg_in2+", "+ir->opd1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1);
                code->addLine("andi ",reg_out+", "+reg_in1+", "+ir->opd2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1);
                reg_in2 = code->getReg(ir->opd2);
                code->addLine("and ",reg_out+", "+reg_in1+", "+reg_in2);
            }
            //flushVar call ?
        }
        else if (ir->op == "|")
        {
            /* code */
            reg_out = code->getReg(ir->dest);

            if(ir->isInt1 && ir->isInt2)
            {
                code->addLine("li "+reg_out+", "+ir->opd1);
                code->addLine("ori "+reg_out+", "+reg_out+", "+ir->opd2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2);
                code->addLine("ori ",reg_out+", "+reg_in2+", "+ir->opd1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1);
                code->addLine("ori ",reg_out+", "+reg_in1+", "+ir->opd2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1);
                reg_in2 = code->getReg(ir->opd2);
                code->addLine("or ",reg_out+", "+reg_in1+", "+reg_in2);
            }
            //flushVar call ?
        }
        else if (ir->op == "^")
        {
            /* code */
            reg_out = code->getReg(ir->dest);

            if(ir->isInt1 && ir->isInt2)
            {
                code->addLine("li "+reg_out+", "+ir->opd1);
                code->addLine("xori "+reg_out+", "+reg_out+", "+ir->opd2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2);
                code->addLine("xori ",reg_out+", "+reg_in2+", "+ir->opd1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1);
                code->addLine("xori ",reg_out+", "+reg_in1+", "+ir->opd2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1);
                reg_in2 = code->getReg(ir->opd2);
                code->addLine("xor ",reg_out+", "+reg_in1+", "+reg_in2);
            }
            //flushVar call ?
        }
        else if (ir->op == "<<")
        {
            /* code */
            reg_out = code->getReg(ir->dest);

            if(ir->isInt1 && ir->isInt2)
            {
                code->addLine("li "+reg_out+", "+ir->opd1);
                code->addLine("sll "+reg_out+", "+reg_out+", "+ir->opd2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2);
                code->addLine("sll ",reg_out+", "+reg_in2+", "+ir->opd1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1);
                code->addLine("sll ",reg_out+", "+reg_in1+", "+ir->opd2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1);
                reg_in2 = code->getReg(ir->opd2);
                code->addLine("sllv ",reg_out+", "+reg_in1+", "+reg_in2);
            }
            //flushVar call ?
        }
        else if (ir->op == ">>")
        {
            /* code */
            reg_out = code->getReg(ir->dest);

            if(ir->isInt1 && ir->isInt2)
            {
                code->addLine("li "+reg_out+", "+ir->opd1);
                code->addLine("srl "+reg_out+", "+reg_out+", "+ir->opd2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2);
                code->addLine("srl ",reg_out+", "+reg_in2+", "+ir->opd1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1);
                code->addLine("srl ",reg_out+", "+reg_in1+", "+ir->opd2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1);
                reg_in2 = code->getReg(ir->opd2);
                code->addLine("srlv ",reg_out+", "+reg_in1+", "+reg_in2);
            }
            //flushVar call ?
        }
        else if (ir->op == "<")
        {
            /* code */
            reg_out = code->getReg(ir->dest);

            if(ir->isInt1 && ir->isInt2)
            {
                code->addLine("li "+reg_out+", "+ir->opd1);
                code->addLine("slti "+reg_out+", "+reg_out+", "+ir->opd2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2);
                code->addLine("slti ",reg_out+", "+reg_in2+", "+ir->opd1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1);
                code->addLine("slti ",reg_out+", "+reg_in1+", "+ir->opd2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1);
                reg_in2 = code->getReg(ir->opd2);
                code->addLine("slt ",reg_out+", "+reg_in1+", "+reg_in2);
            }
            //flushVar call ?
        }
        else if (ir->op == ">")
        {
            /* code */
            reg_out = code->getReg(ir->dest);

            if(ir->isInt1 && ir->isInt2)
            {
                code->addLine("li "+reg_out+", "+ir->opd1);
                code->addLine("sgti "+reg_out+", "+reg_out+", "+ir->opd2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2);
                code->addLine("sgti ",reg_out+", "+reg_in2+", "+ir->opd1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1);
                code->addLine("sgti ",reg_out+", "+reg_in1+", "+ir->opd2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1);
                reg_in2 = code->getReg(ir->opd2);
                code->addLine("sgt ",reg_out+", "+reg_in1+", "+reg_in2);
            }
            //flushVar call ?
        }
        else if (ir->op == "<=")
        {
            /* code */
            reg_out = code->getReg(ir->dest);

            if(ir->isInt1 && ir->isInt2)
            {
                code->addLine("li "+reg_out+", "+ir->opd1);
                code->addLine("slei "+reg_out+", "+reg_out+", "+ir->opd2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2);
                code->addLine("slei ",reg_out+", "+reg_in2+", "+ir->opd1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1);
                code->addLine("slei ",reg_out+", "+reg_in1+", "+ir->opd2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1);
                reg_in2 = code->getReg(ir->opd2);
                code->addLine("sle ",reg_out+", "+reg_in1+", "+reg_in2);
            }
            //flushVar call ?
        }
        else if (ir->op == ">=")
        {
            /* code */
            reg_out = code->getReg(ir->dest);

            if(ir->isInt1 && ir->isInt2)
            {
                code->addLine("li "+reg_out+", "+ir->opd1);
                code->addLine("sgei "+reg_out+", "+reg_out+", "+ir->opd2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2);
                code->addLine("sgei ",reg_out+", "+reg_in2+", "+ir->opd1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1);
                code->addLine("sgei ",reg_out+", "+reg_in1+", "+ir->opd2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1);
                reg_in2 = code->getReg(ir->opd2);
                code->addLine("sge ",reg_out+", "+reg_in1+", "+reg_in2);
            }
            //flushVar call ?
        }
        else if (ir->op == "!=")
        {
            /* code */
            reg_out = code->getReg(ir->dest);

            if(ir->isInt1 && ir->isInt2)
            {
                code->addLine("li "+reg_out+", "+ir->opd1);
                code->addLine("snei "+reg_out+", "+reg_out+", "+ir->opd2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2);
                code->addLine("snei ",reg_out+", "+reg_in2+", "+ir->opd1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1);
                code->addLine("snei ",reg_out+", "+reg_in1+", "+ir->opd2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1);
                reg_in2 = code->getReg(ir->opd2);
                code->addLine("sne ",reg_out+", "+reg_in1+", "+reg_in2);
            }
            //flushVar call ?
        }
        else if (ir->op == "==")
        {
            /* code */
            reg_out = code->getReg(ir->dest);

            if(ir->isInt1 && ir->isInt2)
            {
                code->addLine("li "+reg_out+", "+ir->opd1);
                code->addLine("seqi "+reg_out+", "+reg_out+", "+ir->opd2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2);
                code->addLine("seqi ",reg_out+", "+reg_in2+", "+ir->opd1);
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1);
                code->addLine("seqi ",reg_out+", "+reg_in1+", "+ir->opd2);
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1);
                reg_in2 = code->getReg(ir->opd2);
                code->addLine("seq ",reg_out+", "+reg_in1+", "+reg_in2);
            }
            //flushVar call ?
        }
        else if (ir->op == "printint")
        {
            // printing integer
            reg_out = code->getReg(ir->dest);
            code->addLine("li $a0, "+reg_out);
            code->addLine("li $v0, 1");
            code->addLine("syscall");

            //flushVar call ?
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
            addLine("sw $v0, "+ir->dest);

            //flushVar call ?
        }

        // flushAll call ?
	}


    return 0;    
}
