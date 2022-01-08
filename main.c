#include "libunit.h"
#include <stdio.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/mman.h>

/*
	Salut !

	J'ai pas énormément avancé sur le sujet. J'ai eu du mal à le décortiquer
	et à comprendre les détails de ce qui est demandé...
	Voilà néanmoins du code minimal qui simule une situation de test.

	Fork, détection des segfault bus error et test foiré, c'est ok en tous cas.
	Tout est à la norme (sauf ce fichier voué à disparaitre), et leak free.

	Je me suis permis d'utiliser des prototypes différents de ceux des exemples
	du sujet, parce qu'il n'impose que le prototype des fonctions de test.
	J'ai du mal à voir comment compter correctement le nombre de tests total
	si on ne garde pas une state commune entre les différents launchers...

	A moins qu'on ne compte les tests que d'une section à l'autre ? Dans ce cas
	on peut effectivement se passer du t_suite et avoir des protos full void.
	Mais ça me semble étrange, on devrait pouvoir lancer plusieurs launchers et
	avoir le résumé de TOUS ces launchers, pas un résumé par launcher. Bref,
	j'ai vraiment eu du mal à comprendre le sujet, toutes mes excuses.

	J'espère que ce sera plus clair pour toi !
*/

static int	test1(void)
{
	return (0);
}

static int	test2(void)
{
	return (-1);
}

static int	test3(void)
{
	char	*foo = NULL;

	foo[10000] = 'F';
	return (0);
}

static int	test4(void)
{
	return (0);
}

static int	test5(void)
{
	return (-1);
}

static int	test6(void)
{
    FILE *f = tmpfile();
    int *m = mmap(0, 4, PROT_WRITE, MAP_PRIVATE, fileno(f), 0);
    *m = 0;
    return 0;
}

static int	test7(void)
{
	return (-1);
}

static int	test8(void)
{
	return (0);
}

static int	test9(void)
{
	return (-1);
}

static void	foo_launcher(t_suite *suite)
{
	test_add(suite, "test1", test1);
	test_add(suite, "test2", test2);
	test_add(suite, "test3", test3);
	run_tests(suite, "foo");
}

static void	bar_launcher(t_suite *suite)
{
	test_add(suite, "test1", test4);
	test_add(suite, "test2", test5);
	run_tests(suite, "bar");
}

static void	baz_launcher(t_suite *suite)
{
	test_add(suite, "test1", test6);
	test_add(suite, "test2", test7);
	test_add(suite, "test3", test8);
	test_add(suite, "test4", test9);
	run_tests(suite, "baz");
}

static void	init_suite(t_suite *suite)
{
	suite->tests = NULL;
	suite->total = 0;
	suite->success = 0;
}

int	main(void)
{
	t_suite	suite;

	init_suite(&suite);
	foo_launcher(&suite);
	bar_launcher(&suite);
	baz_launcher(&suite);
	printf("%d/%d tests checked\n", suite.success, suite.total);
	return (0);
}
