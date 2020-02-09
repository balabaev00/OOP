#include "pch.h"
#include "TimeTests.h"
#include <iostream>
#include <cassert>

using namespace std;

void test_Time_Consturctor()
{
	{
		Time a;
		assert(a.seconds() == 0);
	}
	{
		Time a;
		assert(a.minutes() == 0);
	}
	{
		Time a;
		assert(a.hours() == 0);
	}
}

void test_Time_setTime()
{
	{
		Time a;
		a.setSeconds(0);
		assert(a.seconds() == 0);
	}
	{
		Time a;
		a.setSeconds(37);
		assert(a.seconds() == 37);
	}
	/*{
		Time a;
		try {
			a.setSeconds(60);
			assert(0 && "a.setSeconds(60) Ошибка");
		}
		catch (unsigned e) 
		{ ; } 
	}*/
	{
		Time a;
		a.setMinutes(0);
		assert(a.minutes() == 0);
	}
	{
		Time a;
		a.setMinutes(37);
		assert(a.minutes() == 37);
	}
	/*{
		Time a;
		try {
			a.setMinutes(60);
			assert(0 && "a.setMinutes(60) Ошибка");
		}
		catch (unsigned e)
		{
			;
		}
	}*/
	{
		Time a;
		a.setHours(0);
		assert(a.hours() == 0);
	}
	{
		Time a;
		a.setHours(15);
		assert(a.hours() == 15);
	}
	/*{
		Time a;
		try {
			a.setHours(24);
			assert(0 && "a.setHours(24) Ошибка");
		}
		catch (unsigned e)
		{
			;
		}
	}*/
}

void test_Time_AddTime()
{
	{
		Time a(0, 0, 45);
		a.addSeconds(30);
		assert(a.minutes() == 1 && a.seconds() == 15);
	}
	/*{
		Time a(0, 0, 45);
		a.addSeconds(90);
		assert(a.minutes() == 2 && a.seconds() == 15);
	}*/
	{
		Time a(0, 45, 0);
		a.addMinutes(30);
		assert(a.hours() == 1 && a.minutes() == 15);
	}
	/*{
		Time a(0, 45, 0);
		a.addMinutes(1475);
		assert(a.hours() == 1 && a.minutes() == 15);
	}*/
	{
		Time a(1, 0, 0);
		a.addHours(5);
		assert(a.hours() == 6);
	}
	{
		Time a(1, 0, 0);
		a.addHours(24);
		assert(a.hours() == 1);
	}
	{
		Time a(1, 0, 0);
		a.addHours(48);
		assert(a.hours() == 1);
	}
	/*{
		Time a(1, 0, 0);
		a.addHours(74);
		assert(a.hours() == 3);
	}*/
}

void test_Time_TransferTime()
{
	{
		Time a(0, 30, 0);
		assert(a.timeTosecond() == 1800);
	}
	{
		Time a(1, 30, 0);
		assert(a.timeTosecond() == 5400);
	}
	{
		Time a(1, 30, 0);
		assert(a.timeTominute() == 90);
	}
	/*{
		Time a(1, 30, 15);
		assert(a.timeTominute() == 90);
	}*/
	{
		Time a(15, 30, 0);
		assert(a.timeTohour() == 15.5);
	}
	/*{
		Time a(15, 30, 30);
		assert(a.timeTohour() == 15.508);
	}*/
}

void test_Time_opr()
{
	{
		Time a(15, 0, 0);
		Time b(20, 0, 0);
		Time c = a+b;
		assert(c.hours() == 11 && c.minutes() == 0 && c.seconds() == 0);
	}
	/*{
		Time a(15, 0, 0);
		Time b(48, 0, 0);
		Time c = a + b;
		assert(c.hours() == 15 && c.minutes() == 0 && c.seconds() == 0);
	}*/
	{
		Time a(0, 30, 0);
		Time b(0, 40, 0);
		Time c = a + b;
		assert(c.hours() == 1 && c.minutes() == 10 && c.seconds() == 0);
	}
	{
		Time a(0, 30, 0);
		Time b(23, 40, 0);
		Time c = a + b;
		assert(c.hours() == 0 && c.minutes() == 10 && c.seconds() == 0);
	}
	{
		Time a(0, 0, 40);
		Time b(0, 0, 30);
		Time c = a + b;
		assert(c.hours() == 0 && c.minutes() == 1 && c.seconds() == 10);
	}
	{
		Time a(0, 0, 40);
		Time b(0, 59, 30);
		Time c = a + b;
		assert(c.hours() == 1 && c.minutes() == 0 && c.seconds() == 10);
	}
	/*Вычитание*/
	{
		Time a(0, 0, 30);
		Time b(0, 1, 30);
		Time c = a - b;
		assert(c.hours() == 23 && c.minutes() == 59 && c.seconds() == 0);
	}
	{
		Time a(22, 0, 30);
		Time b(0, 1, 30);
		Time c = a - b;
		assert(c.hours() == 21 && c.minutes() == 59 && c.seconds() == 0);
	}
	{
		Time a(0, 0, 30);
		Time b(22, 0, 30);
		Time c = a - b;
		assert(c.hours() == 2 && c.minutes() == 0 && c.seconds() == 0);
	}
	{
		Time a(15, 0, 30);
		Time b(0, 30, 30);
		Time c = a - b;
		assert(c.hours() == 14 && c.minutes() == 30 && c.seconds() == 0);
	}
	{
		Time a(15, 1, 58);
		Time b(0, 30, 30);
		Time c = a - b;
		assert(c.hours() == 14 && c.minutes() == 31 && c.seconds() == 28);
	}
}

void test_Time_AllCheck()
{
	test_Time_AddTime();
	test_Time_AllCheck();
	test_Time_Consturctor();
	test_Time_setTime();
	test_Time_TransferTime();
	test_Time_opr();
}


