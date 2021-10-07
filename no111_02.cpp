#include<iostream>
#include<string>
using namespace std;

int main() {
	string a;
	string t = "";
	getline(cin, a);
	char b;
	cin >> b;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] != b) {
			t.push_back(a[i]);
		}
	}
	cout << t;
}