#include <iostream>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long y, x;
        cin >> y >> x;
 
        long long maxValue = max(y, x);
        long long diagonalStart = (maxValue - 1) * (maxValue - 1) + 1;
 
        long long result;
 
        if (maxValue % 2 == 0) {
            result = y > x ? diagonalStart + y - 1 : diagonalStart + x - 1;
        } else {
            result = y > x ? diagonalStart + x - 1 : diagonalStart + y - 1;
        }
 
        cout << result << endl;
    }
 
    return 0;
}
