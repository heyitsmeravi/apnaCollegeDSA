#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cout<<"Enter any Number: ";
	cin>>n;
	bool isPrime=true;
	for (int i=2;i<sqrt(n);i++){
		if (n%i==0){
			isPrime=false;
		}
	}
	cout<<(isPrime==true?"prime":"not Prime");
	return 0;
}
