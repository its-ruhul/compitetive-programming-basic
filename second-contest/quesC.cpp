#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  for(int i = 0; i < t; i++){
    cout << "I : " << i << endl;
    int n;
    int s;
    long m;

    long r = 0;

    for (int j = 0; j < n; j++){
      cout << "j : " << j << endl;
      long l;

      cin >> l;
      if (l-r >= m){
        cout << "YES" << endl;
      }
      else {
        cout << "NO" << endl;
      }

      cin >> r;
    }
  }
}