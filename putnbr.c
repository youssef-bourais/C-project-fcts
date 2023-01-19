
# include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb*(-1);
	}
	if (nb >= 0 && nb <=9)
	{
		ft_putchar(nb + '0');
	}
	if (nb >= 10)
	{
		putnbr(nb/10);
		ft_putchar(nb%10 + '0');
	}
}

# include <stdio.h>

int main()
{
	putnbr(-1997);
}
