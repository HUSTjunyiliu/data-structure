#include <stdio.h>
#include <stdlib.h>
/*
//���ݽṹ�����1.16
int main()
{
    int X,Y,Z;
    int a;
    printf("��������X,Y,Z��ֵ:");
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
    printf("�Ӵ�С���:%d %d %d",X,Y,Z);
}
*/
/*
//���ݽṹ�����1.20
void main()
{
    int n,i;
    float x;
    printf("����n,x��ֵ:");
    scanf("%d %f",&n,&x);
    float a[n+1];
    printf("����a[n+1]��ֵ:");
    for(i=0;i<=n;i++)
    {
        scanf("%f",&a[i]);
    }
    float p=a[n];
    for(i=n;i>=1;i--)
    {
        p=a[i-1]+x*p;
    }
    printf("�õ�p��ֵΪ:%f",p);
}
*/
