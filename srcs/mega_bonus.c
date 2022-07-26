typedef struct	s_list
{
void			*content;
struct s_list	*next;
}				t_list;

t_list *ft_lstnew(void *content)
{
	t_list	*ret;

	ret = (t_list *)malloc(sizeof(t_list));
	if (!ret)
		return (NULL);
	if (content == NULL)
	{
		ret->content = NULL;
	}
	else 
	{
		ret->content = (void *)malloc(sizeof(void));
		if (!ret->content)
			return (NULL);
		
	}
	ret->next = NULL;
	return (ret);
}