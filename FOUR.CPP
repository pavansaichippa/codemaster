#include<stdio.h>
#include<conio.h>
main()
{
int a[30],n,i,j,k,count[100];
clrscr();
printf("\n enter size\n");
scanf("%d",&n);

printf("enter elements\n");
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
count[a[i]]=1;
}
k=n-1;
int  max=count[a[0]];
 int index;

 for(i=0;i<n;i++)
  {

    for(j=i+1;j<=k;j++)
    {

   if(a[i]==a[j])
     {
	count[a[i]]++;

	if(a[j]==a[k])
	  {k--; j--;}
	else

	 { a[j]=(a[j]+a[k])-(a[k]=a[j]); k--; }
	if(max<count[a[i]]){ max=count[a[i]]; index=a[i]; }

     }

    }


  }
  printf("now array elements are:");
  for(i=0;i<n;i++)
  {

  printf(" \n %d \n",a[i]);
  }


 printf("%d is repeated %d times \t",index,count[index]);



 getch();
}
