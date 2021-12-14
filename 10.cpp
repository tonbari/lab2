#include <stdio.h>
#include <iostream>
int main(){
	using namespace std;
	int a = 100, b = 150, c = 60;
	int max = 0;
		if (a > max)
			max = a;
		if (b > max)
			max = b;
		if (c > max)
			max = c;
	cout << max;
	return 0;
}