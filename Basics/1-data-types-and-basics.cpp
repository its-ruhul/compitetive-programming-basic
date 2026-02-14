#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main() {

    int q;

    // cin takes input until space on \n
    // cin take only one character in char.
    cin >> q;

    cout << q << "\n";
    // char, int, float, double, bool

    //c++ has 128 characters;
    char c = 'a';
    char j = 'c';

    //typecasting
    cout << (int) c << endl;
    cout << c - j << endl;  //valid statement

    // int prints the integer part of float values
    int a = 3;
    double b = 3.5;

    //in bool 0 means false, any other value is true
    //bool returns either 0 or 1;
    bool d = true;

    //long int, long long int
    long e = 123;
    long long f = 321;

    //a++ first uses value of a then increment it
    //++a first increments the value then uses it
    cout << a++ << endl;
    cout << a << endl;

    // endl is used to prind a new line
    cout << c << " "<< b << a << d << endl;
    
}