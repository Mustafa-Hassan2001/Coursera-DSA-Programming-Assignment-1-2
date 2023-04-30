#include <iostream>
#include <vector>

using namespace std;

int get_fibonacci_last_digit(int n) {
    if (n <= 1) {
        return n;
    }

    vector<int> fibonacci(n + 1);
    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for (int i = 2; i <= n; i++) {
        fibonacci[i] = (fibonacci[i - 1] + fibonacci[i - 2]) % 10;
    }

    return fibonacci[n];
}

int main() {
   
