#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int d1,d2,d3,x1,x2,x3,y1,y2,y3;
printf("enter coordinates of vertex1\n");
scanf("%d%d",&x1,&y1);
printf("enter coordinates of vertex1\n");
scanf("%d%d",&x2,&y2);
printf("enter coordinates of vertex1\n");
scanf("%d%d",&x3,&y3);
d1=sqrt(pow(abs(x1-x2),2)+pow(abs(y1-y2),2));
d2=sqrt(pow(abs(x2-x3),2)+pow(abs(y2-y3),2));
d3=sqrt(pow(abs(x3-x1),2)+pow(abs(y3-y1),2));

if((d1+d2)>d3||(d2+d3)>d1||(d1+d3)>d2)
{
if(d1==d2==d3)
{
 printf("equi triangle");
}
if((d1!=d2)&&(d2!=d3)&&(d1!=d3))
{
  if(pow(d1,2)==pow(d2,2)+pow(d3,2)||pow(d2,2)==pow(d1,2)+pow(d3,2)||pow(d3,2)=pow(d1,2)+pow(d2,2))
  printf("right triangle");
  else printf("scalene");
}
if(d1==d2||d2==d3||d3==d1)
{
if(pow(d1,2)==pow(d2,2)+pow(d3,2)||pow(d2,2)==pow(d1,2)+pow(d3,2)||pow(d3,2)=pow(d1,2)+pow(d2,2))
printf("right isosceles");
else
printf("isosceles");
}

}
}