#include <iostream>
 
using namespace std;
 
int main()
{
  int n;
  cin >> n;
 
  for (int k = 1; k <= n; k++)
  {
    long long nonAttacking = 1LL * k * k * (k * k - 1) / 2 - 8 * (k - 1) * (k - 2);
    cout << nonAttacking << endl;
  }
 
  return 0;
}
