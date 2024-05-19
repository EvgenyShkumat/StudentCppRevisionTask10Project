#pragma once
#include "tasks.h"

#define RIGHT " - completed successfully. Well DONE!!!"
#define WRONG " - was not running successfully. ERROR!"

void print(string msg, bool result) {
	cout << msg << (result ? RIGHT : WRONG) << endl;
}

void testingTask01() {
	bool result = task01(50) == "1 4 9 16 25 36 49"
		&& task01(-50) == "0"
		&& task01(0) == "0"
		&& task01(49) == "1 4 9 16 25 36 49"
		&& task01(1) == "1"
		&& task01(2) == "1"
		&& task01(3) == "1"
		&& task01(4) == "1 4"
		&& task01(10) == "1 4 9"
		&& task01(20) == "1 4 9 16"
		&& task01(25) == "1 4 9 16 25"
		&& task01(40) == "1 4 9 16 25 36";

	print("Task 01 [Squares of Natural Numbers]", result);
}


void testingTask02() {
	bool result = task02(32)
		&& task02(1)
		&& !task02(0)
		&& !task02(30)
		&& !task02(-4)
		&& !task02(-64)
		&& !task02(-512)
		&& !task02(3)
		&& !task02(7)
		&& !task02(10)
		&& !task02(20)
		&& !task02(40)
		&& !task02(50)

		&& task02(2)
		&& task02(4)
		&& task02(8)
		&& task02(16)
		&& task02(32)
		&& task02(64)
		&& task02(128)
		&& task02(256)
		&& task02(512)
		&& task02(4096);

	print("Task 02 [An Exact Power of Two]", result);
}

void testingTask03() {
	bool result = task03(15) == 3
		&& task03(49) == 7
		&& task03(1) == 0
		&& task03(-15) == 0
		&& task03(0) == 0
		&& task03(2) == 2
		&& task03(3) == 3
		&& task03(4) == 2
		&& task03(5) == 5
		&& task03(6) == 2
		&& task03(7) == 7
		&& task03(8) == 2
		&& task03(9) == 3
		&& task03(10) == 2
		&& task03(11) == 11
		&& task03(13) == 13
		&& task03(17) == 17
		&& task03(19) == 19
		&& task03(23) == 23
		&& task03(29) == 29
		&& task03(31) == 31;

	print("Task 03 [The Smallest Natural Divisor]", result);
}

void testingTask04() {
	bool result = task04(15) == 2
		&& task04(9) == 1
		&& task04(0) == 1
		&& task04(-15) == 2
		&& task04(-123456789) == 9
		&& task04(1234567890) == 10
		&& task04(900) == 3
		&& task04(11111) == 5
		&& task04(999999) == 6
		&& task04(1000000) == 7;

	print("Task 04 [Count of Number Digits]", result);
}

void testingTaskX() {
	bool result = taskX(12345)
		&& taskX(54321)
		&& taskX(0)
		&& !taskX(11111)
		&& !taskX(121)
		&& taskX(-12345)
		&& taskX(-54321)
		&& !taskX(11345)
		&& !taskX(54311)
		&& !taskX(12145)
		&& !taskX(54121)
		&& !taskX(-11345)
		&& !taskX(-54311)
		&& taskX(1234567890)
		&& taskX(-1234567890)
		&& !taskX(900)
		&& !taskX(-900)
		&& !taskX(11111)
		&& !taskX(-11111)
		&& !taskX(999999)
		&& !taskX(-999999)
		&& !taskX(1000000)
		&& !taskX(-1000000);

	print("Task X [Unique Number Digits] ", result);
}