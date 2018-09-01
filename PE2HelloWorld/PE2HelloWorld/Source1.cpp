#include <stdio.h>;
int main() {
		int decsecs = 31 * 60 * 60 * 24;
		double circarea = 3.14 * (6.2 * 6.2);
		int trunc = 60 / 37;
		// Integers are truncated rather than rounded.
		printf("Hello World \n");
		printf("The amount of seconds in December is: %d \n", decsecs);
		printf("The area of a circle with a radius of 6.2 is about: %f \n", circarea);
		printf("This integer will display the result of 60 divided by 37, which will truncate: %d \n", trunc);
		return 0;
}