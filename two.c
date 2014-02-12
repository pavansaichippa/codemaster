#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,ar1,ar2,m;
	int *a,*b,*c;
	float mid;
	clrscr();
	printf("enter no.of entries in 1st array\n");
	scanf("%d",&ar1);
	printf("enter no.of entries in 2nd array\n");
	scanf("%d",&ar2);
	m=ar1+ar2;
	a=(int*)malloc(sizeof(int)*ar1);
	b=(int*)malloc(sizeof(int)*ar2);
	c=(int*)malloc(sizeof(int)*(m));
	printf("enter elements of 1st array\n");
	for(i=0;i<ar1;i++)
	scanf("%d",&a[i]);
	printf("enter elements of 2nd array\n");
	for(i=0;i<ar2;i++)
	scanf("%d",&b[i]);
	for(i=0,j=0,k=0;i<ar1||j<ar2;)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			i++;
			k++;
		}
		else
		{
			c[k]=b[j];
			j++;
			k++;
		}
	}
	if(i<ar1)
	{
		while(i<=ar1)
		{
		c[k]=a[i];
		k++;
		i++;
		}
	}
	else if(j<ar2)
	{
		while(j<=l2)
		  {
			c[k]=b[j];
			k++;
			j++;
		  }
	}
	if(m%2==0)
	{
	      mid=(float)(c[(m-1)/2]+c[((m-1)/2)+1])/2;
	}
	else
	mid=c[m/2];
	printf("\n median is %f",mid);
	getch();
}