#include "pch.h"
#include "Time.h"
#include <string>


using namespace std;

Time::Time() {
	_seconds = 0;
	_minutes = 0;
	_hours = 0;
}

Time::Time(unsigned h,unsigned m,unsigned s){
	_hours = h;
	_minutes = m;
	_seconds = s;
}


void Time::setHours(unsigned h) 
{
	if (h >= 0 && h < 24)
		_hours = h;
}

void Time::setMinutes(unsigned m) 
{
	if (m >= 0 && m < 60)
		_minutes = m;
}

void Time::setSeconds(unsigned s) 
{
	if (s >= 0 && s < 60)
		_seconds = s;
}

void Time::setTime(unsigned h, unsigned m, unsigned s) 
{
	setHours(h);
	setMinutes(m);
	setSeconds(s);
}

/*Геттеры*/
float Time::hours() const 
{
	return _hours;
}

float Time::minutes() const
{
	return _minutes;
}

float Time::seconds() const 
{
	return _seconds;
}

float Time::timeTosecond() 
{
	float temp;
	temp = _hours * 60 * 60 + _minutes * 60 + _seconds;
	return temp;
}

float Time::timeTominute() 
{
	float temp;
	temp = _hours * 60 + _minutes + _seconds / 60;
	return temp;
}

float Time::timeTohour() 
{
	float temp = 0;
	temp = _hours + _minutes / 60 + _seconds / (60 * 60);
	return temp;
}

void Time::addSeconds(float number) 
{
	if (_seconds + number < 60)
	{
		setSeconds(_seconds + number);
	}
	else
	{
		setSeconds(_seconds + number - 60);
		_minutes++;
		if (_minutes == 60)
		{
			_hours++;
			_minutes = 0;
		}
		if (_hours == 24)
			_hours = 0;
	}
}

void Time::addMinutes(float number) 
{
	if (_minutes + number < 60)
	{
		setMinutes(_minutes + number);
	}
	else
	{
		setMinutes(_minutes + number - 60);
		_hours++;
		if (_hours == 24)
			_hours = 0;
	}
}

void Time::addHours(float number) 
{
	if (_hours + number < 24)
	{
		setHours(_hours + number);
	}
	else
		setHours(_hours + number - 24);
}

Time Time::operator +(const Time & other) 
{
	Time temp;
	temp._seconds = _seconds + other._seconds;
	temp._minutes = _minutes + other._minutes;
	temp._hours = _hours + other._hours;
	// Проверка секунд
	if (temp._seconds > 60)
	{
		temp._seconds = _seconds + other._seconds - 60;
		temp._minutes++;
		if (temp._minutes == 60)
		{
			temp._hours++;
			temp._minutes = 0;
		}
		if (temp._hours == 24)
			temp._hours = 0;
	}
	// Проверка минут
	if (temp._minutes > 60)
	{
		temp._minutes -= 60;
		temp._hours++;
		if (temp._hours == 24)
			temp._hours = 0;
	}
	// Проверка часов
	if (temp._hours > 24)
		temp._hours -= 24;
	return temp;
}

Time Time::operator -(const Time &other)
{
	Time temp;
	temp._seconds = this->_seconds - other._seconds;
	temp._minutes = this->_minutes - other._minutes;
	temp._hours = this->_hours - other._hours;
	if (temp._seconds < 0)
	{
		temp._seconds += 60;
		temp._minutes--;
		if (temp._minutes < 0)
		{
			temp._minutes += 60;
			temp._hours--;
		}
		if (temp._hours < 0)
			temp._hours += 24;
	}
	if (temp._minutes < 0)
	{
		temp._minutes += 60;
		temp._hours--;
		if (temp._hours < 0)
			temp._hours += 24;
	}
	if (temp._hours < 0)
		temp._hours += 24;

	return temp;
}

string Time::toString()
{
	string str, str2;
	int a;
	a = _hours;
	str = to_string(a);
	str += ".";
	a = _minutes;
	str2 = to_string(a);
	str += str2 + ".";
	a = _seconds;
	str2 = to_string(a);
	str += str2;
	return str;
}
