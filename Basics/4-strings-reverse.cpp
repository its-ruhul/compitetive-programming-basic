#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  //ignores characters in input buffer
  cin.ignore();
  while (t--) {
    string s;
    getline(cin, s);
    cout << s << endl;
  }

  string str = "Manish Chauhan";
  string str_rev;
  for(int i = str.size() - 1; i >= 0; --i){
    
    //high time complexity and char is added to string
    // str_rev += str[i];
    str_rev.push_back(str[i]);
  }
  cout << str_rev;
}