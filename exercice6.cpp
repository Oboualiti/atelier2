#include <iostream>
using namespace std;


void incrementer(int *p) {
    (*p)++; 
}


void permuter(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;

    cout << "Avant incrementer: x = " << x << endl;
    incrementer(&x);
    cout << "Apres incrementer: x = " << x << endl;

    cout << "\nAvant permuter: x = " << x << ", y = " << y << endl;
    permuter(&x, &y);
    cout << "Apres permuter: x = " << x << ", y = " << y << endl;

    return 0;
}

