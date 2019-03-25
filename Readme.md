# C Program Structure

## Basic Program
```C
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
```
## Structure Explained

```C
#include <stdio.h>
#include <stdlib.h>
```
* These first two symbols, which starts with **#** are known as **pre-processor** commands.
* There are other pre-processor commands available, but these two are the most basic one.
* The pre-processor command **include** includes a header file into our project.
* Whenever we create a C program, there are always .h header files which we need to include in our project in order to write a program.
* syntax: ```C #include <filename>``` to include the file.