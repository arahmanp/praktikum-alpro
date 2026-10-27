#include <iostream>
using namespace std;

int main() {
	int a = 1;
	char b = 'A';
	double c = 3.14;
	short d = 2;
	
	int *pA = &a;
	char *pB = &b;
	double *pC = &c;
	short *pD = &d;
	
	cout << pA++ << ' ' << pA << '\n';
	cout << (void*)pB++ << ' ' << (void*)pB << '\n';
	cout << pC++ << ' ' << pC << '\n';
	cout << pD++ << ' ' << pD << '\n';
}