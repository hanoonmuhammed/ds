#include<stdio.h>
main()
{
int p2[10],p1[10],i;
char a[100],b[100];
printf("enter the first string");
gets(a);
puts(a);
printf("%d\n",a[3]);
for(i=0;i<100;i++)
{
	if(a[i]='x')
	{
		p1[a[i+2]]=a[i-1];
	}
}	

for(i=0;i!='\0';i++)
{
	printf("%d\t",p1[i]);
}
}
