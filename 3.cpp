#include <stdio.h>

int main(void) {
	//1
	int x = 45; int y = 10;
	// if x<5 y>=-10
	// if (x<5)&&(y>=-10)
	printf("%d \n", x + y);//�������� ������

  //2
	int x1 = 3; int y1 = -10;
	if (x1 < 5)
		if (y1 >= -10)
			printf("uclovie 2 cipolnyaetsya \n");

	//3
	x = 45; y = -10;
	//if (x<5, y>=-10)
	//if (x<5)&&(y>=-10)
	printf("%d \n", x + y); //�������� ������

  //4
	x = 4; y = -10;
	if (x < 5 && y >= -10)
		printf("uclovie 3 cipolnyaetsya \n");


// ��������� 2 � 4 ������������ ����� �����
}