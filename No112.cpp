#include<iostream>
using namespace std;

int main(){
	string a;
	int n=0;
	getline(cin,a);
	char flip[a.size()];
	for(int i=a.size()-1;i>=0;i--){
		if(a[i]<'a'||a[i]>'z'){
			return 0;	
		}
		else{
			if(a[i]=='a')
				flip[n]='0';
			else if(a[i]=='e')
				flip[n]='1';
			else if(a[i]=='i')
				flip[n]='2';
			else if(a[i]=='o')
				flip[n]='3';
			else if(a[i]=='u')
				flip[n]='4';
			else
				flip[n]=a[i];
			n++;
		}
	}
	for(int i=0;i<a.size();i++)
		cout <<flip[i];
	cout<<"aca";
}
