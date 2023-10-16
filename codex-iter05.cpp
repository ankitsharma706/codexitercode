#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
  int n;
  cin >> n;
 
  if (n == 2 || n == 3)
  {
    cout << "NO SOLUTION" << endl;
  }
  else
  {
    vector<int> permutation(n);
 
    int evenIdx = 2;
    int oddIdx = 1;
 
    for (int i = 1; i <= n; i++)
    {
      if (evenIdx <= n)
      {
        permutation[evenIdx - 1] = i;
        evenIdx += 2;
      }
      else
      {
        permutation[oddIdx - 1] = i;
        oddIdx += 2;
      }
    }
 
    for (int i = 0; i < n; i++)
    {
      cout << permutation[i] << " ";
    }
    cout << endl;
  }
 
  return 0;
}
