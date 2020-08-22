#include <stdio.h>

int main() {
	int x,n,sum = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &x);
		sum += x;
	}
	printf("%d", sum);
}