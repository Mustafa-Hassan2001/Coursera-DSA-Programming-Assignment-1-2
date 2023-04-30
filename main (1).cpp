#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long MaxPairwiseProduct(vector<long long> &numbers)
{
    int n = numbers.size();
    sort(numbers.begin(), numbers.end());
    return numbers[n - 1] * numbers[n - 2];
}

int main()
{
    int n;
    cin >> n;
    vector<long long> numbers(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> numbers[i];
    }

    long long result = MaxPairwiseProduct(numbers);
    cout << result << endl;
    return 0;
}
