#include <iostream>
#include <string>
using namespace std;

int main() {
	int n=0,i=0;
  	string a;
	cout << a;
	getline (cin, a);
	while(a[i]!='\0'){
		n++;
		i++;
	}
	for(int i=n;i>0;i--){
		for(int j=0;j<i;j++){
			cout << a[j];
		}
		cout << endl;
	}
	return 0;
}
