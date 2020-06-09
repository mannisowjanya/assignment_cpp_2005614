#include<stdio.h>
int main()
{

    int hh,mm,ss,hour,min;
    printf("hh:mm:ss\n");
    scanf("%d:%d:%d",&hh,&mm,&ss);
     hour=(hh*3600);
     min=mm*60;
     printf("total seconds = %d\n",(hour+min+ss));
     return 0;
}
