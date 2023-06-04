#include<stdio.h>
struct movie{
char name[20];
float rev;
}data[3],temp;
main()
{
int i,j;
for(i=0;i<3;i++)
{
printf("enter data for movie %d\n",i+1);
printf("enter name:");
scanf("%[^\n]",data[i].name);
printf("enter revenue(in millions):");
scanf("%f",&data[i].rev);
getchar();
}
for(i=0;i<3;i++)
for(j=0;j<3-i;j++)
{
if(data[j].rev>data[j+1].rev)
{
temp=data[j];
data[j]=data[j+1];
data[j+1]=temp;
}
}
for(i=0;i<3;i++)
{
printf("%s:",data[i].name);
printf("%0.2f\n",data[i].rev);
}
}
