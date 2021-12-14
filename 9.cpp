#include <stdio.h>
#include <iostream>

int main(int argc, char* argv[])
{
	using std::cout;
	using std::endl;
	int a = 333, edinici, decjatki, sotni;
	sotni = a / 100;
	decjatki = (a % 100) / 10;
	edinici = a % 10;

	if (sotni == decjatki)
		cout << "there are similar numbers! N1"<<endl;
	if (sotni == edinici)
		cout << "there are similar numbers N2"<<endl;
	if (decjatki == edinici)
		cout << "there are similar numbers! N3"<<endl;

	return 0;
}