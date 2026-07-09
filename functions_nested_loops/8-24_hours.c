#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int m = 0;
	int h = 0;

	while (h < 24)
	{
		if (m == 60)
		{
			m = 0;
			h++;
			if (h == 24)
				break;
			printf("%02d:%02d\n", h, m);
			m++;
		}
		else
		{
			printf("%02d:%02d\n", h, m);
			m++;
		}
	}
}
