#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={11,12,13,21,22,23,31,32,33};
    int sum=0;
    cout<<"sum of rows are"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
            cout<<arr[i][j]<<" ";
            }
        cout<<"sum of row no."<<i<<" is "<<sum<<endl;
        sum=0;
    }
    cout<<"sum of cols are :"<<endl;
    for(int j=0;j<3;j++){
        for(int i=0;i<3;i++){
            sum+=arr[i][j];
        }
        cout<<"sum of col no."<<j<<"is"<<sum<<endl;
        sum=0;
    }
}