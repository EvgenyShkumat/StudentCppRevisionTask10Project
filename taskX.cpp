#include "tasks.h"

/*	Task X. Unique Number Digits [уникальные цифры числа]
*
*	Дано целое число (может быть как положительным, так и отрицательным).
*	Необходимо определить, все ли цифры числа уникальны, т.е. среди цифр
*	числа нет повторяющихся.
*
*	Формат входных данных [input]
*	На вход функция принимает целое число типа long long.
*
*	Формат выходных данных [output]
*	Функция должна возвратить булевское значение - ответ на задание.
*
*	[ input 1]: 12345
*	[output 1]: true
*
*	[ input 2]: 54321
*	[output 2]: true
*
*	[ input 3]: 11111
*	[output 3]: false
*
*	[ input 4]: 121
*	[output 4]: false
*
*	[ input 5]: -12345
*	[output 5]: true
*
*	[ input 6]: 0
*	[output 6]: true
*/

bool taskX(long long number) {
	while (number != 0) {
		int digit = number % 10;
		int num_copy = number / 10;

		while (num_copy != 0) {

			if (digit == num_copy % 10) {
				return false;
			}

			num_copy /= 10;
		}

		number /= 10;
	}
	return true;
}