#include<bits/stdc++.h>
using namespace std;

int main() {
  int noOfTest;
  int noOfElements;
  int element;

  cin.ignore();

  cin >> noOfTest;

  for(int i = 0; i < noOfTest; ++i) {
    cin >> noOfElements;

    int array[i];

    for(int j = 0; j < noOfElements; ++j) {
      cin >> element;
      array[j] = element;

      if (array[j] == noOfElements) {
        array[j] == array[1];
        array[1] = noOfElements;
      }

      cout << array[j] << ' ';
    }

    cout << endl;
  }
}