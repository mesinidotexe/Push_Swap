#include "push_swap.h"

static void	sorting_three(t_stack *a);
static void	sorting_four(t_stack *a);
static void	sorting_five(t_stack *a);

void	sorting(t_stack *a, t_stack *b)
{
	if (ps_lstsize(a) == 2)
		sa(a);
	else if (ps_lstsize(a) == 3)
		sorting_three(a);
	else if (ps_lstsize(a) == 4)
		sorting_four(a);
	else if (ps_lstsize(a) == 5)
		sorting_five(a);
	else if (ps_lstsize(a) >= 6)
		(void)b;
}

void	sorting_three(t_stack *a)
{
	if (a->number > a->next->number)
	{
		a = a->next;
		if (a->number > a->next->number)
			ra(a);
        else if (a->number < a->next->number)
            rra(a);
	}
}

static void	sorting_four(t_stack *a)
{
	(void)a;
}

static void	sorting_five(t_stack *a)
{
	(void)a;
}