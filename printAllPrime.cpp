#include<iostream>
#include<cmath>

using namespace std;
void printAllPrimes(int n)
{
	int countPrime=0;
	for (int i=2;i<n;i++){
		bool isPrime=true;
		for (int j=2;j<=sqrt(i);j++){
			if (i%j==0){
				isPrime=false;
				break;
			}
		}
		if (isPrime){
			cout<<i<<" ";
			countPrime++;
		}
	}
	cout<<endl;
	cout<<countPrime<<" is the total count of Primes till "<<n;

}
int main(){
int m;
cout<<"enter any number to which you want to find all primes: ";
cin>>m;
printAllPrimes(m);

return 0;
}


