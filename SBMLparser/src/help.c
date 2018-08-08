/*
** help.c for help in /home/jeremy.elkaim/SBMLparser/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon Jun 12 09:35:30 2017 jeremy elkaim
** Last update Mon Jun 12 09:42:41 2017 jeremy elkaim
*/

#include "SBMLparser.h"

void	help(char **av)
{
  my_putstr(HELP1);
  my_putstr(av[0]);
  my_putstr(HELP2);
}
