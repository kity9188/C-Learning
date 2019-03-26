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
* syntax: ```#include <filename>``` to include the file.
* These two files viz., **stdio.h** and **stdlib.h** are most important files to create any simple program.

#### 1. stdio.h
  * Standard Input Output
  * Responsible for **taking input** and **printing output**. e.g., **printf** prints anything because of stdio.h pre-processed library.

#### 2. stdlib.h
  * Standard library
  * This file we need to include because whenever we run or compile a C program, compiler searches for the ``` main() ``` function in our project. ``` main() ``` is like an entry path to our program. So ``` main() ``` is a part of **stdlib.h**
  
#### 3. int main() {}
  * This is a function.
  * It's a built-in function, which every program must have.
  * by main(), a **c** program knows that this is the entry point of the program.
  * So each program must have at least only one ```main()``` function.
  * **What is a function?** Function is a piece of code, which we need to execute a piece of code.
  * A function has few basic things.
	* **return type**:
		*e.g., ``` int ``` or integer 
		* int is a data type which returns only integers.
	* **function()** :
		* **main()** is the name of the function.
		* by default, main() always remains in lowercase.
	* **()**:
		* This bracket takes arguments.
		* In the above example, we are not passing any argument, so it is empty.
	By default, every program must have **main()** function.
	* ``` return 0; ```:
		* because we are using return type as **integer**, we are returning 0 integer.
		* **return 0;** is just like a success for our main program.
		* If our program is returning 0 as per code, then it has compiled successfully.
	* ``` printf ```:
		* It is a part/function of **stdio.h** file library.
		* This **printf** helps us to print a _sring_ on the terminal.
		* Whatever we write inside **"!!!Hello World!!!"** will be printed on the terminal.
		* for now we have '!!!Hello World!!!', so it will be printed on the terminal.
	* ``` \n ```:
		* This is a new line character.
		* It changes the line.
		* This will not be printed, but this is a special character, which will help to change the line of print.
	* ``` ; ```:
		* Every line ends with semicolon **;**.
		* This tells C, that the line is ending here and from the next line we are going to write another line of code.
	* ``` { } ```:
		* Every functions works with opening **{** and closing **}** curly braces.
		
This was all about the basic structre of a C program.

## Running and Compiling
* In order to run our program, we need to compile it.
* **Compilation** helps program to convert our code to the machine language, which our machine can understand. Because our code is readable by human but not by a machine/computer. Our machine only understands bytecode i.e., 0 and 1 (on and off).
* Code can be run and compiled by the **run** button on our GUI.
* We always have to save our code first before compiling.
* **Compiler** also helps us in error detection. i.e., we have written our program correctly or not. If there is any error, it reports immediately and exists the compilation.
* Error is something, which is not understood by the compiler. i.e., we are not writing our code, as it is designed to be.
* Once our program is compiled successfully, our program runs.