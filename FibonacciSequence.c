


#include <stdio.h>
int main()
{
    unsigned int a;
    unsigned int b;
    unsigned int c;
    a = 0;
    b = 0;
    c = 1;
    while(1)
    {
        if (c < b)
            break;
        printf("%u\n",c);
        a = b;
        b = c;
        c = a + b;
    }
}
