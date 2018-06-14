# CS335 Project: C# Compiler

############################################################

- Source Language: C# 
- Target Langauge: MIPS
- Implementation Language: C++
- Authors: Amrit Singhal, Siddharth Agarwal, Shobhit Rastogi

############################################################# 

## Usage:

### Instructions for building an executable:
```bash
$> cd project
$> make
```
This will create the compiler executable in project/bin subdirectory.

### Running the executable
```bash
$> bin/compiler <file>
```
where <file> is the path to the C# code that you want to run the compiler on.

Sample test codes have been included under the project/test subdirectory. They can be run as follows:
```bash
$> bin/compiler test/test1.cs
```

This will output the MIPS code for the following program on the standard output. 

#### Note:
The code has been implemented in *C++11*. Please ensure you have g++ available.

## Language Specifications: 

### Supported Features: 

- Data Types: int, bool, char, strings, arrays
- Operators
    - int
        - Unary -> !,-,~,+
        - Relational ->  <, >, <=, >=, ==, !=
        - Arithmetic -> +,-,/,%
        - Bitwise -> <<,>>,&,|,^
        - Logical ops -> &&,||
        - Assignment -> =,+=,-=,*=,/=,%=,^=,&=,|= (only work for identifiers,not member/element access)
    - bool
        - Unary -> !
        - Logical -> &&,||
        - Assignment -> =
    - Objects
        - Assignment -> = (make reference to object, assign something to object data member)
    - String
        - Initialization and Assignment -> = (assign string constants to string variables)
    - Arrays
        - Array element access is supported, for bothreading and writing, and all further operators of the array type can be used subsequently. 
    - Char
        - Mathematical operations are allowed on char types.  
- Loops -> for, while, do-while
- Selection Statements -> if-else, switch, conditional (c = expression ? a : b)
- Jump Statements -> return, continue, break
- Arrays -> 1-D arrays 
- Type Checking
    - Language is strictly typed and type checking is done for validating every expression and to check that the operator is operating on valid types.
    - Implicit type conversion is supported to be able to store char values in int types.
    - Type checking has also been implemented at other places as required
- Functions
    - Allowed return types -> int, bool, void, char
    - Allowed argument types -> int, bool, objects, char (no arrays or strings)
    - Function width is decided optimally in case of nested scopes.
- Classes
    - Structural Checl : Exactly one class must have a function Main(), this class does not have variables as class members(only methods allowed although method may have any variables/arrays/objects). Execution begins from Main()
    - scope modifiers- {public,private} for data members of class only(not functions)
    - Data members can only be of simple or array of simple types.
- Scoping
    - Lexical scoping has been implemented which allows us to support nested scopes. The width for a block with nested blocks is determined optimally.
    - In our scoping, we allow redeclaration of variables sharing name with class data members. Still, a redeclaration within a member function is clearly reporeted, as well.
- Return statements supported within blocks as well
- Read and Write
    - Our write statement can take expression with different type in the same statement(int,char,bool and string)
    - Read statement takes one variable in which you want to read(int,char,bool,string)
- Multiple Declarations and Sequential Assignments
    - Multiple Declarations  -> int a,b,c=3;
    - Sequential Assignments -> a=b=c=3;
- Dynamic Memory Allocation
    - Objects are allocated dynamically from heap

