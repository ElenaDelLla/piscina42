#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void    ft_putvet(combn, n)
{
	int c;

	c = 0;
	while (c < n) // imprimir ceros
	{
		ft_putchar(vet[c] + '0');
		c++;
	}
}

int		ft_get_index(int combn[], int n)
{
	int c;
	int max; // valor máximo que no conocemos

	c = 0;
	max = 10 - n;
	while (c < n)
	{
		if (combn[c] == max)
			return (c - 1);
		if (c == (n - 1) && combn[c] < max)
			return (c);
		c++;
		max++;
	}
	return (-1);
}

void	ft_increment(int vet[], int n, int index)
{
	int c;

	c = index + 1;
	vet[index]++;
	while (c <= n)
	{
		vet[c] = vet[c - 1] + 1;
		c++;
	}
}

void	ft_print_combn(int n)
{
	int combn[n]; // almacenamos los numeros que tenemos que imprimir aqui
	int c;
	int pos_index; // posicion del indice

	if (n >= 10 || n <= 0) //  0 < n < 10
		return ;
	else // imprimir secuencias
	{
		c = 0;
		while (c < n) // loop en el cual asignamos kis valores al vector de la primera combinacion (012...)
		{
			combn[c] = c; // asignacion dek valor de cada digito para completar el vector de la primera combinacion
			c++;
		}
		while (ft_get_index(combn, n) != -1) //imprimir los vectores de las combinaciones menos la ultima
		{
			pos_index = ft_get_index(combn, n); // almacenamiento del index
			ft_putvet(combn, n); // imprime combn[]
			ft_increment(combn, n, pos_index); // incrementa en x
			write(1, ", ", 2);
		}
		ft_putvet(combn, n); //imprimir el vector de la ultima combinacion (ej: 789)
	}
}
