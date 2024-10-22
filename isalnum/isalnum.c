#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int ft_isalnum(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}

int main()
{
	char c = '*';
	int r0 = ft_isalnum(c);
	int r1 = isalnum(c);

	printf("%d. \n", r0);
	printf("%d. \n", r1);
}
