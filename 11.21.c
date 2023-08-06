//Q.1 Write a Program to find the reverse of a 1D array using a Pointers

#include<stdio.h>

void main (){
	int j;
	printf("enter the size  of array ;=>");
	scanf("%d",&j);
	
	int a[j],i;
	
	printf ("enter array elementshaa\n");
	
	 for (i=0;i<j;i++){
		printf("j[%d]=",j);
		scanf("%d",&a[i]);
	}
	int *p;
	
	for (i=j-1;i>=0;i--){
	p=&a[i];
	printf("a[%d]=%d\n",i,*p);
	}
}
