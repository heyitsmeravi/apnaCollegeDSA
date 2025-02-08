#include<iostream> 
using namespace std;                                                         int main(){
        int n;
        cout<<"enter the number:";
        cin>>n;
        for (int i=0;i<n;i++){
                char ch='A';
	       	for (int j=i+1;j>0;j--){
                        cout<<ch+j<<" ";
                }
                cout<<endl;                                                          }
        return 0;
}  
