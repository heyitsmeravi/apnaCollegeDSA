#include<iostream>
using namespace std;

int main(){
int a=6,b=10;
cout<<"the result of "<<a <<" and "<<b <<" is:"<<(a&b)<<endl;
int c=6 ,d=10;
cout<<"the result of "<<c <<" and "<<d <<" is:"<<(c|d)<<endl;
int e=6 ,f=10;
cout<<"the result of "<<e <<" and "<<f <<" is:"<<(e^f)<<endl;
int g=10;
cout<<"the left shift result of "<<g<<" is "<<(g<<2)<<endl;
cout<<"the value of g is " <<g <<endl;
cout<<" the rightshift of " <<g <<"by 1" <<"is "<<(g>>1)<<endl;
cout<<++a+--a;

return 0;
}


