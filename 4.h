void MirrorMatrix(char a[5][5], char b[5][5])
{
	char c[5][10];
	int i, j, k, space;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			c[i][j] = a[i][j];
			for (k = 0; k < 5; k++)
				if (c[i][j] == b[i][k])
					break;
			if (k < 5)
				break;
		}
		for (space = 1; space < 5 - k; space++)
			c[i][j + space] = b[i][k + space];
		c[i][j+ space] = '\0';
	}
	j = -1;
	for (i = 0; i < 5; i++)
	{
		while (c[i][++j] != '\0')
			printf("%c", c[i][j]);
		printf("\n");
		j = -1;
	}
}
