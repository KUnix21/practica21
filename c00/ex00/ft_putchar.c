#include <unistd.h>

/*Declaramos la funcion prototipo para que el programa la reconosca
 * el prototipo tiene 3 partes 
 * 1 el tipo de retorno de la funcion en este caso es void porque no 
 * retorna ningun valor
 * 2 el nombre de la funcion en este caso ft_putchar
 * 3 entre parentesis indicamos los argumentos de la funcion que son 
 * los parametros con los que tiene que trabajar la funcion*/

void ft_puchar(char c);

/*esta funcion se llama ft_putchar recive como parametro un caracter c
 * y lo muestra por el stram, para mostrar el parametro enviado se hace
 * un enlace con &c */

void ft_putchar(char c){
	write(1,&c,1);
	
}

/*esta es la funcion principal, en ella se hace uso de la funcion 
 * ft_putchar, se le envia el parametro j. El void dentro del argumento de la funcion, significa que la funcion no admite ningun argumento */

int main(void){
	ft_putchar('j');
	return(0);
}



