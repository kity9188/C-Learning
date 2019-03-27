# Input / Output / Placeholder

## 1.Placeholder
Suppose we want to print number a number(say32). But simply we can't use ```printf(32)```. This will give error because **printf** only prints **strings**. But printf has methods for printing numbers. What we do is put a **place holder** format code in the string.
We write ```printf("%d",32);```.
```C
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("Printing Numbers\n");
	printf("%d",32);
	printf("\n");
	printf("19 + 31 is : %d", 19+31);
	printf("\n");
	printf("%f", 32.9);
	return EXIT_SUCCESS;
}
```
Output:
```C
Printing Numbers
32
19 + 31 is : 50
32.900000
```
The placeholder %d literally "holds the place" for the actual number that is 32 or the result of adding 19 to 31 or 32.9 as shown in the above example.

These **placeholders** are called **format specifiers**. Many other format specifiers work with **printf()**. If we have a floating-point number, we can use %f to print out a floating-point number, decimal point and all. Other format specifiers are:

* %d - int (same as %i)
* %ld - long int (same as %li)
* %f - float
* %lf - double[1]
* %c - char
* %s - string
* %x - hexadecimal

A complete listing of all the format specifiers for printf() is on [Wikipedia](https://en.wikipedia.org/wiki/Printf_format_string).

## 2. Other output methods ```puts()```
Other than ```printf();```, we have another output method:
```C
puts();
```
The ```puts()``` function is a very simple way to send a string to the screen when you have no placeholders or variables to be concerned about. It works very much like the ```printf()``` function.
```C
puts("Print this string.");
```
will print to screen:
```C
Print this string.
```
**followed by a newline character**. The ```puts()``` function appends a newline character to its output.
## 3. Input using ```scanf()```
The ```scanf()``` function is the input method equivalent to the ```printf()``` output function - simple yet powerful. In its simplest invocation, the scanf format string holds a single placeholder representing the type of value that will be entered by the user. These placeholders are mostly the same as the ```printf()``` function - **%d** for integers, **%f** for floats, and **%lf** for doubles.

There is, however, one variation to ```scanf()``` as compared to ```printf()```. The ```scanf()``` function requires the memory address of the variable to which we want to save the input value. While pointers (variables storing memory addresses) can be used here. Instead, the simple technique is to use the address-of operator, &.

A typical application might be like this:
```C
#include "stdio.h"

int main(void)
{
    char name[20];
	int age;
	puts("What should I call you?");
	scanf("%s",name);

	printf("How Old are you? \n");
	scanf("%d",&age);
	printf("Welcome abroad %s. \n",name);

    return 0;
}
```