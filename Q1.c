#include<stdio.h>
#include<stdlib.h>
int arr[20];
int size=0;
int create(){
	int n,i;
	printf("enter the number of elements(less then 20):");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter element :");
		scanf("%d",&arr[i]);
	}
	size=n;
	return 0;
}
int display(){
	int i=0;
	for(i;i<size;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
int insert(){
	int i,pos,num;
	printf("enter the new number:");scanf("%d",&num);
	printf("enter the pos");scanf("%d",&pos);
	for(i=size;i>=pos;i--){
		arr[i]=arr[i-1];
	}
	arr[pos-1]=num;
	size=size++;
	printf("new number added");
	return 0;
}
int del(){
	int i,pos,num;
	printf("enter the number to del"),scanf("%d",&num);
	for(i=0;i<size;i++){
		if (num==arr[i]){
			pos=i;
		}
	}
	for(i=pos;i<size;i++){
		arr[pos]=arr[pos+1];
	}
	size=size--;
	printf("number have been remove");
	return 0;

}
int linear_search(){
	int num,i;
	printf("enter the number to serach:");scanf("%d",&num);
	for(i=0;i<size;i++){
		if(arr[i]==num){
			printf("postion is %d",i);
		}
	}return 0;
}

int main(){
	int n=1;
	while(n!=0){
		printf("select one of the option:\n 1.Create \n 2.Display \n 3.Insert \n 4.Delete \n 5.Linear search \n 6.exit");
		scanf("%d",&n);
		switch(n){
			case 1:
				create();
				break;
			case 2:
				display();
				break;
			case 3:
				insert();
				break;
			case 4:
				del();
				break;
			case 5:
				linear_search();
				break;
			case 6:
				return 0;
				
		}
		
	}
	return 0;
	
}
