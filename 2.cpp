/* ıêâèâàëåíòû 1 è 2 âûğàæåíèÿ
if (e1) if (e2) S1; else S2;
if (e1) { if (e2) S1; else S2; }
if (e1) { if (e2) S1; } else S2;
if (e1)  if (e2) S1; else ; else S2;
*/

#include "stdio.h"

int main()
{
	int e1 = 5 > 1;
	int e2 = 10 < 2;

	printf("%d\n", e1);
	printf("%d\n", e2);

	printf("Z1\n");
	if (e1)
		if (e2)
			printf("  S1\n");
		else
			printf("  S2\n");

	printf("Z2\n");
	if (e1)
	{
		if (e2)
			printf("  S1\n");
		else
			printf("  S2\n");
	}

	printf("Z3\n");
	if (e1)
	{
		if (e2)
			printf("  S1\n");
	}
	else
		printf("  S2\n");

	printf("Z4\n");
	if (e1)
		if (e2)
			printf("  S1\n");
		else
			;
	else
		printf("  S2\n");

	return 0;
}
