/*
	In the last exercise we written the alphabet to the terminal. But what if we want to write the alphabet in reverse order?
	Well we can do that by using the same code but instead of incrementing the variable c by one we can decrement it by one.

	Let me show you
*/

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z';
	while (c >= 'a')
	{
		write(1, &c, 1);
		c--;
	}
}

/*
int		main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
*/


// Now if you run this code you will see that it will write the alphabet in reverse order to the terminal.
