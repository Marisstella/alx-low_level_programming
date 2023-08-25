#include <stdio.h>

int add(int a, int b) { 
	return a + b;
}
int subtract(int a, int b) {
	return a - b;
}
float multiply(float a, float b) {
	return a * b;
}
float divide(float a, float b) {
	if (b != 0) { 
		return a / b;
	} else { 
		printf("Error: Division by zero\n");
		return 0;
	} 
}
