#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * times_table - return last digit of an argument
 * @n: - an argurment 1
 */
void times_table(void)

{

		int ii, jj, mul;



			for (ii = 0; ii <= 9; ii++)

					{

								for (jj = 0; jj <= 9; jj++)

											{

															mul = ii * jj;

																		if (jj == 0)

																							_putchar('0' + mul);

																					else if (mul < 10)

																									{

																														_putchar(' ');

																																		_putchar('0' + mul);

																																					}

																								else

																												{

																																	_putchar('0' + (mul / 10));

																																					_putchar('0' + (mul % 10));

																																								}

																											if (jj < 9)

																															{

																																				_putchar(',');

																																								_putchar(' ');

																																											}

																													}

										_putchar('\n');

											}

}
