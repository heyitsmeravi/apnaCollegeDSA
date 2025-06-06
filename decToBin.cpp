#include<iostream>
using namespace std;
int decToBin(int n){
	int ans=0,pow=1;
	while (n>0){
		int rem=n%2;
		ans=ans+(pow*rem);
		pow=pow*10;
		n/=2;
}
return ans;
}
		
int main(){
//int n;
//cout<<"enter the decimal number: ";
//cin>>n;
int arr[]={
	1,2,3,4,5,6,7,8,9,10};
for(int i:arr){
int ans=decToBin(i);
cout<<"the binary number is: "<<ans<<endl;
}
return 0;

}


