#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return c - 32;
	}
	return c;
}

//int main()
//{
//	char c = 'E';
//	char r0 = ft_toupper(c);
//	char r1 = toupper(c);

//	printf("%c. \n", r0);
//	printf("%c. \n", r1);
//}
