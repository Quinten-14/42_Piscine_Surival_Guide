/*
	So you feel proud of yourself yet? You should be. You are doing great.
	Now let's go to the next exercise. This one might confuse you a bit but don't worry. I will explain everything.

	Before this our character was always a letter. But what if we want to write a number to the terminal?
	Well you will not believe me but we can do that with the same code. Let me show you.
*/

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	c;

	c = '0';
	while (c <= '9')
	{
		write(1, &c, 1);
		c++;
	}
}

/*
int		main(void)
{
	ft_print_numbers();
	return (0);
}
*/

// Now if you run this code you will see that it will write the numbers from 0 to 9 to the terminal.
