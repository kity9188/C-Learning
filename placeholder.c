#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("----------Printing Numbers:----------\n");
	printf("The number is =%d",32);
	printf("\n");
	printf("19 + 31 is : %d", 19+31);
	printf("\n");

	printf("%d \n",32);	/// integer
	printf("%ld \n",327676789);	/// larger integer (long int)| The range is -32768 to +32767
	printf("%f \n", 32.9);	///float
	printf("%lf \n",3245544.9);	/// large float
	printf("%c \n",'A');	/// Char. For single character. Single character always enclosed in ''.
	printf("%s","This is a string \n");	/// String
	printf("%x \n",16);	/// Hex

	printf("----------Taking input----------\n");
/*	char name;
///	scanf("%s","Put your name :",name);
///	printf(name);
	printf("----------Puts----------\n");    */
	puts("Print this string.");
	return EXIT_SUCCESS;
}
