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
