#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while(scanf("%d",&n),n!=0)
    {
        long long int a1=2,a2=1;
        if(n>2)
        {
            for(int i=3; i<=n; i++)
            {
                long long int j=a1;
                a1=a1+a2;
                a2=j;

            }
            printf("%lld\n",a1);
        }
        else
        {

            printf(n==1?"1\n":"2\n");

        }

    }


    return 0;
}
