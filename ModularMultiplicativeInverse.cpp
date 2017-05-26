#include<stdio.h>

int n,m,gcd;

void MMI(int a,int b,int *x,int *y)
{
    if(a==0)
    {
        *x=0;
        *y=1;
        gcd=b;
        return;
    }

    int x1=0,y1=0;

    MMI(b%a,a,&x1,&y1);

    *x=y1-(b/a)*x1;
    *y=x1;

    return;
}
int main()
{
    scanf("%d %d",&n,&m);

    int x=0,y=0;
    MMI(n,m,&x,&y);

    if(gcd!=1) printf("No existe");
    if(gcd==1) printf("%d",x);
    return 0;
}
