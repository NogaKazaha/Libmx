#include "../inc/libmx.h"

int mx_number_length(int number) {
	int length = 0;
	while (number) {
		number /= 10;
		length++;
	}
	return length;
}
