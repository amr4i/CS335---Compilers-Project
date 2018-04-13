## Instructions for building an executable:
```bash
$> cd asgn4
$> make
```
This will create the executable parser in asgn3/bin subdirectory.

## Running the executable
```bash
$> bin/irgen <file>
```
where <file> is the path to the C# code that you want to run the parser on.

Sample test codes have been included under the asgn3/test subdirectory. They can be run as follows:
```bash
$> bin/irgen test/test1.cs
```

##Note:
The code has been implemented in *C++11*. Please ensure you have g++ available.
