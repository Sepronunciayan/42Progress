int max(int* tab, unsigned int len)
{
	int i;
	int tmp;
	
	if(len == 0)
		return(0);
	i = 0;
	tmp = tab[i];
	while(i < (int)len)
	{
		if(tmp <= tab[i])
			tmp = tab[i];
		i++;
	}
	return(tmp);
}
