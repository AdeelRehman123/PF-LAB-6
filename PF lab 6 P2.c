#include<stdio.h>
int main(){
	int n;int count;
	printf("Enter a number ");
	scanf("%d",&n);
	while(n!=0){
		count+=1;
		n=n/10;
	}
	if(count==1){
		printf("Entered number is not a multiple digit.");
	}
	else{
		printf("Entered number is  a multiple digit.");
	}
	return 0;
}
