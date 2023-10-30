/*
	This is our first real challenge and This one and all the next ones will be optional. You only have to make the exercises till ex04 to get 50%.
	But why pass barely when we can push ourselves to the limit and get 100%. I really believe that you can do it.

	The next exercises will be a bit harder but I will explain everything and I will give you some tips and tricks to make it easier for you.

	Scroll to the bottom if you want a quick explanation of the code.
*/

#include <unistd.h>

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	e;

	c = '0';
	while (c <= '7')
	{
		d = c + 1;
		while (d <= '8')
		{
			e = d + 1;
			while (e <= '9')
			{
				write(1, &c, 1);
				write(1, &d, 1);
				write(1, &e, 1);
				if (c != '7')
					write(1, ", ", 2);
				e++;
			}
			d++;
		}
		c++;
	}
}

/*
int		main(void)
{
	ft_print_comb();
	return (0);
}
*/

// Now if you run this code you will see that it will write all the combinations of three different numbers to the terminal.

/*
	Let's break down our code. We see that we have three variables. c, d and e. We also see that we have three while loops.
	We can't use the same number three times so we need three different variables. We also need three while loops because we need to increment all three variables.

	We see that we have a condition in the first while loop. This condition is c <= '7'. This means that the loop will run as long as c is less than or equal to '7'.
	We see that we increment the variable c by one in the last line of the loop. So we will go from '0' to '1' and so on.

	We see that we have a second while loop in the first while loop. This is called a nested loop. A nested loop is a loop inside a loop.
	We see that we have a condition in the second while loop. This condition is d <= '8'. This means that the loop will run as long as d is less than or equal to '8'.
	We see that we increment the variable d by one in the last line of the loop. So we will go from '1' to '2' and so on.

	We see that we have a third while loop in the second while loop. This is also a nested loop.
	We see that we have a condition in the third while loop. This condition is e <= '9'. This means that the loop will run as long as e is less than or equal to '9'.
	We see that we increment the variable e by one in the last line of the loop. So we will go from '2' to '3' and so on.

	this explanation is made by chatGPT and kinda sucks. I will try to make a better one in the future.
	But for now this is a great moment to ask another student for help if you don't understand something.
*/
