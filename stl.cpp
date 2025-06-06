#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>

using namespace std;
int main(){
vector<int>vec={1,2,3,2,4,8};
vec.push_back(1);
vec.emplace_back(2);
vec.insert(vec.begin(),3);
//vec.pop_back();
for (int ele: vec){
	cout<<ele<<" ";
}

unordered_map<int,int>mp;



cout<<endl;
cout<<"the size of vector vec is: "<<vec.size()<<endl;
cout<<"the capacity of vector vec is: "<<vec.capacity()<<endl;
for (auto ele:vec){
	mp[ele]++;
}
for (auto ele:mp){

	cout<<ele.first<<" "<<ele.second<<endl;
}
cout<<"is empty: "<<vec.empty()<<endl;
cout<<endl;







return 0;
}


