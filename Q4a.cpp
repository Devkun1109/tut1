#include<iostream>
using namespace std;
int main(){
    int a[3][3]={11,12,13,21,22,23,31,32,33};
    int b[3][3];
    int i,j,p,q;
    for(i=2,p=0;i>=0&&p<3;i--,p++){
        for(j=2,q=0;j>=0&&q<3;j--,q++){
            b[p][q]=a[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}