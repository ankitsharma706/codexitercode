#include <iostream>
 
using namespace std;
 
int main()
{
    long long n;
    cin >> n;
 
    long long expectedSum = n * (n + 1) / 2;
    long long actualSum = 0;
 
    for (int i = 0; i < n - 1; i++)
    {
        long long num;
        cin >> num;
        actualSum += num;
    }
 
    long long missingNumber = expectedSum - actualSum;
    cout << missingNumber << endl;
 
    return 0;
}
