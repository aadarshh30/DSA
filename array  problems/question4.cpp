//find the second largest elements in the given array.
//array manipulation
#include<iostream>
using namespace std;
/*int largest(int arr[],int size){
    int max=0;
    for(int i=1;i<size;i++){
        if(arr[i] >arr[max]){
            max=i;
        }
    }
    return max;
}*/
int secondlargest(int arr[],int size){
    int max=0;   
    int second_max= 0;
    for(int i=1;i<size;i++){
        if(arr[i]>arr[max]){
            max=i;
        }
    }
    
    for(int i=1;i<size;i++){
        if(arr[i]>arr[second_max] && arr[i]!=arr[max]){
            second_max=i;
        }
    }
return second_max;
}

int main(){
int arr[]={2,3,5,7,6,1,7};
/*int indexoflargest=largest(arr,6);
cout<<arr[indexoflargest]<<endl;
arr[indexoflargest]=-1;
int indexofsecondlargest=largest(arr,6);
cout<<arr[indexofsecondlargest];*/

int indexofsecondlargest=secondlargest(arr,7);
cout<<arr[indexofsecondlargest];
 return 0;
}