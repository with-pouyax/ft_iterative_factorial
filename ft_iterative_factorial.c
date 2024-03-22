#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	r;

	r = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (r);
	while (nb > 0)
	{
		r *= nb;
		nb--;
	}
	return (r);
}
int main(void)
{
    int a = 5;
    int b = ft_iterative_factorial(a);

    printf("%d\n", b);

    return 0;
}
