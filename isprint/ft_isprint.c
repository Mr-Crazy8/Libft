#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int ft_isprint(int c)
{
	if (c >= 32  && c <= 126)
	{
		return (1);
	}
	else
		return (0);
}

int main()
{
	char c = '\t';
	int r0 = ft_isprint(c);
	int r1 = isprint(c);
	printf("%d. \n", r0);
	printf("%d. \n", r1);
}
