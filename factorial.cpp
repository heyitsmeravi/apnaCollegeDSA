#include<iostream>
using namespace std;
int factorial(int n){
	int fact=1;
	for (int i=0;i<n;i++){
		fact=fact*(i+1);
	}
	return fact;
}
int main(){
int n;
cout<<"Enter any number of which you want to find the factorial: ";
cin>>n;
cout<<" the factorial of "<<n <<" is "<<factorial(n)<<endl;
return 0;
}


