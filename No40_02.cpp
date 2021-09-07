#include<iostream>
#include<string.h>
using namespace std;

int UpperToLower(char a){
	a=a-('A'-'a');
	return a;	
}
int LowerToUpper(char a){
	a=a-('a'-'A');
	return a;
}

int main(){
	string a;
	getline(cin,a);
	int n=a.size();
	for(int i=0;i<n;i++){
		if(a[i]>='a'&&a[i]<='z')
			a[i]=LowerToUpper(a[i]);
		else if(a[i]>='A'&&a[i]<='Z')
			a[i]=UpperToLower(a[i]);
	}
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
}
