#include<stdio.h>
#include<stdlib.h>
int main()
{
		int size;
		printf("Enter size of an array : ");
		scanf("%d", &size);
		int arr1[size], arr2[size];
		int *ptr1 = arr1;
		int* ptr2 = arr2;
		printf("Enter array elements of arr1 : ");
		for(int i=0;i<size;i++)
		{
				scanf("%d", &arr1[i]);
		}
		printf("Enter array elements of arr2 : ");
		for(int i=0;i<size;i++)
		{
				scanf("%d", &arr2[i]);
		}	
		for(int i=0;i<5;i++)
		{
			   *ptr1 = *ptr1 ^ *ptr2;
			   *ptr2 = *ptr1 ^ *ptr2;
		       *ptr1 = *ptr1 ^ *ptr2;
		        ptr1++;
                ptr2++;
		}
		printf("After swapping : arr1 = ");
		for(int i=0;i<5;i++)
		{
				printf("%d ", arr1[i]);
		}
		printf("\n");
		printf("After swapping : arr2 = ");
		for(int i=0;i<5;i++)
		{
				printf("%d ", arr2[i]);
		}
		printf("\n");
}
