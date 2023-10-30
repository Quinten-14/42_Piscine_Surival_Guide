/*
	Great job so far. Now we have a new concept to learn and that is the if statement.
	An if statement is a statement that will execute a block of code if a condition is true.

	It is constructed kinda the same as a while loop. We have the if statement and then we have the condition.
	The biggest difference is that an if statement will only run once and a while loop will run as long as the condition is true.

	Our exercise is to get a number as an argument and then write the character 'N' to the terminal if the number is negative and the character 'P' if the number is positive.

	But before we do that I will explain you the difference between the int and the char data type.
	We have seen the char data type in the previous exercises. A char data type is a character. A character can be a letter, a number or a symbol.
	An int data type is an integer. An integer is a whole number. So a number without a decimal point.

	An int doesn't use the ascii table. This is handy because we can use the int data type to store numbers and then use operators to manipulate them.
	If we would do this code on a char it would not work because it would take the ascii number and those are always positive.

	Now let's go to the exercise. It will explain itself.
*/

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, 'N', 1);
	else
		write(1, 'P', 1);
}

/*
int		main(void)
{
	ft_is_negative(5);
	return (0);
}
*/

// Now if you run this code you will see that it will write the character 'P' to the terminal.

// Quick note: You see that I use an else. An else is used when the if statement is false. So if the condition is false it will execute the code in the else statement.
// You also don't need to put the curly braces around the code in loops or conditions if it is only one line of code. So in this code I didn't use curly braces around the write function.
