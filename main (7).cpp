#include <iostream>
using namespace std;

int fibonacci_sum_squares(long long n) {
    int a = 0, b = 1, sum = 0;
    for (int i = 0; i < 60; ++i) {
        int c = (a + b) % 10;
        a = b;
        b = c;
        if (i >= 30) {
            sum += (long long) c * c % 10;
        }
    }
    return sum % 10 * ((n / 60) % 10) % 10;
}

int main() {
    long long n;
    cin >> n;
    cout << fibonacci_sum_squares(n) << endl;
    return 0;
}
