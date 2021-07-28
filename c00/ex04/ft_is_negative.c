#include <unistd.h>

void ft_is_negative(int n);

int main(void)
{
	int num;
	num=0;

	ft_is_negative(num);
	return(0);
}

void ft_is_negative(int n)
{
	char r;
	if(n < 0)
	{
		r='N';		
	}else
	{
		r='P';
	}

	write(1,&r,1);
}



