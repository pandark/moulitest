#include <project.h>

static t_list2 *lstmap_test_fn(t_list2 *list)
{
	t_list2	*l2;

	l2 = malloc(sizeof(t_list2));
	bzero(l2, sizeof(t_list2));
	l2->content = malloc(list->content_size * 2);
	l2->content_size = list->content_size * 2;
	return (l2);
}

static void test1(t_test *test)
{
	t_list2	*list;
	t_list2	*map;

	bzero((list = malloc(sizeof(t_list2))), sizeof(t_list2));
	bzero((list->next = malloc(sizeof(t_list2))), sizeof(t_list2));
	list->content_size = 21;
	list->content = strdup("abc");
	list->next->content_size = 100;
	list->next->content = strdup("abc");
	map = ft_lst2map(list, lstmap_test_fn);
	mt_assert(list->content_size == 21);
	mt_assert(list->next->content_size == 100);
	mt_assert(!!map && map->content_size == 42);
	mt_assert(!!map && map->next->content_size == 200);
}

void	suite_03_apachkof_ft_lst2map(t_suite *suite)
{
	SUITE_ADD_TEST(suite, test1);
}
