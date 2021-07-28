#include <unistd.h>

void ft_print_comb(void);

int main(void)
{
	ft_print_comb();
	
	return(0);
}

void ft_print_comb(void)
{
	char u,d,c;

	c='0';
	while(c <= '7')
	{
		d='1';
		while(d<='8')
		{
			u='2';
			while(u<='9')
			{
			
				if(c<d && d<u)
				{
					write(1,&c,1);
					write(1,&d,1);	
					write(1,&u,1);
					if(c<'7')
					{	
						write(1,",",1);
						write(1," ",1);
					}
				}
			
				u++;
			}

			d++;
		}

		c++;
	}
}




