#include<stdio.h>
int main(){
	int year;
	printf("Enter Year (yyyy):");
	scanf("%d",&year);
	if(year%400==0||(year%4==0&&year%100!=0)){
		printf("%d is a leap year",year);
	}else{
		printf("%d is nt a leap year",year);
	}
	return 0;
}

