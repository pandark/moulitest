#include <project.h>

static int ____diddel;

static void	del_test(void *data, size_t i)
{
	(void)data;
	(void)i;
	____diddel++;
}

static void test1(t_test *test)
{
	t_list2	*list;
	int		ft;

	ft = 42;
	____diddel = 0;
	list = malloc(sizeof(*list));
	bzero(list, sizeof(*list));
	list->next = malloc(sizeof(t_list2));
	bzero(list->next, sizeof(t_list2));
	list->content = &ft;
	list->content_size = sizeof(ft);
	list->next->content = (&ft) + 1;
	list->next->content_size = sizeof(ft);
	ft_lst2del(&list, del_test);
	mt_assert(list == NULL);
	mt_assert(____diddel == 2);
}

void	suite_03_apachkof_ft_lst2del(t_suite *suite)
{
	SUITE_ADD_TEST(suite, test1);
}
