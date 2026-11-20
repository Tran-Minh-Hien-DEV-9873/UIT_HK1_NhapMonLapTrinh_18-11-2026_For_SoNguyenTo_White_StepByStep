
#include <stdio.h>

int main()
{
    int n =4;
    int i=1;
    int tong = 0;
    while(i<=n)
    {
        if(n%i==0)
        {
            tong = tong+1;
        }
        i++;
    }
    if(tong==2)
    {
        printf("So nguyen to");
    }
    else
    {
        printf("Ko phai so nguyên to");
    }

    return 0;
}

