// write a transpose of a matrix

#include<iostream>
using namespace std;
int main(){
    int r1,c1;
    cout<< "enter rows and columns of A";
    cin>>r1>>c1;
    int A[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>A[i][j]; 
        }
        cout<<endl;
    }
cout<<"transpose of matrix A"<<endl;
for(int i=0;i<c1;i++){
    for(int j=0;j<r1;j++){
        cout<<A[j][i ]<<" ";
    }
   cout<<endl;
}


    return 0;

}