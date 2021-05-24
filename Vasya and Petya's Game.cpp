#include <iostream>
using namespace std;
int tmp[1001];

int main () {
  int n;
   cin >> n;
  int ans = 0;
    for (int i = 2; i <= n; i++) {
      if (tmp[i] == 0) {
        for (int j = 2*i; j <= n; j += i) {
          tmp[j]++;
        }
      }
    }
     for (int i = 2; i <= n; i++) {
       if (tmp[i] < 2) {
         ans++;
       }
     }
      cout << ans << endl;
      for (int i = 2; i <= n; i++) {
        if (tmp[i] < 2) {
          cout << i << " ";
        }
      }
  return 0;
}
