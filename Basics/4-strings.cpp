#include<bits/stdc++.h>
using namespace std;

int main() {
  //string comes out in double quotation: ""
  string str = "Hello";

  string str2;
  cin >> str2;

  cout << str << str2 << endl;

  string result = str + str2;
  cout << result << endl;

  //access string characters using index
  cout << str[0] << endl;

  //size of string
  cout << str.size() << endl;

  //getline() to get the whole line
  string str1;
  getline(cin, str1);
  cout << str1;
}