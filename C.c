#include<stdio.h>
int main()
{
    int a,b=0,c=0,d=0;
    z:
    scanf("%d",&a);
    if(a==1)
    {
      b=b+1;
      goto z;
    }
    else if(a==2)
    {
        c=c+1;
        goto z;
    }
    else if(a==3)
    {
        d=d+1;
        goto z;
    }
    else if(a!=1&&a!=2&&a!=3&&a!=4)
    {
        goto z;
    }
    else if(a==4)
    {
        printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",b);
    printf("Gasolina: %d\n",c);
    printf("Diesel: %d\n",d);
    }
    return 0;
}
