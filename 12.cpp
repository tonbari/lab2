#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int x;
	cin >> x, "enter number";
		if ((x>=1)&&(x<=5))
			cout << "its work day \n"<< endl;
		if (x == 6)
			cout << "its saturday"<<endl;
		if (x == 7)
			cout << "its sunday"<<endl;
	return 0;
}