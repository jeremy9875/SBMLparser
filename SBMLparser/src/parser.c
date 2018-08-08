/*
** parser.c for parser in /home/jeremy.elkaim/SBMLparser/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon Jun 12 09:28:55 2017 jeremy elkaim
** Last update Mon Jun 12 14:23:13 2017 jeremy elkaim
*/

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "SBMLparser.h"

int	parser(char **tab)
{
  if (my_strcmp(tab[1], HELP) == 1)
    help(tab);
  else
    openfile(tab);
  return (0);
}

int	openfile(char **av)
{
  int	fd;
  char	*buffer;

  if ((buffer = malloc(sizeof(char) * 10001)) == NULL)
    return (84);
  fd = open(av[1], O_RDONLY);
  read(fd, buffer, 100);
  my_putstr(buffer);
  close(fd);
  return (0);
}

int	noflag(char **tab)
{
  int	i;

  i = 0;
  while (tab[i] != '\0')
    {
      if (my_strcmp(tab[i], COMP) == 0)
	my_putstr(COMP);
      else if (my_strcmp(tab[i], REACT) == 0)
	my_putstr(REACT);
      else if (my_strcmp(tab[i], SPECIES) == 0)
	my_putstr(SPECIES);
      else if (my_strcmp(tab[i], SPECREF) == 0)
	my_putstr(SPECREF);
      i = i + 1;
    }
  return (0);
}
