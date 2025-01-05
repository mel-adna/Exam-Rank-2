#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int i = 0;

	while (begin_list != NULL)
	{
		i++;
		begin_list = begin_list->next;
	}
	return (i);
}
int main()
{
	t_list *node;
	t_list node1;
	t_list node2;
	t_list node3;

	node = &node1;
	node1.next = &node2;
	node2.next = &node3;
	node3.next = NULL;

	printf("%d\n", ft_list_size(node));

}