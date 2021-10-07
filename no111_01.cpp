#include<iostream>
#include<string>
using namespace std;

int main() {
	string a;
	char b,t[100];
	int j = 0;
	getline(cin, a);
	cin >> b;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] != b) {
			t[j] = a[i];
			j++;
		}
	}
	for (int i = 0; i < j; i++) {
		cout << t[i];
	}
}