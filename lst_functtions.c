#include "push_swap.h"

t_stack	*ps_lstnew(int content)
{
	t_list	*nextnode;

	nextnode = malloc(sizeof(struct s_list));
	if (!nextnode)
		return (NULL);
	nextnode->content = content;
	nextnode->next = NULL;
	return (nextnode);
}

void	ps_lstclear(t_stack **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*tmp_next;

	if (!lst || !del)
		return ;
	current = *lst;
	tmp_next = *lst;
	while (current)
	{
		tmp_next = tmp_next->next;
		ft_lstdelone(current, del);
		current = tmp_next;
		if (!current)
			free(current);
	}
	*lst = NULL;
}

void	ps_lstadd_back(t_stack **lst, t_stack *new)
{
	t_list	*ultimo;

	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		ultimo = *lst;
		while (ultimo->next)
			ultimo = ultimo->next;
		ultimo->next = new;
	}
}

void	ps_lstadd_front(t_stack **lst, t_stack *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}

t_stack	*ps_lstlast(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}