#include<stdio.h>
#include<stdlib.h>
int main()
{
		int size;
		printf("Enter size of an array : ");
		scanf("%d", &size);
		int arr1[size];
		int *ptr1 = arr1;
		printf("Enter array elements : ");
		for(int i=0;i<size;i++)
		{
				scanf("%d", &arr1[i]);
		}
		for(int i=1;i<size;i++)
		{
				*ptr1++;
		}
		printf("Reversed array is : ");
	    for(int i = 0;i<size;i++)
		{
				printf("%d ", *ptr1);
				ptr1--;
		}
		printf("\n");
}
