/*
** id.c for id in /home/jeremy.elkaim/SBMLparser/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon Jun 12 14:13:35 2017 jeremy elkaim
** Last update Mon Jun 12 14:16:58 2017 jeremy elkaim
*/

#include <SBMLparser.h>

int	id(char **tab, char word)
{
  int	i;

  i = 0;
  while (tab[i] != '\0')
    {
      if (my_strcmp(tab[i], id) == 0)
	my_putstr(tab[i+1]);
      i++;
    }
  return (0);
}
