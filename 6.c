#include <stdio.h>

int main(void) {
	int x = 6; int y = 0;
	switch (x)
	{
	case 5: printf("%d \n", y = x * x); break;
	case 7: printf("%d \n", y = x % 2); break;
	default: printf("%d \n", y += 1);
		break;
	}
}