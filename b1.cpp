#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a){
		cout<<"Day la tam giac vuong"<<endl;
	}
	else{
		cout<<"Day ko la tam giac vuong"<<endl;
	}
}
