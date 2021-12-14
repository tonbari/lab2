#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
	int n,code;
	float V = 9.20; float M = 4.10; float K = 2.05; float Vol = 2.50;
	cin >> code;
	cin >> n, "minutes";
	switch (code)
	{
	case 432: cout<< n * V; break;
	case 095: cout<< n * M; break;
	case 861: cout<< n * K; break;
	case 844: cout<< n * Vol; break;
		
	}
	return 0;
 }