#include<stdio.h>
int main()
{
	int a[10],i,j,n,temp;
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("list of element");
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
	    for(j=i+1;j<n;j++)
	    {
	        if(a[i]>a[j])
	        {
	        temp=a[i];
	        a[i]=a[j];
	        a[j]=temp;
	        }
	}
	}
	printf("sorted list \n");
	for(i=0;i<n;i++)
	{
	    printf("%d\n",a[i]);
	}
	printf("median number is:");
	printf("%d\n",a[n/2]);
	return 0;
}
