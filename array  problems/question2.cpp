//find the total number of triplets in the array whose sum is equal to the given value x.
#include<iostream>
using namespace std;
int main(){
    int arr[]={3,1,2,4,0,6};
    int targetsum=5;
    int size=6;
    int triplets=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if(arr[i]+arr[j]+arr[k]==targetsum){
                    triplets ++;
                }
            }
        }
    }
    cout<<triplets<<endl;
    return 0;
}