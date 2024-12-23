//rotate the given array'a' by k steps,where is k non negative .
//note :k can be greater than n as well where n is the size of array  'a'.
#include<iostream>
using namespace std;
int main(){

 int arr[]={1,2,3,4,5};
 int k=24;
 int n=5;
 //k can be greater than n.
 k=k%n;
 int new_arr[5];
 int j=0;
 //inserting last k elements
for(int i=n-k;i<n;i++){
    new_arr[j]=arr[i];
    j++;
}
//inserting first n-k elements in new arr
for(int i=0;i<=k;i++){
    new_arr[j]=arr[i];
    j++; 
} 
cout<<"new array"<<endl;
for(int i=0;i<n;i++){
    cout<<new_arr[i]<<" ";
}


return 0;
}
