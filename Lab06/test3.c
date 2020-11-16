#include <stdio.h>
#include <math.h>

int main()
{
	int dec, cho, b7, b6, b5, b4, b3, b2, b1, b0, oct, i = 1;
	printf("1. Convert  Binary to Decimal\n");
	printf("2. Convert Binary to Octal\n");
	printf("3. Convert Binary to Hexadecimal\n");
	printf("4. Exit\n");

	printf("Choose a choice: ");
	scanf("%d", &cho);

	if (cho > 0 && cho < 4)
	{
		printf("Input Binary number (8 digits) : ");
		scanf("%1d%1d%1d%1d%1d%1d%1d%1d", &b7, &b6, &b5, &b4, &b3, &b2, &b1, &b0);
		dec = (b7 * pow(2, 7)) + (b6 * pow(2, 6)) + (b5 * pow(2, 5)) + (b4 * pow(2, 4)) + (b3 * pow(2, 3)) + (b2 * pow(2, 2)) + (b2 * pow(2, 1)) + (b0 * pow(2, 0));
		if ((b7 == 0 || b7 == 1) && (b6 == 0 || b6 == 1) && (b5 == 0 || b5 == 1) && (b4 == 0 || b4 == 1) && (b3 == 0 || b3 == 1) && (b2 == 0 || b2 == 1) && (b1 == 0 || b1 == 1) && (b0 == 0 || b0 == 1))
		{
			printf("Binary Number is %d%d%d%d%d%d%d%d\n", b7, b6, b5, b4, b3, b2, b1, b0);
			if (cho == 1)
			{
				printf("Decimal is %d\n", dec);
			}
			else if (cho == 2)
			{
				oct = 0;
				while (dec != 0)
				{
					oct += (dec % 8) * i;
					dec /= 8;
					i *= 10;
				}
				printf("Octal is %.3d\n", oct);
			}
			else if (cho == 3)
			{
				printf("Hexadecimal is %.2X", dec);
			}
		}
		else
		{
			printf("Error! digit must be 1 or 0");
		}
	}
}