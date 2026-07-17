
int	is_negative(char *str, int i, int *signo)
{
	int	neg;

	neg = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	if (neg % 2 != 0)
		*signo = -1;
	return (i);
}

int	skip_spaces(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && ((str[i] == ' ') || (str[i] == '\t')
			|| (str[i] == '\n') || (str[i] == '\v')
			|| (str[i] == '\f') || (str[i] == '\r')))
	{
		i++;
	}
	return (i);
}

int	check_base(char *str)
{
	int	len_base;
	int	i;

	len_base = 0;
	while (str[len_base])
	{
		if (str[len_base] == '+' || str[len_base] == '-')
			return (0);
		if (str[len_base] < ' ' || str[len_base] > '~')
			return (0);
		i = len_base + 1;
		while (str[i])
		{
			if (str[len_base] == str[i])
				return (0);
			i++;
		}
		len_base++;
	}
	if (len_base <= 1)
		return (0);
	return (len_base);
}

int	this_is_in_the_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	atoi_base(char *str, char *base)
{
	int		i;
	long	result;
	int		signo;
	int		length_base;
	int		value;

	result = 0;
	signo = 1;
	length_base = check_base(base);
	if (length_base == 0)
		return (0);
	i = skip_spaces(str);
	i = is_negative(str, i, &signo);
	value = 0;
	while (str[i] && value != -1)
	{
		value = this_is_in_the_base(str[i], base);
		if (value != -1)
			result = result * length_base + value;
		i++;
	}
	return (result * signo);
}
/*
#include <stdio.h>

int main(void)
{
	//Casos básicos
	printf("%d\n", atoi_base("42", "0123456789"));      // 42
	printf("%d\n", atoi_base("-42", "0123456789"));     // -42
	printf("%d\n", atoi_base("+42", "0123456789"));     // 42
	printf("%d\n", atoi_base("--42", "0123456789"));    // 42
	printf("%d\n", atoi_base("---42", "0123456789"));   // -42

	//Espacios
	printf("%d\n", atoi_base("    42", "0123456789"));          // 42
	printf("%d\n", atoi_base("\t\n\r\v\f42", "0123456789"));    // 42
	printf("%d\n", atoi_base("   -42", "0123456789"));          // -42

	//Binario
	printf("%d\n", atoi_base("0", "01"));        // 0
	printf("%d\n", atoi_base("1", "01"));        // 1
	printf("%d\n", atoi_base("10", "01"));       // 2
	printf("%d\n", atoi_base("101", "01"));      // 5
	printf("%d\n", atoi_base("11111111", "01")); // 255

	//Octal
	printf("%d\n", atoi_base("7", "01234567"));      // 7
	printf("%d\n", atoi_base("10", "01234567"));     // 8
	printf("%d\n", atoi_base("17", "01234567"));     // 15
	printf("%d\n", atoi_base("777", "01234567"));    // 511

	//Hexadecimal
	printf("%d\n", atoi_base("A", "0123456789ABCDEF"));      // 10
	printf("%d\n", atoi_base("F", "0123456789ABCDEF"));      // 15
	printf("%d\n", atoi_base("10", "0123456789ABCDEF"));     // 16
	printf("%d\n", atoi_base("FF", "0123456789ABCDEF"));     // 255
	printf("%d\n", atoi_base("ff", "0123456789abcdef"));     //255

	//Bases arbitrarias
	printf("%d\n", atoi_base("a", "abc"));       //0
	printf("%d\n", atoi_base("b", "abc"));       //1
	printf("%d\n", atoi_base("c", "abc"));       //2
	printf("%d\n", atoi_base("ba", "abc"));      //3
	printf("%d\n", atoi_base("bc", "abc"));      //5

	//Poneyvif
	printf("%d\n", atoi_base("p", "poneyvif"));      //0
	printf("%d\n", atoi_base("o", "poneyvif"));      //1
	printf("%d\n", atoi_base("n", "poneyvif"));      //2
	printf("%d\n", atoi_base("e", "poneyvif"));      //3
	printf("%d\n", atoi_base("y", "poneyvif"));      //4
	printf("%d\n", atoi_base("po", "poneyvif"));     //1
	printf("%d\n", atoi_base("ne", "poneyvif"));     //19

	//Bases invalidas
	printf("%d\n", atoi_base("42", ""));             //0
	printf("%d\n", atoi_base("42", "0"));            //0
	printf("%d\n", atoi_base("42", "001"));          //0
	printf("%d\n", atoi_base("42", "01+2"));         //0
	printf("%d\n", atoi_base("42", "01-2"));         //0

	printf("%d\n",atoi_base("12x34", "0123456789"));
	printf("%d\n",atoi_base("101201", "01"));
	printf("%d\n",atoi_base("ABZG", "ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
	atoi_base("0", "01");              // 0
	printf("%d\n", atoi_base("000101", "01"));         // 5
	printf("%d\n", atoi_base("12abc", "0123456789"));  // 12
	printf("%d\n", atoi_base("abc", "0123456789"));    // 0
	printf("%d\n", atoi_base("", "0123456789"));       // 0
	printf("%d\n", atoi_base("poney", "poneyvif"));
	return (0);
}*/
