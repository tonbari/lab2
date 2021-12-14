#include <stdio.h>

int main(void) {
	int x1 = 6;
	//1
	if (!(x1 <= 0))//неверная запись, исправила
		if (x1 % 2 == 0)
			x1 = x1 * x1;
		else x1 %= 3;
	printf("%d \n", x1);//верно

	int x2 = 5;
	//2
	if (x2 > 0)
		if (x2 % 2 != 0)
			x2 = x2 * x2;
		else x2 %= 3;
	printf("%d \n", x2);//верно

	int x3 = 7;
	//3
	if (!(x3 % 2 == 0))//неверная запись
		if (x3 > 0)
			x3 = x3 * x3;
		else x3 %= 3;
	printf("%d \n", x3);//верно

	int x4 = 1;
	//4
	if (!(x4 % 2 == 0))//неверная запись
	{
		if (x4 > 0)
			x4 = x4 * x4;
	}
	else x4 %= 3;
	printf("%d \n", x4);//верно

	return 0;
}