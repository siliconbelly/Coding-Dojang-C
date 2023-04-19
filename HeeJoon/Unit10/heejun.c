// 10.8
#include <stdio.h>
 
int main()
{
    printf("%s %o %lld %Lf\n", "Hello, world!", 076, -2147483647ll, 4.528172l);
 
    return 0;
}

// 10.9

#include <stdio.h>
 
int main()
{
    const long double con1 = -2.225074e-308L;
    const int con2 = 0x1285;
    const long long con3 = 9223372036854775807LL;
 
    printf("%Le 0x%x %lld\n", con1, con2, con3);
 
    return 0;
}
