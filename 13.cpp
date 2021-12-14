#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int x;
	cin >> x, "enter number from 1 to 999";
	if (((x % 10) < 19) && ((x % 100) > 10))
		cout << x, "rybley"; 
	switch (x % 10) {
	case 1: cout << "rybl"; break;
	case 2: cout << "ryblya"; break;
	case 3: cout << "ryblya"; break;
	case 4: cout << "ryblya"; break;
	default: cout << "rybley"; break;
	}
	return 0;
}