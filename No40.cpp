#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string a;
	getline(cin,a);
	int n=a.size();
	for(int i=0;i<n;i++){
		if(a[i]>='a'&&a[i]<='z')
			a[i]=a[i]-('a'-'A');
		else if(a[i]>='A'&&a[i]<='Z')
			a[i]=a[i]-('A'-'a');
	}
	for(int i=0;i<n;i++){
		cout << a[i];
	}
}
