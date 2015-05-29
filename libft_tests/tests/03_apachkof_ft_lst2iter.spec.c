#include <project.h>

static void lstiter_test(t_list2 *ppp)
{
	ppp->content_size = 42;
}

static void test1(t_test *test)
{
	t_list2	*list;

	bzero((list = malloc(sizeof(t_list2))), sizeof(t_list2));
	bzero(((list->next) = malloc(sizeof(t_list2))), sizeof(t_list2));
	ft_lst2iter(list, lstiter_test);
	mt_assert(list->content_size == 42);
	mt_assert(list->next->content_size == 42);
}

void	suite_03_apachkof_ft_lst2iter(t_suite *suite)
{
	SUITE_ADD_TEST(suite, test1);
}
