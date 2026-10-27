#include <iostream>
using namespace std;

int main() {
	int arr[] = {1, 2, 3};
	int *ptr = arr;
	
	// operator '++' (post-increment) punya
	// prioritas lebih tinggi
	// daripada operator '*' (dereference)
	cout << *ptr++ << '\n';
	
	cout << *ptr << '\n';
	
	// '*ptr' dievaluasi terlebih dahulu
	// setelah itu baru post-increment dievaluasi
	cout << (*ptr)++ << '\n';
	
	cout << *ptr << '\n';
	
	// prefix increment '++' punya prioritas yang 
	// sama dengan dereference '*'. dievaluasi dari kanan
	// kiri
	cout << ++*ptr << '\n';
	
	return 0;
}