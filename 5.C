#include <stdio.h>

int main(void) {
	//1
	int x=0;
	switch (x)
	{
	case 5: x++; break;
	//case x>0: x--; break; не может быть неточное значение x 
	default: x += 66;
	}
	printf("%d \n", x);

	//2
	int x1=5;
	switch (x1)
	{
	case 5: x1 += 7; break;
	case 6: case 11: --x1; break;
	}
	printf("%d \n", x1);

	//3
	int x2=6;
	switch (x2)
	{
	case 5: x2 *= 16;
	case 6: case 11: x2 -= 23; break;
	}
	printf("%d \n", x2);

	//4
	int x3=5;
	switch (x3)//switch(5)
	{
	case 5: x3 += 7; break;
	case 6: case 11: --x3; break;
	}
	printf("%d \n", x3);
	return 0;
}