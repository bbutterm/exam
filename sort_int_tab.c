#include <stdio.h>
void ft_swap(int *a, int *b)
{
	int tmp = 0;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void sort_int_tab(int *tab, unsigned int size)
{
	int i,j = 0;
	while (j < size)
	{
		while (i+1 < size)
		{
			if (tab[i] > tab[i+1])
				ft_swap(&tab[i],&tab[i+1]);
			i++;
		}
		i = 0;
		j++;
	}	
}
int main()
{
	int i = 0;
	int a[5] = {1,5,2,9,2};
	sort_int_tab(a,5);
	while (i < 5)
	{
		printf("%d\n",a[i]);
		i++;
	}
}
