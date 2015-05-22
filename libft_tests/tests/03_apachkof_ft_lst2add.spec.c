#include <project.h>

static void test1(t_test *test)
{
	t_list2	*list;
	t_list2	*list2;
	t_list2	*list3;

	list = malloc(sizeof(*list));
	list2 = malloc(sizeof(*list2));
	list->content = "42";
	list->content_size = 3;
	list2->content = "84";
	list2->content_size = 3;
	list3 = list2;
	ft_lst2add(&list2, list);
	mt_assert(list2 == list);
	mt_assert(list->next == list3);
	mt_assert(list3->prev == list);
}

void	suite_03_apachkof_ft_lst2add(t_suite *suite)
{
	SUITE_ADD_TEST(suite, test1);
}
