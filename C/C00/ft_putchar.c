/*
	So we made our very first function. A function is a block of code that performs a specific task. The great thing about a function is that we can call it as many times as we like.
	A function always has a prototype and the content of the function. The prototype is the declaration of the function. It tells the compiler what the function is called, what it returns and what arguments it takes.
	everything between the curly braces is the content of the function. The content of the function is the code that will be executed when the function is called.

	So what does everything mean?
	- void: this is the return type of the function. In this case it means that the function does not return anything.
	- ft_putchar: this is the name of the function.
	- (char c): this is the argument of the function. In this case it is a character. A character is one of the many data types in C. More about that later.
	- write(1, &c, 1): this is the content of the function. The write function in this case writes the character c to the terminal.

	Let's break down the write function:
	- 1: this is the file descriptor. In this case 1 is the file descriptor for the standard output. The standard output is the terminal. No need to worry about this for now.
	- &c: this takes the argument of the function and passes it to the write function.
	- 1: this is the number of bytes to write. In this case it is 1 because we are writing one character to the terminal.

	What would be the outcome of this code?
	Well at the moment it would be nothing because we are missing something and that is a main function. A main function is needed to run this program.
	I included the main function for this project below but note that you don't need to keep this in your file when you get it evaluated. It's simply not allowed.
	That's because the subject asks to create a function and not a program.

	Why do I add it then?
	Well because I want to show you how to run this code.

	How do I run this code?
	Uncomment the main function below and then save this file. Open your terminal and navigate to the directory where this file is located.
	Then run the following command: cc -Wall -Werror -Wextra ft_putchar.c
	This will compile the code and create an executable file. To run the executable file run the following command: ./a.out
	But you can also compile and run the code in one command: cc -Wall -Werror -Wextra ft_putchar.c && ./a.out

	What is the -Wall -Werror -Wextra?
	These are flags that are used to compile the code. The -Wall flag will show all warnings. The -Werror flag will treat all warnings as errors. The -Wextra flag will enable some extra warnings.
	These flags are not mandatory but it is good practice to use them. It will help you to write better code. Moulinette will also use these flags to compile your code. So it is good to get used to them.
	This will also help you to get used to the errors and warnings that you will get when you write code that is not allowed.

	Now comment the main again and you can see for yourself that the code will not run anymore. That's because we don't have a main function anymore. I love it to break my code to see what happens and get used to errors.
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
int		main(void)
{
	ft_putchar('H');
	return (0);
}
*/

// the outcome of this program is that it will write the character 'H' to the terminal.
