#include<stdio.h>
int main()
{
		int row,col,sum=0;
		printf("Enter value of row : ");
		scanf("%d", &row);
		printf("Enter value of col : ");
		scanf("%d", &col);
		int arr1[row][col], arr2[row][col], mul[row][col];
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
		if(row == col)
		{
		printf("The resultant array is : ");
		for(int i=0;i<row;i++)
		{
				for(int j=0;j<col;j++)
				{
						for(int k=0;k<row;k++)
						{
								sum = sum+(*(*(ptr1+i)+k)) * (*(*(ptr2+k)+j));
						}
						*(*(mul+i)+j)=sum;
						sum=0;
				}
		}
		}
		for(int i=0;i<row;i++)
		{
				for(int j=0;i<col;j++)
				{
						printf("%d\t", *(*(mul+i)+j));
				}
		}
		printf("\n");
}
