## Instructions for building an executable:
```bash
$> cd asgn3
$> make
```
This will create all the needed executables in asgn3/bin subdirectory.

## Running the executable
```bash
$> bin/parser <file>
```
where <file> is the path to the IR code that you want to run the parser on.

Sample test codes have been included under the asgn3/test subdirectory. They can be run as follows:
```bash
$> bin/parser test/test1.ir
```

##Note:
The code has been implemented in *C++11*. Please ensure you have g++ available.
