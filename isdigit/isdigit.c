#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
int main()
{
	char c = 'D';
	int r0 = ft_isdigit(c);
	int r1 = isdigit(c);

	printf("%d.\n", r0);
	printf("%d.\n", r1);
}
