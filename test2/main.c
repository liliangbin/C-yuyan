#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        double P= 3.1415926;
        double r;
        scanf("%lf",&r);

        double s,v;
        s=P*4*r*r;
        v=(4/3.0)*P*r*r*r;

        printf("%.2f %.2f %.2f\n\n",r,s,v);
    }

    return 0;
}
