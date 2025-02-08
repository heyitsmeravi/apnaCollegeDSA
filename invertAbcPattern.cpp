#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	char ch='A';
	for (int i=0;i<n;i++){
		
		for (int j=0;j<i;j++){
			cout<<" ";
		}
		for (int k=i;k<n;k++){
			cout<<ch;
		}
		ch++;
		cout<<endl;
	}
	return 0;
}

