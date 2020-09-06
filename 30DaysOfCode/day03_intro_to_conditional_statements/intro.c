#include <stdio.h>

int main() {
	int n;

	scanf("%d", &n);
	if (n % 2 != 0)
		printf("Weird\n");
	else if ((2 <= n && n <= 5) && n % 2 == 0)
		printf("Not Weird\n");
	else if ((6 <= n && n <=20) && n % 2 == 0)
		printf("Weird\n");
	else
		printf("Not Weird\n");
	
	return 0;
}
