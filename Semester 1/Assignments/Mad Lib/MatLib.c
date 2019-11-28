#include <stdio.h>

void main(void)

{
	int x = 0;
	char* q[30];
	char* w[30];
	char* e[30];
	char* r[30];
	char* t[30];
	char* y[30];
	char* u[30];
	char* i[30];
	char* o[30];


	printf("\n\n\n      Ss S   TTTTTTT      A     RR       TTTTTTT\n");
	printf("    S           T        A A    R   R       T\n");
	printf("      S         T       A A A   RR          T\n");
	printf("         S      T      A     A  R  R        T\n");
	printf("    S sS        T     A       A R   R       T\n\n\n");
	printf("       Let's play a funny verbal game:\n");


	printf("Enter 1 to proceed:\n");
	scanf("%d", &x);

	if (x == 1)
	{

		{
			printf("Enter any verb:\n");
			scanf("%s", &q);
		}

		{
		printf("Enter name of a plant:\n");
		scanf("%s", &w);

		}


		{
			printf("Enter the name of thing that exist very often:\n");
			scanf("%s", &e);
		}

		{
			printf("Enter any adjective for feeling:\n");
			scanf("%s", &r);
		}

		{
			printf("Enter any verb:\n");
			scanf("%s", &t);
		}

		{
			printf("Enter any noun in plural:\n");
			scanf("%s", &y);
		}

		{
			printf("Enter name of any plant:\n");
			scanf("%s", &u);
		}

		{
			printf("Enter name of any animal:\n");
			scanf("%s", &i);
		}

		{
			printf("Enter any verb:\n");
			scanf("%s", &o);
		}
		/*Output*/
		{
			printf("Output:\n\n");
			printf("\"If some one %s a %s of which just one example exists among all the millions and millions of %s,", q, w, e);
			printf("that�s enough to make him %s when he %s at the %s.He tells himself, \"My %s is up there somewhere . . ..", r, t, y, u);
			printf("\" But if the %s %s the flower, then for him it�s as if suddenly, all the stars went out.And that isn�t important ? \"\n\n\n\n", i, o);
		}

		getchar();

		{
			printf("   TTTTTTT   H     H      A     N      N     K     K       Ss S\n");
			printf("      T      H     H     A A    N N    N     K   K       S\n");
			printf("      T      HHHHHHH    AAAAA   N   N  N     KK            S   \n");
			printf("      T      H     H   A     A  N    N N     K   K            S\n");
			printf("      T      H     H  A       A N      N     K     K     S sS \n");
		}



	}
	
	else
	{
		printf("Enter a valid number\n\n\n\n");
		printf("   TTTTTTT   H     H      A     N      N     K     K       Ss S\n");
		printf("      T      H     H     A A    N N    N     K   K       S\n");
		printf("      T      HHHHHHH    AAAAA   N   N  N     KK            S   \n");
		printf("      T      H     H   A     A  N    N N     K   K            S\n");
		printf("      T      H     H  A       A N      N     K     K     S sS \n");
	}

	return 0;
}
