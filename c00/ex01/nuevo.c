#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

int main(void)
{
	char letter;
	letter='a';
	while(letter <= 'z')
	{
		write(1,&letter,1);
		letter++;
	}

	return(0);
}
