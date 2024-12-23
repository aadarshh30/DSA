//search if a given element is present in the array or not.if it is not present then return -1 else return the index
#include<iostream>
using namespace std;
int main(){
 int arr[]={3,9,18,11,7};     //find if 12 is present or not.
 int size=sizeof(arr)/sizeof(arr[0]);
 int key=11;
 int ans=-1;
 for(int i=1;i<size;i++){
    if(arr[i]==key){
        
       ans=i;
    }

 }
cout<<endl<<ans;

return 0;
}




   
