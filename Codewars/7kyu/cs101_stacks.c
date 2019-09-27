/*
 *	kata: Computer Science 101 - #1 Stacks
 *	link: https://www.codewars.com/kata/computer-science-101-number-1-stacks
*/
#include <stdbool.h>
#include <stdlib.h>

typedef struct	node
{
	int			data;
	struct node	*next;
}				Node;

typedef struct
{
	Node		*root;
}				Stack;

typedef Node t_node;
typedef Stack t_stack;
/* function declarations */
void	stack_push(t_stack *stack, int data);
int		stack_pop(t_stack *stack);
int		stack_peek(t_stack *stack);
bool	stack_is_empty(const t_stack *stack);

t_node	*node_create(int data)
{
	t_node	*node;

	node = (t_node *)malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}

void	stack_push(t_stack *stack, int data)
{
	t_node	*new;

	new = node_create(data);
	new->next = stack->root;
	stack->root = new;
}

int		stack_pop(t_stack *stack)
{
	t_node	*ptr;
	int		data;

	ptr = stack->root;
	data = ptr->data;
	stack->root = ptr->next;
	free(ptr);
	return (data);
}

int		stack_peek(t_stack *stack)
{
	return (stack->root->data);
}

bool	stack_is_empty(const t_stack *stack)
{
	if (!stack->root)
		return (true);
	return (false);
}
