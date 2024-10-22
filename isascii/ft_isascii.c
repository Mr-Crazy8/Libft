#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
		return (0);
}

int main()
{
    unsigned char c = 200;
    int r0 = ft_isascii(c);
	int r1 = isascii(c);

	printf("%d. \n", r0);
	printf("%d. \n", r1);
}
