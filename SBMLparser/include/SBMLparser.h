/*
** SBMLparser.h for SBMLparser in /home/jeremy.elkaim/SBMLparser/include
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon Jun 12 09:18:38 2017 jeremy elkaim
** Last update Mon Jun 12 14:16:15 2017 jeremy elkaim
*/

#ifndef SBMLparser_H_
# define SBMLparser_H_

#define ID		"id"
#define COMP		"<compartment>"
#define SPECIES		"<species>"
#define REACT		"<reaction>"
#define SPECREF		"<speciesReference>"
#define LISTCOMP	"<listOfCompartments>"
#define LISTSPEC	"<listOfSpecies>"
#define LISTREACT	"<listOfReactions>"
#define LISTREACTA	"<listOfReactants>"
#define LISTPROD	"<listOfProducts>"
#define	ERROR_STD	"invalid argument -h for help\n"
#define HELP		"-h"
#define HELP1		"USAGE\n\t"
#define HELP2		" SBMLfile [-i ID [-e]] [-json]\n\nDESCRIPTION\n\t SBMLfile SBML file\n\t -i ID\t id of the compartment, reaction or product to be extracted (ignored if uncorrect)\n\t -e\t print the equation if a reaction ID is given as argument (ignored otherwise)\n\t -json transform the file into a JSON file"

void	my_putchar(const char c);
void	my_putstr(const char *str);
int	my_strlen(const char *str);
int	parser(char **tab);
int	my_strcmp(const char *str,const char *cmp);
void	help(char **tab);
int	openfile(char **av);

#endif /* !SBMLparser_H_ */
