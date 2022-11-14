#include <stdio.h>
#include <math.h>

int compare(int a, int b)
{
	if(a > b)
		return 1;
	else
		return -1;
}
int absolute_compare(int a, int b)
{
	if(abs(a) > abs(b))
		return 1;
	else
		return -1;
}
/*call back function should  compare two integers,
*should return 1 if first elemet has a higher rank
*0 if elements are equal and -1 if second elements
* has hugher rank
*/
void BubbleSort(int *A, int n, int (*compare)(int,int))
{
	int i, j, temp;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n-1; j++)
		{
			if (compare(A[j], A[j+1]) > 0) /* compare A[j] with A[j+1] and swap if needed */
			{
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] =temp;
			}
		}
	}
}

int main()
{
	int i, A[] = {-31, 22, -1, 50, -6, 4}; /* sort in increasing order */
	BubbleSort(A, 6, absolute_compare);
	for (i = 0; i < 6; i++)
		printf("%d ", A[i]);
	printf("\n");

}
