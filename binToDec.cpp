#include<iostream>
using namespace std;
int binToDec(int n){
	int ans=0;
	int pow=1;
	while (n>0){
		int rem=n%10;
		ans+=(rem*pow);
		n/=10;
		pow*=2;
	}
	return ans;
}
int main(){
int n;
cout<<"Enter the binary number: ";
cin>>n;
int ans=binToDec(n);
cout<<"Decimal number is: "<<ans<<endl;
return 0;
}


