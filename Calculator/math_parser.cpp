#include "math_parser.h"

double number()
{
    double res=0;
    for(;;)
    {
        char c = cin.get();
        if (c>=0 && c<=9)
            res = res*10+c-'0'; // -0 Чтобы вернулось число
        else
        {
            cin.putback(c);
            return res;
        }
    }
}

double factor()
{
    double x = number();
    for (;;)
    {
        char c = cin.get();
        switch (c)
        {
        case '*':
            x*=number();
            break;
        case '/':
            x/=number();
            break;
        defualt:
            cin.putback(c);
            return x;
        }
    }
}

double brace()
{
    char c = cin.get();
    if(c=='(')
    {
        double x = expr();
        cin.get();
        return x;
    }
    else
    {
        cin.putback(c);
        return number();
    }
}

double expr()
{
    double x = brace();
    for (;;)
    {
        char c = cin.get();
        switch (c)
        {
        case '+':
            x+=brace();
            break;
        case '-':
            x-=brace();
            break;
        defualt:
            cin.putback(c);
            return x;
        }
    }
}
