//given an array of integers of size n.answeer q queries where you need to print the sum of vslues in a given range
//indices from l to r (both included) and note the value of l and r in queries follow 1 based indexing.

#include<iostream>
#include<vector>
using namespace std;
//index ->0 1 2 3 4 5 6
//vector ->0 x1 x2

//0 based indexing -> 0.....n-1
// 1 baes indexing -> 1.....n

int main(){
    int n;
    cout<<"enter size";
    cin>>n;
    vector <int> v(n+1,0);   //(size,initialised value)
    for (int i = 1; i <=n; i++)
    { 
        cin>>v[i];
     
    }
    //calculate prefix sum array

    for (int i = 1; i <=n; i++)
    {
        v[i]=v[i]+v[i-1];
    }

    int q;
    cout<<"enter number of  queries";
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        //ans= prefixsum[r]-prefixsum[l-1]
        int ans=0;
        ans=v[r]-v[l-1];
        cout<<ans<<endl;
    }

    return 0;
}