#include<iostream>
using namespace std;
int main(){
    int arr[]={23,45,12,70,91};
    int size=sizeof(arr)/sizeof(arr[0]);
   
    int max=0;
    for( int i=1;i<size;i++) {
        
        if(arr[i]>arr[max]){
            max=i;
        }
    }
    cout<<"maximum integer is "<<arr[max]<<endl;
    return 0;
}