#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return c + 32;
    }
    return c;
}

//int main()
//{
//    char c = 'F';
 //   char r0 = ft_tolower(c);
//    char r1 = tolower(c);

 //   printf("%c. \n", r0);
 //   printf("%c. \n", r1);
//}
