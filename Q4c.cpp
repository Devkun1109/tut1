#include<iostream>
using namespace std;
int main(){
    int arr[3][2]={11,12,21,22,31,32};
    int art[2][3]={0};
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            art[j][i]=arr[i][j];
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            cout<<art[i][j]<<" ";
            }
        cout<<endl;
    }
}