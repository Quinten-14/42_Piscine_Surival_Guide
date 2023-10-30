
#include <unistd.h>

void	ft_print(char c, char d, char e, char f)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, " ", 1);
	write(1, &e, 1);
	write(1, &f, 1);
	if (c != '9' || d != '8' || e != '9' || f != '9')
		write(1, ", ", 2);
}

void	ft_loops(char c, char d, char e, char f)
{
	while (c <= '9')
	{
		while (d <= '9')
		{
			while (e <= '9')
			{
				while (f <= '9')
				{
					ft_print(c, d, e, f);
					f++;
				}
				e++;
				f = '0';
			}
			d++;
			e = c;
			f = d + 1;
		}
		c++;
		d = '0';
		e = c;
		f = d + 1;
	}
}

void	ft_print_comb2(void)
{
	char	c;
	char	d;
	char	e;
	char	f;

	c = '0';
	d = '0';
	e = '0';
	f = '0';

	ft_loops(c, d, e, f);
}

/*
int		main(void)
{
	ft_print_comb2();
	return (0);
}
*/
