#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++){

    bool canShower = 0;
    int n;
    int s;
    int m;
    cin >> n;
    cin >> s;
    cin >> m;

    int l = 0;
    int j = 0;

    for(int k = 0; k < n; k++){
      cin >> l;
      if (l - j >= s){
        canShower = 1;
      }
      cin >> j;
    }
    l = m;

    if (l - j >= s){
      canShower = 1;
    }
    
    if (canShower){
      cout << "YES" << endl;
    }
    else {
      cout << "NO" << endl;
    }
  }

  return 0;
}