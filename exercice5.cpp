#include<iostream>
#include <cmath>
#include<cstddef>
using namespace std;

int main (){
	int a;
	a=10;
	int& ref_a = a;
	int *p_a = &a;

	cout << "le a est " << a << "\n";
	cout << "le ref est " << ref_a << "\n";
	cout << "le ref est " << &ref_a << "\n";
	cout << "le pointeur est " << *p_a << "\n";
	cout << "le adress est " << &p_a << "\n";
	
	
	return 0;
	
	
}
