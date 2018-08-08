/*
** write.c for write in /home/jeremy.elkaim/SBMLparser/src/str
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon Jun 12 09:21:27 2017 jeremy elkaim
** Last update Mon Jun 12 09:27:21 2017 jeremy elkaim
*/

#include <unistd.h>
#include "SBMLparser.h"

void	my_putchar(const char c)
{
  write(1, &c, 1);
}

void	my_putstr(const char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}

int	my_strlen(const char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  return (i);
}

int	my_strcmp(const char *str,const char *cmp)
{
  int	i;

  i = 0;
  while (str[i] != '\0' && cmp[i] != '\0')
    {
      if (str[i] == cmp[i])
	return (1);
      i = i + 1;
    }
  return (0);
}
