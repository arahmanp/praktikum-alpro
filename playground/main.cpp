#include <iostream>
int main() {
    int a = 2, b = 2, hasil = 0;
    for(int i = a++; i <= ++b; i++) {
        for(int j = --a; j <= b--; j++) {
            hasil++;
        }
    }
    std::cout << hasil << '\n';
    return 0;
}