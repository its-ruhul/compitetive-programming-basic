#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;

  for(int i = 0; i < t; i++){
    int a1;
    int a2;
    int b1;
    int b2;
    int win = 0;

    cin >> a1;
    cin >> a2;
    cin >> b1;
    cin >> b2;

    if ((a1>b1 && a2>b2) && (a2>b1 && a1>b2)){
      win = 4;
    }
    else if ((a1<b1 && a2<b2) && (a2<b1 && a1<b2)){
      win = 0;
    }
    else if ((a1==b1 || a2==b2 || a2==b1 || a1==b2) && a1+a2 > b1+b2){
      win = 2;
    }

    cout << win << endl;
  }
}