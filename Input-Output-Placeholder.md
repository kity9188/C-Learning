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
