#include<bits/stdc++.h>
using namespace std;

//Time complexity: O(log n)
//O(log n) is better than O(n)
int main() {
	int n;
	cin >> n;
	while(n > 0) {
	n = n / 2;
	//rest of the code
	}
}

/*
Give T test cases and an array of Size N. Print sum of
array in each test case.
*/

int sum() {

	int t;
	cin >> t;

	while(t--) {
		int n;
		cin >> n;
		int sum = 0;
		for(int i = 0; i < n; ++i){
			int x;
			cin >> x;
			sum += x;
		}
		cout << sum << endl;
	}
}