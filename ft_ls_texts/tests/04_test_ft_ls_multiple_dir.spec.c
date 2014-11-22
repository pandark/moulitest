char *cmd;

cmd = "-1 mydir mydir2";
reset_sandbox();
sandbox_cmd("mkdir mydir mydir2 && touch mydir/{aaa,bbb,ccc} && touch mydir2/{111,222,333}");
UT_ASSERT(strcmp(ls(cmd), ft_ls(cmd)) == 0);

cmd = "-1 mydir mydir2";
reset_sandbox();
sandbox_cmd("mkdir mydir mydir2 && touch mydir/file{10..40} && touch mydir2/file{30..200}");
UT_ASSERT(strcmp(ls(cmd), ft_ls(cmd)) == 0);

cmd = "-1 mydir{1..7}";
reset_sandbox();
sandbox_cmd("mkdir mydir{1..7} && touch mydir{1..7}/file{1..99}");
UT_ASSERT(strcmp(ls(cmd), ft_ls(cmd)) == 0);

/*
printf("\n=====  ls  ========\n");
printf("%s", ls("-1 mydir{1..7} | cat -e"));
printf("===== ft ls =======\n");
printf("%s", ft_ls("mydir{1..7} | cat -e"));
printf("==================\n");
*/