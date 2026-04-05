#include<bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin >> t;

  for(int i = 0; i < t; i++){
    int a;
    int b;

    cin >> a;
    cin >> b;

    if((a%3)/4 + b == 0 || (a%3)/2 - b == 0) {
      cout << "YES" << endl;
    }
    else {
      cout << "NO" << endl;
    }
  }
}