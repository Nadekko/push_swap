
#include "push_swap.h"

/*void	ft_exit_error(t_node **stack)
{
	if (stack == NULL || *stack != NULL)
		ft_free_stack(stack);
	ft_perror("Error\n");
	exit(EXIT_FAILURE);
}*/

void	clear_list(t_dlist *dlist)
{
	t_node	*tmp;
	t_node	*plist;

	plist = dlist->first;
	while (plist)
	{
		tmp = plist;
		plist = plist->next;
		free(tmp);
	}
	dlist->first = NULL;
	dlist->last = NULL;
}
