#include<stdio.h>
#include<stdlib.h>
int main()
{
		int size,ele,i,flag=0;
		printf("Enter size of an array : ");
		scanf("%d", &size);
		int arr1[size];
		int *ptr1 = arr1;
		printf("Enter array elements : ");
		for(int i=0;i<size;i++)
		{
				scanf("%d", &arr1[i]);
		}
		printf("Enter element to be search in an array : ");
		scanf("%d", &ele);
		for(i = 0 ; i<size ; i++)
		{
				if(*ptr1 == ele)
				{
					flag = 1;
					break;
				}
				ptr1++;
		}
		if(flag == 1)
		printf("Element %d found in location arr[%d]\n", ele, i);
		else
		printf("Element %d is not found in the array \n", ele);
}
