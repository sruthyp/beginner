#include<stdio.h>
int main()
{
	int n,a,b,i,sum=0;
	scanf("%d",&n);
	scanf("%d",&a);
	scanf("%d",&b);
	for(i=0;i<n;i++)
	{
		sum=sum+a;
		a=a+b;

	}
	printf("%d",sum);
	return 0;
}
