#include "main.h"


/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 * Return: 0.
 */

void jack_bauer(void)

{

        int k, j;


        k = 0;


        while (k < 24)

        {

                j = 0;

                while (j < 60)

                {

                        _putchar((k / 10) + '0');

                        _putchar((k % 10) + '0');

                        _putchar(':');

                        _putchar((j / 10) + '0');

                        _putchar((j % 10) + '0');

                        _putchar('\n');

                        j++;

                }

                k++;

        }

}
