#include<bits/stdc++.h>
using namespace std;

int main() {
  int x = 4;
  int *p_x = &x;

  cout << "Addr x: " << &x << endl;
  cout << "Val p_x: " << p_x << endl;
  cout << "Val *p_x: " << *p_x << endl;

  *p_x = 5;
  cout << "x: " << x << endl;

  cout << p_x + 1 << endl;    //adds 4 bytes to the address
  cout << endl;

  //double pointer
  int **p_p_x = &p_x;         //stores the address of p_x

  cout << "Addr p_x: " << &p_x << endl;
  cout << "Value of p_p_x: " << p_p_x << endl;

  cout << "Value of *p_p_x: " << *p_p_x <<endl;
  cout << "Value of value of p_p_x: " << **p_p_x << endl;

  **p_p_x = 7;
  cout << "x: " << x << endl;
  cout << endl;
}