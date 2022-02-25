#include<stdio.h>

void reverse(int num)
{
		if(num<=0)
		{
				return ;
		}
		else
		{
				printf("%d ", num);
				reverse(num-1);
		}
}

int main()
{
		int num=10;
		reverse(num);
		printf("\n");
}
