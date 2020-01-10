/*
 * int		max(int* tab, unsigned int len);
 *
 * The first parameter is an array of int, the second is the number of elements in
 * the array.
 *
 * The function returns the largest number found in the array.
 *
 * If the array is empty, the function returns 0.
 */
int	max(int *tab, unsigned int len)
{
	unsigned int l;
	l = 0;
	while (l < len-1)
	{
		if (tab[l] <= tab[l+1])
		{
			tab[l] = tab[l+1];
		}
		l++;
	}
	return(tab[l]);
}
