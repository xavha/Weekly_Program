#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[10];
	int count[10];
	for(int i=0;i<10;i++) {
		cin >> a[i];
		count[i]=1;	
	}
	sort(a,a+10);
	for(int i=0;i<10;i++){
		for(int j=10;j>i;j--){
			if(a[j]==a[i]) count[i]++;
		}
	}
	//FindcountMode
	int countMode=count[0];
	int mode=0;
	bool check=1;
	for(int i=0;i<10;i++){
		if(count[i]>countMode){
			countMode=count[i];
			check=1;
			mode=i;
		}
		else if(count[i]==countMode&&i!=0) check=0;
	}
	//for(int i=0;i<10;i++) cout << a[i]<<" "<<count[i]<<endl;
	if(check==1) cout << a[mode];
}
