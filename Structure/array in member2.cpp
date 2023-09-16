#include<stdio.h>
main()
{
    struct student
	{
    int roll;
    float marks[3];
    }s[3];
    for(int i=0;i<3;i++){
        scanf("%d",&s[i].roll);
        for(int j=0;j<3;j++){
            scanf("%f",&s[i].marks[j]);
        }
    }
    for(int i=0;i<3;i++){
        printf("\nRoll for %d = %d",i,s[i].roll);
        for(int j=0;j<3;j++){
            printf("\nPercent for %d = %f",i,s[i].marks[j]);
        }
    }
}
