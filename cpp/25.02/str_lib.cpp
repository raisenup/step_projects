
int mystrlen(const char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	return i;
}

char *mystrcpy(char* str1, const char *str2)
{
	char *ptr = str1;

	while (*str2 != '\0')
	{
		*str1 = *str2;
		str2++;
		str1++;
	}
	*str1 = '\0';

	return ptr;
}

char *mystrcat(char *str1, const char *str2)
{

	char *ptr = str1;

	int p = 0;
	for (; str1[p] != '\0'; p++);
	
	for (int i = 0; str2[i] != '\0'; i++, p++)
	{
		str1[p] = str2[i];
	}
	str1[p] = '\0';

	return ptr;
}

char *mystrchr(char *str, char s)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr == s)
		{
			return ptr;
		}
		ptr++;
	}

	return 0;
}

char *mystrstr(char *str1, char *str2)
{
	int strlen = mystrlen(str1);
	int substrlen = mystrlen(str2);

	int i, j;
	for (i = 0; i <= strlen - substrlen; i++)
	{
		for (j = 0; substrlen; j++)
		{
			if (str1[i+j] != str2[j])
			{
				break;
			}
		}
		if (j == substrlen)
		{
			return &str1[i];
		}
	}

	return 0;
}

