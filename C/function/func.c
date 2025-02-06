#include <stdio.h>

void nat(int n)
{
    if(n == 0)
    {
        return ;
    }
    printf("%d\n",n);
    nat(n-1);
    
}

int main()
{
    nat(20);
    return 0;
}


