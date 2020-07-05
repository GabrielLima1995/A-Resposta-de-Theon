#include<stdio.h>

int main()

{
    int n,i,t,aux=25,num;

    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
       scanf("%d",&t);

        if (t<aux)
        {
            aux=t;
            num=i;

        }

    }
    printf("%d\n",num);



    return 0;
}
