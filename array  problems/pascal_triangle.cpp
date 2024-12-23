//given an integer n, return the list n rows of pascal's triangle
#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>  > pascalTriangle(int n){
    vector<vector<int> > pascal(n);
    for(int i=0;i<n;i++){
        pascal[i].resize(i+1);               //pascal is a vector of vectors ,pascal[i] is a vector
        for(int j=0;j<=i;j++){
            if(j==0 || j==i){
                pascal[i][j]=1;
            }
            else{
                pascal[i][j]=pascal[i-1][j]+pascal[i-1][j-1];
            }
        }
       
    }
return pascal;
}
int main(){

int n;
cout<<"enter size";
cin>>n;
vector <vector<int> > ans;
ans =pascalTriangle(n); //ans is vector of vector.
for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
        cout<<ans[i][j]<<"  ";
    }cout<<endl; 
}





    return 0;
}