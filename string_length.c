#include<stdio.h>
int main()
{
		char str[10];
		printf("Enter string : ");
		scanf("%s", str);
		char* ptr = str;
		int count=0;
		while(*ptr != '\0')
		{
				count++;
				ptr++;
		}
		printf("Length of string is : %d\n", count);
}
