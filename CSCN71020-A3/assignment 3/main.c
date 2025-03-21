#include <stdio.h>
#include "main.h"

const char* isPrime(int input) {
	if (input < 2) {
		return "Not Prime";
	}
	for (int i = 2; i * i <= input; i++) {
		if (input % i == 0) {
			return "Not Prime";
		}
		return "Prime";
	}
	return "Prime";
}

int main(void) {
	return 0;
}