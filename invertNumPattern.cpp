#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number: ";
	cin>>n;
	for (int i=0;i<n;i++){
		for (int k=0;k<i;k++){
			cout<<" ";
		}
		for (int j=i;j<n;j++){
			cout<<i+1;
		}
		cout<<endl;
	}
	return 0;
}

