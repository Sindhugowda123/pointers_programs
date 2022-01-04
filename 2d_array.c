#include<stdio.h>
int main()
{
		int row,col;
		printf("Enter value of row : ");
		scanf("%d", &row);
		printf("Enter value of col : ");
		scanf("%d", &col);
		int arr[row][col];
		int (*ptr)[col] = arr;
		printf("Enter elements of an array : ");
		for(int i=0;i<row;i++)
		{
				for(int j=0;j<col;j++)
				{
						scanf("%d", (*(ptr+i)+j));
				}
		}
		printf("2D array elements are : ");
		{
				for(int i=0;i<row;i++)
				{
						for(int j=0;j<col;j++)
						{
								printf("%d ", *(*(ptr+i)+j));
						}
				}
				printf("\n");
		}
}
