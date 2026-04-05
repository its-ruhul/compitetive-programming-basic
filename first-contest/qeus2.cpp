#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  for(int i = 0; i < t; ++i){
    int a1;
    int a2;
    int b1;
    int b2;
    int win1 = 0;
    int win2 = 0;

    cin >> a1;
    cin >> a2;
    cin >> b1;
    cin >> b2;

    //straight match
    if (a1 > b1) {win1++;}
    else if (a1 < b1) {win1--;}
    
    if (a2 > b2) {win1++;}
    else if (a2 < b2) {win1--;}

    //crossmatch
    if (a2 > b1) {win2++;}
    else if(a2 < b1) {win2--;}

    if (a1 > b2) {win2++;}
    else if(a1 < b2) {win2--;}

    //cout << win1 << win2 << endl;

    if (win1 > 0 && win2 > 0){
      cout << 4 << endl;
    }
    else if (win1 <= 0 && win2 <= 0){
      cout << 0 << endl;
    }
    else {
      cout << 2 << endl;
    }
  }
}