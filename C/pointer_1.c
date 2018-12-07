
#include<stdio.h>
int main()
{
	int n = 0 ,i = 0,j = 0;
	int A[n];
	int temp = 0;

	printf("please enter the size of array/buffer:\n");
	scanf("%d", &n);

	printf("Enter the numbers: \n");
	for( i = 0; i < n; i++){
		scanf("%d",&A[i]);
	}


	for(i = 0; i < n; i++)
	{
	  printf("Array contain A[%d] : %d\n", i , A[i]);
	}

	for ( i = 0; i < n; i++) {
		for( j = i; j < n; j++ ) {
				printf("TANDUR A[%d] : %d  ,A[%d]:  %d  i: %d\n", j, A[j],j++,A[j++], i);
			if ( A[j] > A[j++] ){
				printf("Inside if TANDUR A[%d] : %d  ,A[%d]:  %d\n", j, A[j],j++,A[j++]);
				temp = A[j];
				A[j] = A[j++];
				A[j++] = temp;
			}
		}
	}

	for(i = 0; i < n; i++)
	{
	  printf("Array contain A[%d] : %d\n", i , A[i]);
	}
}
