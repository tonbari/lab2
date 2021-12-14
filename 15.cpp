#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int m, n;
	int s = 16; int memo = 6144;
	cin >> m;
	cin >> n;
	if (((m * 60 + n ) * s) <= memo)
		cout << "okay";
	else
		cout << "no";
	return 0;
}