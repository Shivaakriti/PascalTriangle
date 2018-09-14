// Displaying Pascal Triangle with help of predefined size of pascal triangle 
//and array pointer

#include<stdio.h>		//include standard header file

int main(){
	int i,j,k,l;						//variable use for traversing through pascal trianle element	
	int n=8;						/*n is denoting the number of rows(size) for printing pascal triangle
				 				{you can change according to your requirement}*/
	int a[16][16]={0};					/*a is array use to store the element of pascal triangle
								{it should be change according to the value of n}*/
	
	for(k=1;k<=n;k++){					//k is use to traverse through row of pascal trianlge
		*(a[k-1])=*(a[k-1]+(k-1))=1;
		for(i=0;i<n-(k-1);i++)				//i is use to provide the starting space in the current row of pascal triangle 
			printf(" ");
		for(l=k-1,j=k-2,i=1;i<=(k-2);i++){		/*l is use to store the element in the pascal triangle
								  by adding previous element of the pascal trianle (as mention in the properties of pascal triangle)*/
			*(a[l]+i)=*(a[j]+(i-1))+*(a[j]+i);	//*(a[j]+(i-1)),*(a[j]+i) is showing previous element of array
		}
		for(i=0;i<=(k-1);i++){				//now printing those element with the help of i,k
			printf("%d",*(a[k-1]+i));
			printf(" ");				//providing space after every elemnt as shown in pascal triangle
		}
		printf("\n");					//now moving to the next row of pascal triangle
	}
	return 0;
}
