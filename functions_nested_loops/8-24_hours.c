#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: void
 */
void jack_bauer(void)
{
	int m = 0;
	int mt = 0;
	int h = 0;
	int ht = 0;

	while (ht != 2 && h != 4)
	{
		if (m == 10)
		{
			m = 0;
			mt++;
			if (mt == 6)
			{
				mt = 0;
				h++;
				if (ht == 2 && h == 4)
					break;
				if (h == 10)
				{
					h = 0;
					ht++;
				}
			}
		}
		_putchar(ht + 48);
		_putchar(h + 48);
		_putchar(':');
		_putchar(mt + 48);
		_putchar(m + 48);
		_putchar('\n');
		m++;
	}
}
