#include "calculator.h"

Calculator::Calculator()
{

}

void Calculator::SetValue(double value)
{
    this->_value=value;
}

double Calculator::GetValue()
{
    return this->_value;
}

void Calculator::operator+=(double value)
{
    this->SetValue(this->_value+value);
}

void Calculator::operator-=(double value)
{
    this->SetValue(this->_value-value);
}

void Calculator::operator*=(double value)
{
    this->SetValue(this->_value*value);
}

void Calculator::operator/=(double value)
{
    if(value!=0)
        this->SetValue(this->_value/value);
}

double Calculator::factorValue()
{
    if(this->_value>=0)
    {
        int n = this->_value;
        double temp=1;
        for(int i=1;i<=n;i++)
            temp*=i;
        return temp;
    }
    else
        throw -1;
}

double Calculator::sinValue()
{
    return sin(this->_value);
}

double Calculator::cosValue()
{
    return cos(this->_value);
}

double Calculator::tgValue()
{
    return tan(this->_value);
}

double Calculator::exprValue()
{
    return exp(this->_value);
}

double Calculator::lnValue()
{
    if (this->_value>0)
        return log(this->_value);
    else
        throw -3;
}

double Calculator::numberPI()
{
    return M_PI;
}

double Calculator::sqrtValue()
{
    if(this->_value>=0)
    {
        return sqrt(this->_value);
    }
    else
        throw -2;
}
