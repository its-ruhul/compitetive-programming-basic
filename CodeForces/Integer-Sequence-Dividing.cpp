#include<bits/stdc++.h>
using namespace std;

/*
https://codeforces.com/problemset/problem/2193/B

if sum of numbers is even, 
then it can be divided into 2 sets with difference of 0

if sum of numbers is odd,
then it can be divided into 2 sets with difference of 1
*/

int main() {
 
  int a;
  cin >> a;

  if ((a * (a + 1) / 2) % 2 == 0){
    cout << 0;
  }
  else {
    cout << 1;
  }
}
