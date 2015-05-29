#include <project.h>

static void test1(t_test *test)
{
	t_list2	*list;
	int		ft;

	ft = 42;
	list = ft_lst2new(&ft, sizeof(int));
	mt_assert(list != NULL);
	mt_assert((*(int*)(list->content)) == 42);
	mt_assert(list->content_size == sizeof(int));
	if (list != NULL)
		free(list);
}

static void test2(t_test *test)
{
	t_list2	*list;

	list = ft_lst2new(NULL, 386);
	mt_assert((list->content_size) == 0);
	if (list != NULL)
		free(list);
}

void	suite_03_apachkof_ft_lst2new(t_suite *suite)
{
	SUITE_ADD_TEST(suite, test1);
	SUITE_ADD_TEST(suite, test2);
}
