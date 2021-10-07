#include<iostream>
using namespace std;

string flipFunt(int len,string a){
	int n=len-1;
	for(int i=0;i<len/2;i++){
		swap(a[i],a[n]);
		n--;
	}
	return a;
}

int main(){
	string a;
	getline(cin,a);
	int n=a.size()-1;
	for(int i=0;i<a.size()/2;i++){
		swap(a[i],a[n]);
		n--;
	}
	for(int i=0;i<a.size();i++){
		if(a[i]<'a'||a[i]>'z'){
			return 0;	
		}
		else{
			switch(a[i]){
				case 'a' : a[i]='0'; break;
				case 'e' : a[i]='1'; break;
				case 'i' : a[i]='2'; break;
				case 'o' : a[i]='3'; break;
				case 'u' : a[i]='4'; break;
			}
		}
	}
	for(int i=0;i<a.size();i++)
		cout <<a[i];
	cout<<"aca";
}
