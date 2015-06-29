#include <project.h>

static void test1(t_test *test)
{
	char	*str = "Mon beau sapin, roi des forets, que j'aime ta verdure.";
	t_list	*list = NULL;

	list = ft_strsplitlst(str, ',');
	mt_assert(strcmp(list->content,  "Mon beau sapin") == 0);
	mt_assert(strcmp(list->next->content, " roi des forets") == 0);
	mt_assert(strcmp(list->next->next->content, " que j'aime ta verdure.") == 0);
	mt_assert(list->next->next->next == NULL);
}

void	suite_03_apachkof_ft_strsplitlst(t_suite *suite)
{
	SUITE_ADD_TEST(suite, test1);
}
