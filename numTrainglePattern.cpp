#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter any number: ";
	cin>>n;
	int num=1;
	for (int i=1;i<n+1;i++){
		for (int j=0;j<i;j++){
			cout<<num<<" ";
		}
		cout<<endl;
		num++;
	}
	return 0;
}

