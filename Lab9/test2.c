#include <stdio.h>
#include <string.h>

int main()
{
	char txt[40];
  int i, mid, end, len = 0;

	printf("Enter your word:");
	scanf("%s", txt);
	while (txt[len] != '\0')
	{
		len++;
	}
	printf("The length of %s is %d\n", txt, len);

  end = len - 1;
  mid = len/2;

	for (i = 0; i < mid; i++) {
		if (txt[i] != txt[end]) {
			printf("%s is not palindrome.", txt);
			break;
		}
		end--;
	}
	if (i == mid) {
		printf("%s is palindrome.", txt);
	}
}