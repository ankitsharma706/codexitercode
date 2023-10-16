#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string x;
    cin >> x;
 
    int repeating = 1;
    int value = 1;
 
    int n = x.length();
    
    for (int i = 1; i < n; i++) {
        if (x[i] == x[i - 1]) {
            repeating++;
        } else {
            value = max(value, repeating);
            repeating = 1;
        }
    }
 
    value = max(value, repeating);
 
    cout << value << endl;
 
    return 0;
}
