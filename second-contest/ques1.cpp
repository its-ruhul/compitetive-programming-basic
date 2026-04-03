#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  int a;

  cin >> t;

  for(int i = 0; i < t; i++){
    cin >> a;

    int sum = 0;
  
    while(a != 0){
      sum += a%10;
      a = a / 10;
    }

    cout << sum << endl;
  }
}