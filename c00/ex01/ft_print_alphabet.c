#include <unistd.h>
#include <stdio.h>

/*declaro la funcion que utilizare*/


void ft_print_alphabet(void);

int main(void){

	ft_print_alphabet();
	
	return(0);
}


void ft_print_alphabet(void){
	
	char letter;
	letter='a';

	while(letter <= 'z'){
		write(1,&letter,1);
		letter++;
	}
}
