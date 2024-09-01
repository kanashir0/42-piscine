#include    <stdlib.h>
#include    <stdio.h>
#include    <unistd.h>
#include	<fcntl.h>

typedef struct s_dict
{
    char    key[256];
    char    value[256];
} num_dict;

int	count_lines(char *str)
{
	int i;
	int counter;

	i = 0;
	counter = 1;
	while (str[i])
	{
		if (str[i] == '\n')
			counter++;
		i++;
	}
	return (counter);
}

void print_dict(num_dict *dict)
{
    int i;

    i = 0;
    while (i < 6)
    {
        printf("%s: ", dict[i].key);
        printf("%s\n", dict[i].value);
        i++;
    }
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*invert_number(char *number)
{
	char	buffer;
	int		i;
	int		size;

	i = 0;
	size = ft_strlen(number);
	while (i < (size / 2))
	{
		buffer = number[i];
		number[i] = number[size - 1 - i];
		number[size - 1 - i] = buffer;
		i++;
	}
	return (number);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	match(char *to_match, num_dict *dict, int dict_size)
{
	int	i;

	i = 0;
	while (i < dict_size)
	{
		if (ft_strcmp(to_match, dict[i].key) == 0)
		{
			printf("%s ", dict[i].value);
			return ;
		}
		i++;
	}
	printf("not matched");
	return ;
}

char *generate_searchable(int first_value, int zeros, int two_numbers)
{
    char *searchable;
    int i;
    
    if (!two_numbers)
    {
        searchable = (char *) malloc(zeros * sizeof(char) + 2);
        searchable[0] = first_value + '0';
        i = 1;
        while (i <= zeros)
        {
            searchable[i] = '0';
            i++;
        }
    }
    else
    {
        searchable = (char *) malloc(sizeof(char) * 3);
        searchable[0] = first_value + '0';
        searchable[1] = zeros + '0';
		i = 2;
    }
    searchable[i] = '\0';
    return (searchable);
}

int print_number(char *number, int index, num_dict *dict, int dict_size)
{
    if (index % 3 == 0)
    {
		char c[2] = {number[index], '\0'};
        if (number[index] != '0')
            match(c, dict, dict_size);
        if (index != 0)
            match(generate_searchable(1, index, 0), dict, dict_size);
    }
    else if (index % 3 == 1)
    {
        if (number[index] == '1')
        {
            match(generate_searchable(number[index] - '0', number[index - 1] - '0', 1), dict, dict_size);
            return (index - 1);
        }
        else if (number[index] != '0')
            match(generate_searchable(number[index] - '0', 1, 0), dict, dict_size);
    }
    else if (index % 3 == 2)
    {
        if (number[index] != '0')
		{
			char c[2] = {number[index], '\0'};
			match(c, dict, dict_size);
			match(generate_searchable(1, 2, 0), dict, dict_size);
		}
    }
	return (index);
}

void process_number(char *number, num_dict *dict, int dict_size)
{
    int i;
    
    number = invert_number(number);
    i = ft_strlen(number) - 1;
    while (i >= 0)
    {
        i = print_number(number, i, dict, dict_size);
        i--;
    }
    return ;
}

char *read_dict(char *buffer, int size, char *filename)
{
	int bytesread;
	int rows;
	int i;

	rows = 0;
	i = 0;
	int file = open(filename, O_RDONLY);

	printf("File: %d\n", file);
	if (file == -1)
	{
		write(1, "Error\n", 5);
		return (0);
	}
	bytesread = read(file, buffer, size);
	while (i < bytesread)
	{
		if (buffer[i] == '\n')
		{
			rows++;
		}
		i++;
	}
	close(file);
	printf("Buffer: %s\n", buffer);
	printf("Bytes: %d\n", bytesread);
	return (buffer);
}

// int	main(int argc, char *argv[])
int main(void)
{
    // char    *argv[3] = {"", "123"};
	// char	*filename = "./numbers.dict";
	char	*raw_dict;
	char	buffer[4096];
	char	number[] = "52479652876134";

	// Validar input
	// filename = validate_input(argc, argv, number);
	// if (!filename)
	// {
	// 	write (1, "É true", 6);
	// 	// Erro, input invalido, finalizar o programa
	// }
	// if (!filename)
	// {
	// 	write (1, "Error\n", 6);
	// 	// Erro, input invalido, finalizar o programa
	// }
	// dict = parse_dict(filename, dict, raw_file, dict_lines, dict_size);
	//if (!dict) // Pensar em como fazer essa validação
	//{
		// Erro, dicionario invalido, finalizar o programa
	//}
    // char    raw_dict[] = "0: zero\n1: one\n2: two\n3: three\n20: twenty\n30: thirty\n100: hundred\n1000: thousand\n1000000: million\n1000000000: billion";
    raw_dict = read_dict(buffer, 4096, "numbers.dict");
	num_dict *dict;
	int	dict_size;

    dict = (num_dict *)malloc(sizeof(num_dict) * count_lines(raw_dict));

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < ft_strlen(raw_dict))
    {
        k = 0;
        while (raw_dict[i] != ':')
        {
            if (raw_dict[i] >= '0' && raw_dict[i] <= '9')
            {
                dict[j].key[k] = raw_dict[i];
                k++;
            }
            i++;
        }
        k = 0;
        i++;
        while (raw_dict[i] != '\n' && raw_dict[i] != '\0')
        {
            if (raw_dict[i] >= 33 && raw_dict[i] <= 126)
            {
                dict[j].value[k] = raw_dict[i];
                k++;
            }
            i++;
        }
        j++;
    }
	dict_size = count_lines(raw_dict);
	process_number(number, dict, dict_size);
	return (0);
}