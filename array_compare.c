#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    char array[5000];
    char array2[5000];
    char array_count[5000][2];
    int i=0,j,count=0,a=0,b=0,x=0,y=0,k,l;
    printf("Enter array_1: ");
    fgets(array,5000,stdin);
    printf("Enarray_22: ");
    fgets(array2,5000,stdin);
    while(array[i] != '\0')
    {
	for (j=0;array2[j] != '\0' ;j++)
	{
	    if (array[i] == array2[j])
	    {
		++count;
	    }
	}
	if (count)
	{
	printf("%c Exists in your content ",array[i]);
	printf("%d times\n",count);
	}
	i++;
	count=0;
    }
}

