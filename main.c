#include <stdio.h>
#include <stdlib.h>
/*
//数据结构编程题1.16
int main()
{
    int X,Y,Z;
    int a;
    printf("依次输入X,Y,Z的值:");
    scanf("%d%d%d",&X,&Y,&Z);
    if(X<Y)
    {
        a=X;
        X=Y;
        Y=a;
    }
    if(Y<Z)
    {
        a=Y;
        Y=Z;
        Z=a;
    }
    if(X<Z)
    {
        a=X;
        X=Z;
        Z=a;
    }
    printf("从大到小输出:%d %d %d",X,Y,Z);
}
*/
/*
//数据结构编程题1.20
void main()
{
    int n,i;
    float x;
    printf("输入n,x的值:");
    scanf("%d %f",&n,&x);
    float a[n+1];
    printf("输入a[n+1]的值:");
    for(i=0;i<=n;i++)
    {
        scanf("%f",&a[i]);
    }
    float p=a[n];
    for(i=n;i>=1;i--)
    {
        p=a[i-1]+x*p;
    }
    printf("得到p的值为:%f",p);
}
*/
