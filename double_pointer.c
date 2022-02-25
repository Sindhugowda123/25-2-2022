#include<stdio.h>
#include<stdlib.h>

#define ARRAY_SIZE 5

void print_array(int **ptr_arg)
{
		        printf("Array elements are : ");
				for(int j=0;j<ARRAY_SIZE;j++)
				{
				printf("%d ",*(*ptr_arg+j));
				}
				printf("\n");
}

void scan_array(int **ptr_arg)
{
		        printf("Enter array elements : ");
				for(int j=0;j<ARRAY_SIZE;j++)
				{
						scanf("%d", *ptr_arg+j);
				}
}

int main()
{
		int *ptr = malloc(5*sizeof(int));
		scan_array(&ptr);
		print_array(&ptr);
		free(ptr);
}
