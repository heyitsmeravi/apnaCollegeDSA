#include<iostream>
using namespace std;
void sumNum(int n){
	int sum=0;
	while (n>0){
		int rem=n%10;
		sum+=rem;
		n/=10;
	}
	cout<<"the sum of digits is:"<<sum<<endl;
}
int main(){
int m;
cout<<"enter any number (m>0)";
cin>>m;
sumNum(m);









return 0;
}


