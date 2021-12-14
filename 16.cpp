#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int fish; int water; int f = 0;
	cin >> fish;
	cin >> water;
	if (water >= (fish * 3))
		cout << "ok";
	else
		cout << "no", fish - (water/3);//?
}