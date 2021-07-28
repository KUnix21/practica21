#include <unistd.h>
//funcion que muestra en pantalla los digitos  
//en forma ascendente

void ft_print_numbers(void);


int main(void)
{
	ft_print_numbers();

	return(0);
}

void ft_print_numbers(void)
{
	char num;
	num='0';

	while(num <= '9')
	{
		write(1,&num,1);
		num++;
	}
}
