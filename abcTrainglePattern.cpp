#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter any number: ";
	cin>>n;
	for (int i=0;i<n;i++){
		for (int j=0;j<i+1;j++){
			cout<<char(65+i)<<" ";
		}
		cout<<endl;
	}
	return 0;
}
