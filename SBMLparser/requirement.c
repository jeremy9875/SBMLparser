/*
** requirement.c for requirement in /home/jeremy.elkaim/SBMLparser
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon Jun 12 09:12:01 2017 jeremy elkaim
** Last update Mon Jun 12 11:32:04 2017 jeremy elkaim
*/

#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i = i + 1;
  return (i);
}

char	**my_strtowordtab_synthesis(char *str)
{
  char  **tab;
  int   i;
  int   j;
  int   k;

  if ((tab = malloc(sizeof(char **) * my_strlen(str))) == NULL)
    return (NULL);
  i = 0;
  j = 0;
  while (str[i] != '\0')
    {
      k = 0;
      if ((tab[j] = malloc(sizeof(char *) * my_strlen(str))) == NULL)
	return (NULL);
      while (str[i] == ' ' && str[i++] != '\0');
      while (str[i] >= 48 && str[i] <= 57 && str[i] != '\0' || str[i] >= 97
	     && str[i] <= 122 && str[i] != '\0' || str[i] >= 65
	     && str[i] <= 90 && str[i] != '\0')
	tab[j][k++] = str[i++];
      tab[j++][k] = '\0';
      while (str[i] == ' ' && str[i++] != '\0');
    }
  tab[j] = NULL;
  my_putstr(tab[0]);
  my_putchar('\n');
  my_putstr(tab[1]);
  my_putchar('\n');
  my_putstr(tab[2]);
  return (tab);
}

int	main(int ac, char **av)
{
  my_strtowordtab_synthesis(av[1]);
}
