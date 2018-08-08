/*
** main.c for main in /home/jeremy.elkaim/SBMLparser/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon Jun 12 09:17:45 2017 jeremy elkaim
** Last update Mon Jun 12 09:29:54 2017 jeremy elkaim
*/

#include "SBMLparser.h"

int	main(int ac, char **av)
{
  if (ac >= 2)
    parser(av);
  else
    {
      my_putstr(ERROR_STD);
      return (84);
    }
  return (0);
}
