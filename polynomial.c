#include<stdio.h>
#include<string.h>
void main()
{
int p2[100],p1[100],p3[100],i,k1,k2;
char a[100],b[100],j;

printf("enter the first polynomial\n");
gets(a);
printf("enter the second polynomial\n");
gets(b);
for(i=0;i<10;i++)
{
	p1[i]=0;
	p2[i]=0;
}
for(i=0;i<strlen(a);i++)
{
	if(a[i]=='x')
	{
		j=(int)a[i+2]-48;
		p1[j]=(int)a[i-1]-48;
		
	}	
}
for(i=0;i<strlen(b);i++)
{
	if(b[i]=='x')
	{
		j=(int)b[i+2]-48;
		p2[j]=(int)b[i-1]-48;
		
	}
}
for(i=1;i<10;i++)
{
if(p1[i]+p2[i]!=0)
{
printf("%dx^%d+",p1[i]+p2[i],i);
}
}
k1=strlen(a)-1;
k2=strlen(b)-1;
if(a[k1-1]=='+')
p1[0]=(int)a[k1]-48;
else
p1[0]=0;
if(a[k2-1]=='+')
p2[0]=(int)b[k2]-48;
else
p2[0]=0;

printf("%d",p1[0]+p2[0]);
}
