/*  2017-04-14-Fri
	: nCr을 연산을 줄이고 int형 범위 넘어가지 않게 해결함.	
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Combination(int n, int r)
{
	int result = 1;
	if (n == 0) result = 1;
	for (int i = 1; i <= r; i++)
	{
		result *= n;
		result /= i;
		n--;
	}
	printf("%d\n", result);
}

int main()
{
	int test_case;
	int N, M;      // West, East
	scanf("%d", &test_case);
	
	for (int i = 0; i < test_case; i++)
	{
		scanf("%u %u", &N, &M);
		Combination(M, N);
	}
	return 0;
}