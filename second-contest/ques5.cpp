#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;

  cin >> t;

  for(int i = 0; i < t; i++){
    int array;
    cin >> array;
    long long a;
    int noOf0 = 0;
    int noOf1 = 0;

    for(int j = 0; j < array; j++){
      cin >> a;
      if (a == 0){
        noOf0++;
      }
      else if (a == 1){
        noOf1++;
      }
    }

    cout << (1LL << noOf0) * noOf1 << endl;

  }
}