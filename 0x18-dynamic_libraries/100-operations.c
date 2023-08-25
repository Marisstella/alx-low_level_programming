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
		fprintf(stderr, "Division by zero!\n");
		return 0;
	} 

int mod(int a, int b)
{
		if (b != 0)
		{
		return a % b;
		}
	else
		{
			fprintf(stderr, "Modulo by zero!\n");
			return 0;  // Return some default value in case of modulo by zero
		}
}
