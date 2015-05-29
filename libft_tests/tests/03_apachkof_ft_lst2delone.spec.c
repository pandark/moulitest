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

	____diddel = 0;
	ft = 42;
	list = (t_list2 *)malloc(sizeof(t_list2));
	list->content = &ft;
	list->content_size = sizeof(int);
	ft_lst2delone(&list, del_test);
	mt_assert(list == NULL);
	mt_assert(____diddel == 1);
}

void	suite_03_apachkof_ft_lst2delone(t_suite *suite)
{
	SUITE_ADD_TEST(suite, test1);
}
