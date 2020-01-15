#include <stdio.h>
void sort_int_tab(int *tab, unsigned int size)
{
	int tmp;
	int i,j = 0;
	while (j < size -1)
	{
		while ( i < size)
		{
			if (tab[i]  > tab[i+1])
			{
				tmp = tab[i];
				tab[i] = tab[i+1];
				tab[i+1] = tmp;
				i++;
			}
			i++;
		}	
		i = 0;
		j++;
	}	
}
int main()
{
	int i = 0;
	int a[5] = {3,-11,1,120,3};
	sort_int_tab(a,5);
	while (i<5)
	{
		printf("%d\n",a[i]);
		i++;
	}
}
