#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int biasa[100];
	int *dinamis = new int[n];
	
	int total = 0;
	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		biasa[i] = x;
		dinamis[i] = x;
		total += x;
	}
	
	cout << (double)total / n << '\n';
	
	delete [] dinamis;
	
	return 0;
}