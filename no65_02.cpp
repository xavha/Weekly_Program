#include <iostream>
#include <string>
using namespace std;
int main(){
	int n=0,i=0;
  	string a;
	cout << a;
	getline (cin, a);
	n= a.size();
	while(i!=n){
		for(int i=0;i<n;i++){
			cout << a[i];
		}
		n--;
		cout << endl;
	}	
}
