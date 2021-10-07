#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[10];
	int count=0;
	int countmode=0;
	int mode;
	bool check=1;
	for(int i=0;i<10;i++) cin >> a[i];
	int number=a[0];
	sort(a,a+10);
	for(int i=0;i<10;i++){
		if(number==a[i]){
			count++;
		}
		else{
			if(count>countmode){
				countmode=count;
				mode=number;
				check=1;
			}
			else if(count==countmode&&number!=mode) check=0;
			count=1;
			number=a[i];
		}
	}
	if(count>countmode){
		countmode=count;
		mode=number;
		check=1;
	}
	else if(count==countmode&&number!=mode) check=0;
	if(check==1) cout << mode<<endl<<countmode;
}
