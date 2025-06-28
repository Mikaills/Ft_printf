#include <stdio.h>
# define hex "0123456789abcdef"
#include <unistd.h>
#include "./ft_libft/libft.h"

int ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	return i;
}
int main()
{
	char p[] = "deneme";
	size_t n;
	int i;
	i = 0;
	size_t x;
	x = 0;
	n = ft_strlen(p);
	while (i < n)
	{
		p[n -1] = p[n - 1] / 16;
		write(1, &hex[p[n - 1] % 16], 1);
		n--;
	}
	/* i = 0;
	while (p[i] != '\0')
	{
		printf("%p\n", p);
		i++;
	}
	write(1, p, 10); */
}

// 0x7ffe9bf3cb8c