//given an integer array 'a' sorted in non-decreasing order,return an array of the squares of each number sorted in non-decreasing order.
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void sortedSquaredArray(vector <int> &v){
    vector <int> ans;
    int lb=0;
    int rb=v.size()-1;
    while(lb<=rb){
        if(abs(v[lb])<abs(v[rb])){
            ans.push_back(v[rb]*v[rb]);
            rb--;
        }
        else{
            ans.push_back(v[lb]*v[lb]);
            lb++;
        }
    }
reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }


}
int main(){
    int n;
cout<<"enter size";
cin>>n;
vector <int> v;
for(int i=0;i<n;i++){
     int ele;
     cin>>ele;
     v.push_back(ele);
}

sortedSquaredArray(v);

    return 0;
}