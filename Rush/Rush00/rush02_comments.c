

#include <unistd.h>

void ft_rush02(int x, int y)
{
	int f;
	int c;

	f = 1; // inicializamos la variable fuera ya que no queremos repetir el proceso
	while (f <= y && x > 0) // al ser f = 1 y tiene que ser mayor para que sea positivo y x tiene que ser mayor que 0 para que sea positivo y poner algo 
	{
		c = 1; // para que se reinicie cada vez que se suma una fila
		while(c <= x) // para que cuando sea menor haga un bucle para las columnas 
		{
			if ((c == 1 && f == 1) || (c == x && f == 1)) //c == 1 es si esta en la primera columna y f == 1 la columna 1 // c == x para el extremo 
				ft_putchar('A');
			else if((c == 1 && f == y) || (c == x && f == y)) // c == 1 columna 1 y f == y es la ultima columna // c == x para el otro extremo de la ultima columna
				ft_putchar('C');
			else if((c == 1) || (c == x) || (f == 1) || (f == y)) // para que entre en cualquiera y no ocupe toda la zona, al tener un else if solo entra si no se cumplen
				ft_putchar('B');
			else
				ft_putchar(' '); //pone los espacios de entre medias//
			c++;
		}
		ft_putchar('\n'); //pasa siguiente fila
		f++;  //suma una fila para que repita una fila hasta terminar todas las x y pasar a la siguiente
	}
}

int main(){
	ft_rush02(1, 5);
	return (0):
}
