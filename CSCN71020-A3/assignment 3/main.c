#include <stdio.h>
#include "main.h"

const char* isPrime(int input) {
	if (input < 2) {
		return "Not Prime";
	}
	for (int i = 2; i * i <= input; i++) {
		if (input % i == 0) {
			return "Not prime";
		}
		return "Prime";
	}
	return "Prime";
}