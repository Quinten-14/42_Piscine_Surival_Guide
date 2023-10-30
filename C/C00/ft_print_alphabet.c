/*
	We will learn
		- Use of while loop
		- What is a variable
		- What is the ascii table
		- Comparison operators
		- Increment operators

	You will see that this code is a bit longer but don't leave yet. It's not that hard. I promise.
	Let's break it down.

	We learned how functions work in the previous exercise. So we know that we need a prototype and the content of the function.
	Well in this prototype we see that our argument is void. This means that our function does not take any arguments.

	When our function does not take any arguments it's most likely we will use a variable. A variable is a container that stores a value.
	For example if I want to store the character 'a' in a variable I can do the following: char c = 'a';

	A variable needs both a declaration and an initialization. The declaration is the type of the variable and the name of the variable.
	The initialization is the value that we want to store in the variable. In this case we want to store the character 'a' in the variable c.

	The thing with a variable is that we can manipulate it. We can change it to something else and we can use stuff like operators and more.

	Before we go to our first loop let's talk about the ascii table. The ascii table is a table that contains all the characters that we can use in C.
	You can find the ascii table here: https://www.asciitable.com/ or by using man ascii in your terminal.

	You can see in the ascii table that the characters all have a decimal value. For example the character 'a' has the decimal value 97. That means we can do instead of 'a' the following: 97.

	Now lets go to our first loop. We see that we have a while loop. A while loop is a loop that will run as long as the condition is true. In this case the condition is c <= 'z'.
	The operators are the samen as you probably know from math. The <= means less than or equal to. So the loop will run as long as c is less than or equal to 'z'.

	In the while loop we will write the character c to the terminal and then we will increment the variable c by one.
	Incrementing a variable we can do in one of three ways. But the one I used is the most common one.
	Other options are:
		 c = c + 1;
		 c += 1;

	By incrementing the variable c by one we will go up one character in the ascii table. So we will go from 'a' to 'b' and so on.
	When we hit 'z' the condition will be false and the loop will stop.
	Now if you run this code you will see that it will write the alphabet to the terminal.
*/

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;	// this is the declaration of the variable c. We declare the variable c as a character.

	c = 'a';	// this is the initialization of the variable c. We store the character 'a' in the variable c.
	while (c <= 'z')
	{
		write(1, &c, 1);
		c++;
	}
}

/*
int		main(void)
{
	ft_print_alphabet();
	return (0);
}
*/

// the outcome of this program is that it will write the alphabet to the terminal.
