#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    char test[101];
    for(int i=0; i<n; i++)
    {
        int k=0;
        gets(test);
        int l=strlen(test);
        char s[101];
        for(int j=0; j<l; j++)
        {
            if(test[j]>'Z'||test[j]<'A')
                s[k++]=test[j];
        }
        s[k]='\0';
        puts(s);
    }
    return 0;
}


