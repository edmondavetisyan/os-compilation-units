#include <stdio.h>
#include <stdlib.h>
#include "math_utils.h"


int main(int argc, char **argv) {
	int n = (argc > 1) ? atoi(argv[1]) : 5;
	printf("square(%d) = %d\n", n, square(n));
	return 0;
}
