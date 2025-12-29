#include "../libft.h"
#include <stdio.h>

void	del(void *cnt)
{
	puts((char *) cnt);
}

int	main(void)
{
	t_list	*node = ft_lstnew("a");
	t_list	**list = &node;

	//printf("%d\n", *((int *) (*list)->content));
	ft_lstadd_front(list, ft_lstnew("hi"));
	ft_lstadd_back(list, ft_lstnew("e"));
	ft_lstadd_back(list, ft_lstnew("a"));
	//ft_lstadd_back(list, ft_lstnew("s"));
	ft_lstiter(*list, &del);
	//ft_lstclear(list, &del);
	if (*list == NULL)
		puts("list empty");
	//printf("lstsize: %d\n", ft_lstsize(*list));
	//printf("%s\n", (char *) ft_lstlast(*list)->content);
	//printf("lstsize: %d\n", ft_lstsize(*list));
}
