#include <project.h>

static void test1(t_test *test)
{
	t_buff	*buff = NULL;

	mt_assert();
}

void	suite_03_apachkof_ft_buffnbuff(t_suite *suite)
{
	SUITE_ADD_TEST(suite, test1);
}
