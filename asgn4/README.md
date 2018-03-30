## Instructions for building an executable:
```bash
$> cd asgn2
$> make
```
This will create an executable named "codegen" in the asgn2/bin directory. 

## Running the executable: 
```bash
$> bin/code <file>
```
where <file> is the path to the IR code that you want to run the Code_Generator on. 

Sample test codes have been included under the asgn2/test subdirectory. They can be run as follows:
```bash
$> bin/codegen test/test1.ir
```

##Note: 
The code has been implemented in *C++11*. Please ensure you have g++ available. 