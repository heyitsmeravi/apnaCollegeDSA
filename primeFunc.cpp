#include<iostream>
#include<cmath>

using namespace std;
void primeCheck(int n){
	bool isPrime=true;
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0){
			isPrime=false;
			break;
		}
	}
	if (isPrime && n!=1){
		cout<<n<<" is a prime Number."<<endl;
	}
	else{
   		 cout<<n<<" is not a prime Number."<<endl;
	}
}

int main(){
int n;
cout<<"enter any number: ";
cin>>n;
primeCheck(n);









return 0;
}


