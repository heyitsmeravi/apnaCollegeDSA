#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number: ";
	cin>>n;
	for (int i=0;i<n;i++){
		int num=1;
		for (int j=0;j<i+1;j++){
			cout<<j+1<<" ";
		}
		cout<<endl;
	}
	return 0;
}
