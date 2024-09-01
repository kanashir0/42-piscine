#include    <stdlib.h>
#include    <stdio.h>
#include    <unistd.h>

typedef struct s_dict
{
    char    key[256];
    char    value[256];
} num_dict;

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
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

void print_number(char *number, num_dict *dict)
{
    int i;

    if (ft_strlen(number) < 2)
    {
        i = 0;
        while (i < 4)
        {
            if (ft_strcmp(number, dict[i].key) == 0)
                write(1, &dict[i].value, sizeof(dict[i].value));
        }
    }
}

void print_dict(num_dict *dict)
{
    int i;

    i = 0;
    while (i < 4)
    {
        printf("%s: ", dict[i].key);
        printf("%s\n", dict[i].value);
        i++;
    }
}

int main(void)
{
    char    raw_dict[] = "0: zero\n1: one\n2: two\n3: three";
    num_dict *dict;

    dict = (num_dict *)malloc(sizeof(num_dict) * 4);

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < 32)
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
        while (raw_dict[i] != '\n')
        {
            if (raw_dict[i] >= 33 && raw_dict[i] <= 126)
            {
                dict[j].value[k] = raw_dict[i];
                k++;
            }
            i++;
        }
        dict[j].value[k] = '\0';
        j++;
    }

    print_dict(dict);
    free(dict);
    return (0);
}