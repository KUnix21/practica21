#include <unistd.h>

void ft_print_comb2(void);

int main(void)
{
	ft_print_comb2();
	return(0);
}

void ft_print_comb2(void)
{
	char a1,a2,b1,b2;
	
	a1='0';
	while(a1<='9')
	{
		a2='0';
		while(a2<='9')
		{
			
			b1='0';
			while(b1<='9')
			{
			
				b2='0';
				while(b2<='9')
				{
					if(a1<=b1 && a2<b2)
					{
						write(1,&a1,1);
						write(1,&a2,1);
				
						write(1," ",1);
					
						write(1,&b1,1);
						write(1,&b2,1);
							if(a1<'9' || a2<'8')
							{
								write(1,",",1);
								write(1," ",1);

							}

					}

					b2++;

				}
				b1++;

			}
			a2++;
		}

		a1++;
	}
}




