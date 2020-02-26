int delete1(int num1, int num2, int *p)
{
	int i, j;
	for (i = 0; i < num1; i++)
	{
		if (i == num2 - 1)
		{
			for (j = i; j < num1 - 1; j++)
			{
				*(p + j) = *(p + j + 1);
			}
			break;
		}
	}
	return num1 - 1;
}