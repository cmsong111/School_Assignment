#include<stdio.h>

int main(void)
{
	for (int i = 1; i < 101; i++)
		for (int ii = 1; ii < 101; ii++)
			for (int iii = 1; iii < 101; iii++)
				if ((i * i + ii * ii) == iii * iii)
					printf("%d %d %d\n", i, ii, iii);
	return 0;
}