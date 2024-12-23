//given an array of integers 'a', moves all the even integers at the beginning of the array followed by all the odd integers. the relative 
//order of odd or even integers does not matter . return any array that satisfies the condition.

#include<iostream>
#include<vector>
using namespace std;
void sortByParity(vector <int> &v){
    int lb=0;
    int rb=v.size()-1;
    while(lb<rb){
        if(v[lb]%2==1 && v[rb]==0){
            swap(v[lb],v[rb]);
            lb++;
            rb--;
        }
        if(v[lb]%2==0){
            lb++;
        }
        if(v[rb]%2==1){
            rb--;
        }
    }
    return ;
}



int main(){
int n;
cout<< "enter size"<<endl;
cin>>n;
vector <int> v;
for(int i=0;i<n;i++){
    int ele;
    cin>>ele;
    v.push_back(ele);

}
sortByParity(v);

for(int i=0;i<n;i++){
    cout<<v[i]<<" ";

}


    return 0;
}