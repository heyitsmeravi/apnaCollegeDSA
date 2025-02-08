#include<iostream>
using namespace std;
int factorial(int n){
	int fact=1;
	for (int i=0;i<n;i++){
		fact=fact*(i+1);
	}
	return fact;
}
int permutation(int n, int r){
	int factN=factorial(n);
	int factR=factorial(r);
	int factNmR=factorial(n-r);
	return factorial(n)/(factorial(r)*factorial(n-r));
	}

int main(){
int n,r;
cout<<"enter the value of n: ";
cin>>n;
cout<<"enter the value of r: ";
cin>>r;
cout<<"the permutation of "<<n<< " and " <<r <<" is " <<permutation(n,r);









return 0;
}


