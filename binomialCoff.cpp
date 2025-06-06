#include<iostream>
using namespace std;
int binomialCoff(int n,int r){
	int num=1;
	int denumr=1;
	int nmr=n-r;
	int denumnMr=1;
	while (n>0){
		num=num*n;
		n--;
	}
	while (r>0){
		denumr=denumr*r;
		r--;
	}
	while (nmr>0){
		denumnMr*=nmr;
		nmr--;
	}
	int ncr=num/(denumr*denumnMr);
	return ncr;
}


int main(){
int n,r;
cout<<"enter n and r";
cin>>n>>r;
int ncr=binomialCoff(n,r);
cout<<"the binomial coefficient is "<<ncr<<endl;









return 0;
}


