#include<stdio.h>
int main()
{
		int row,col;
		printf("Enter value of row : ");
		scanf("%d", &row);
		printf("Enter value of col : ");
		scanf("%d", &col);
		int arr1[row][col];
		int arr2[row][col];
		int (*ptr1)[col] = arr1;
		int (*ptr2)[col] = arr2;
		printf("Enter elements of an arr1 : ");
		for(int i=0;i<row;i++)
		{
				for(int j=0;j<col;j++)
				{
						scanf("%d", (*(ptr1+i)+j));
				}
		}
		printf("Enter elements of an arr2 : ");
		for(int i=0;i<row;i++)
		{
				for(int j=0;j<col;j++)
				{
						scanf("%d", (*(ptr2+i)+j));
				}
		}
		printf("The resultant array is : ");
		for(int i=0;i<row;i++)
		{
				for(int j=0;j<col;j++)
				{
						printf("%d ", (*(*(ptr1+i)+j))+(*(*(ptr2+i)+j)));
				}
		}
		printf("\n");
}
