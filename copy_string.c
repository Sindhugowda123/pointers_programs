#include<stdio.h>
#include<string.h>
int main()
{
		char str1[10],str2[10];
		int i;
		printf("Enter string : ");
		scanf("%s", str1);
		char* ptr1 = str1;
		char *ptr2 = str2;
		for(i=0;i<strlen(str1);i++)
		{
				*ptr2 = *ptr1;
				ptr1++;
				ptr2++;
		}
		str2[i] = '\0';
		printf("Copied string str2 is : %s\n", str2);
}
