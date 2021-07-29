#include <unistd.h>

void ft_putnbr(int nb);
void ft_print(char c);

int main(void)
{
	int num;
	num=-42000000;

	ft_putnbr(num);

	return(0);
}

void ft_print(char c)
{
	write(1,&c,1);
}

void ft_putnbr(int nb)
{
	int cop;
	char ca;
	int cont;

	cop=0;
	cont=0;

	if(nb<0)
	{
		nb=-nb;
		ft_print('-');
	}//para numeros negativos muestra el signo negativo 
	// y convierte el numero en positivo para manejarlo
	if(nb==0) 
	{
		ft_print('0');
	}//si el numero cero lo muestra inmediatamente

	while(nb>0)
	{
		cop=cop*10+nb%10;
		nb/=10;
		cont++;
	}//Cuenta las cifras del numero y lo da vuelta para 
	//poder mostrarlo

	while(cont>0)
	{
		ca=cop%10 + '0';
		ft_print(ca);
		cop/=10;
		cont--;
	}//convierte a caracter cada cifra y lo muestra

}

