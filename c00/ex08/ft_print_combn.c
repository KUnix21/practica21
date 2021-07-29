#include <unistd.h>

void ft_print_combn(int n);
void ft_print(char c);

int main(void)
{
	int cc;
	cc=7;

	ft_print_combn(cc);

	return(0);
}

void ft_print(char c)
{
	write(1,&c,1);
}

void ft_print_combn(int n)
{
	char c[n];
	char lb;
	int in;
	int b;
	int i;

	in=n-1;
	b=0;
	
	for(i=0 ; i<n ; i++)//armo primera combinacion
	{
		c[i]=i+'0';
	}
	//imprimir primera combinacion
	for(i=0 ; i<n ; i++)
	{
		ft_print(c[i]);
	}
		ft_print(',');
		ft_print(' ');

	while(in>=0) //indice indica hsta donde se compl
	{
		if(c[in]=='9') //si la unidad es 9 busacare en que indice sumar uno.
		{
			lb='9';
			while(c[in]==lb && in>=0)
			{
				lb--; // busco el indice donde sumar
				in--;
			}
			if(in>=0)//compruebo que no se haya terminado el vector
			{
				while(in<(n-1)) //sumo uno en el indice y actualizo cada valor posterior aumentando uno excepto el ultimo que sera aumentado en la siguiente ronda
				{
					c[in]++;
					c[in+1]=c[in];
					in++;
				}
			}
		}
		else // sin la unidad no es 9 entonces simplemente aumento uno e imprimo por pantalla
		{
			c[in]++;
			
			for(i=0 ; i<n ; i++)
			{
				ft_print(c[i]);
			}
			i=10-n;// para que no se imprima la ultima coma, la ultima combinacion tiene el primer numero igual a 10 menos la cantidad de cifras
			lb=i+'0';
			if(c[0]!=lb)
			{
				ft_print(',');
				ft_print(' ');
			}
		}
	}
}

