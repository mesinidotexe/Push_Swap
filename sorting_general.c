#include "push_swap.h"

void	sorting_general(t_stack *a, t_stack *b)
{
    if (!a)
        return ;

    int i = 0;
    while (!inorder(a) && i <= 9)
    {
        if (a->number & i)
        {
            pb(&b, &a);
        }
        pa(&a, &b);
        i++;
    }
}