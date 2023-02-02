#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the N Number");
	scanf("%d ",&n);
	for(i=2;i<=n;i++)
	{
		if(i%2!=0)
		{
		printf("\n%d",i);
	    }
	    else
	    {
	    	printf(" ");
		}
	}
}
