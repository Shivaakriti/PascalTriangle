#include<stdio.h>
int main(){
	int i,n=8,j,k,l,a[16][16]={0};	
	for(k=1;k<=n;k++){
		*(a[k-1])=*(a[k-1]+(k-1))=1;
		for(i=0;i<n-(k-1);i++)
			printf(" ");
		for(l=k-1,j=k-2,i=1;i<=(k-2);i++){
			*(a[l]+i)=*(a[j]+(i-1))+*(a[j]+i);
		}
		for(i=0;i<=(k-1);i++){
			printf("%d",*(a[k-1]+i));
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
