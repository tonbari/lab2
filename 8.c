#include <stdio.h>
int main(void) {
	int a = 3, b = 8, c = 10;
	int e = 1, f = 9;
	if (a > e && a < f)
		printf("%d \n", a);
	else
		printf("%d \n", 0);
	if (b > e && b < f)
		printf("%d \n", b);
	else
		printf("%d \n", 0);
	if (c > e && c < f)
		printf("%d \n", c);
	else
		printf("%d \n", 0);
	return 0;
}