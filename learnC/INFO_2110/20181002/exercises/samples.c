#include <stdio.h>

int main(void)
{
    int n,a,b;

    for(n=1;n<=10;++n)
    {
        printf("%i  \n",n);
    }

    printf("A   A+2   A+5\n");
    for(n=0;n<6;++n)
    {   
        printf("%i   %6i   %6i\n",n,n+2,n+5);
    }

    for(a=0,b=8;a<=8;++a,b--)
    {
        printf("%i + %i = %i\n",a,b,a+b);
    }

    return 0;

}
