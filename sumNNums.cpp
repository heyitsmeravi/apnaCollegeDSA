#include<iostream>
using namespace std;
int sumNNums(int n){
	int sum=0;
	for (int i=1;i<n+1;i++){
		sum+=i;
	}
	return sum;
}
int main(){
	int num;
	cout<<"Enter any number: ";
	cin>>num;
	cout<<"the sum of " <<num<<" numbers is "<<sumNNums(num);
	return 0;
}
