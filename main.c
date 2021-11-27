#include "libft.h"
#include <stdio.h>
void	ft_striteri_fun(unsigned int i, char *str)
{
	char l;
	i = 1;
	if (*str >= 'a' && *str <= 'z')
	{
		l = *str;
		*str = l - 32;
	}
}

char	ft_strmapi_fun(unsigned int i, char str)
{
	i = 1;
	str = 'M';
	return (str);
}
void	f_del(void *s)
{
	free(s);
}

void	ft_lstiter_fun(void *f)
{
	char *e;
	char d;

	e = ft_calloc(13,1);
	e = (char *)f;
	while (*e)
	{
		d = *e;
		*e = ft_toupper(d);
		e++;
	}
}

void	*ft_lstmap_fun(void *f)
{
	char	*e;
	char	*t;
	char 	d;

	//e = ft_calloc(13,1);
	e = (char *)f;
	t = e;
	while (*e)
	{
		if (*e >= 'a' && *e <= 'z')
		{
			d = *e;
			*e = d - 32;
		}
		e++;
	}
	return (t);
}
int main()
{
	char *s;
	char *d;
	char *l;
	//char m;
	

	s = ft_calloc(36,1);
	d = ft_calloc(13,1);
	l = ft_calloc(16,1);
	//ft_bzero(s,13);
	ft_memcpy(d,"test string",11);
	ft_memcpy(l,"test1 stting1",15);
	ft_memcpy(s,"--1-2--3---4----5-----42--54887--",36);
	//ft_memset(d,'A',12);
	// char **tab = ft_split(s,'-');
	// while (*tab)
	// 	printf("%s\n",*tab++);
	//ft_striteri(d,&ft_striteri_fun);
	//printf("%s\n",ft_strmapi(d,&ft_strmapi_fun));
	//int i= -1;
	// while (d[++i])
	// {
	// 	m = d[i];
	// 	//ft_putchar_fd(m,1);
	// 	d[i] = ft_toupper(m);
	// 	//ft_putchar_fd(d[i],1);

	// }
		
	// printf("%s\n",d);

	//ft_putnbr_fd(2147483647,1);

	t_list  *m;
	t_list  *temp;
	t_list	*mapilst;
	m = ft_lstnew(ft_strdup("string1"));
	m->next = ft_lstnew(ft_strdup("string2"));
	ft_lstadd_back(&m,ft_lstnew(ft_strdup("string3")));
	ft_lstadd_back(&m,ft_lstnew(ft_strdup("string4")));
	temp = ft_lstlast(m);
	ft_lstadd_front(&m,ft_lstnew(ft_strdup("string0")));
	ft_lstadd_front(&m,ft_lstnew(ft_strdup("string")));

	//ft_lstclear(&m, &f_del);
	//ft_lstdelone(temp,free);

	//ft_lstiter(m,&ft_lstiter_fun);
	mapilst = ft_lstmap(m,&ft_lstmap_fun,&f_del);
	printf("ft_lstlast |%s\n",temp->content);
	// temp = m;
	// while (temp != NULL)
	// {
	// 	printf("%s\n",temp->content);
	// 	temp = temp->next;
	// }
	temp = mapilst;
	while (temp != NULL)
	{
		printf("%s\n",temp->content);
		temp = temp->next;
	}
	printf("ft_lstsize |%d\n",ft_lstsize(m));
	return (0);
}