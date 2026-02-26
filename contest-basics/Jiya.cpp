#include<bits/stdc++.h>
using namespace std;

int test() {
  int n;
  for(int i = 0; i < 12; ++i) {
    cin >> n;
    cout << n << ' ';
  }
}

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;

    long long product = 1;
    int b;
    for (int j = 0; j < a; ++j) {
      cin >> b;
      product *= b;

      //cout << b << " " << product << endl;
    }
    
    if (product % 10 == 2) {
      cout << "YES" << endl;
    }
    else if (product % 10 == 3) {
      cout << "YES " << endl;
    }
    else if (product % 10 == 5) {
      cout << "YES " << endl;
    }
    else {
      cout << "NO" << endl;
    }
  }
}