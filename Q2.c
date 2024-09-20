#include<stdio.h>
int main(){
    int a[7]={11,11,12,13,14,15,15};
    int b[7];
    int i,j,p=1,q,s;
    b[0]=a[0];
    for(i=0;i<7;i++){
        q=0;
        for(j=0;j<7;j++){
            if (a[i]==b[j]){
                q=1;
                break;
            }
        }
        if (q==0){
            b[p++]=a[i];
        }

    }
    for(i=0;i<=p;i++){
        printf("%d ",b[i]);
    }
}