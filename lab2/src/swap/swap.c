#include "swap.h"

void Swap(char *left, char *right)
{
	char tot = *left;
    *left = *right;
    *right = tot;
}
