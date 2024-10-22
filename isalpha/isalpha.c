#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int ft_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}

int main()
{
	char c = 'j';
	int r0 = ft_isalpha(c);
	int r1 = isalpha(c);

	printf("%d.\n", r0);
	printf("%d.\n", r1);

}
