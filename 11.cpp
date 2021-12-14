#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int x, y;
    cout << "enter coordinations ";
    cin >> x >> y;
    if ((x * y > 0)) {
        cout << ((x > 0 && y > 0) ? "1 kvadrant" : "3 kvadrant") << endl;
    }
    else {
        cout << ((x > 0 && y < 0) ? "4 kvadrant" : "2 kvadrant") << endl;
    }
    return 0;
}