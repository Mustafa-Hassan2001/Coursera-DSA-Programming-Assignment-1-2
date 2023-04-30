#include <iostream>

int fibonacci_naive(int n) {
    if (n <= 1)
        return n;

    return fibonacci_naive(n - 1) + fibonacci_naive(n - 2);
}

int main() {
    int n;
    std::cin >> n;

    std::cout << fibonacci_naive(n) << std::endl;
    return 0;
}
