#include<stdio.h>
#include<string.h>
struct poly
{
	int exp;
	int cof;
};	
int main()
{
char a[100],b[100];
int p1[100],p2[100],p3[100],i;
struct poly pol1,pol2,pol3;
printf("Enter first polynomial\n");
scanf("%s",a);
printf("Enter second polynomial\n");
scanf("%s",b);
for(i=0;i<100;i++)
{
	pol1.exp=0;
	pol1.cof=0;
	pol2.exp=0;
	pol2.cof=0;
	pol3.exp=0;
	pol3.cof=0;
}
const char *plus="+";	
char *token1 = strtok(a,plus);
while(token1 != NULL)
{
	sscanf("%dx^%d",pol1.cof,pol1.exp);
	p1[pol1.exp]=pol1.cof;
	scanf("%d",p1[0]);
	token1=strtok(NULL,plus);
}	
char *token2 = strtok(b,plus);
while(token2 != NULL)
{
	sscanf("%dx^%d",pol2.cof,pol2.exp);
	p2[pol2.exp]=pol2.cof;
	scanf("%d",p2[0]);
	token2=strtok(NULL,plus);
}
for(i=1;i<100;i++)
{	
	p3[i]=p1[i]+p2[i];
	if(p3[i]!=0)
	printf("%dx^%d",p3[i],i);
}
printf("%d",p1[0]+p2[0]);
}

