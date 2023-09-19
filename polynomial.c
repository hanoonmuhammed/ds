#include<stdio.h>
#include<string.h>
void main()
{
int p2[100],p1[100],p3[100],i;
char a[100],b[100],j;

printf("enter the first string\n");
scanf("%s",a);
printf("enter the second string\n");
scanf("%s",b);
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
for(i=0;i<10;i++)
{
if(p1[i]+p2[i]!=0)
{
printf("%dx^%d+",p1[i]+p2[i],i);
}
else
continue;
}


}
