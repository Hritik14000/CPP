#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    float basic, hra, da, allow, pf;
    char grade;
    cin >> basic >> grade;
    if (grade == 'A')
    {
        allow = 1700;
    }

    else if (grade == 'B')
    {
        allow = 1500;
    }
    else
    {
        allow = 1300;
    }
    hra = 0.2 * basic;
    da = 0.5 * basic;
    pf = 0.11 * basic;
    cout << "total salary" << round(basic + hra + da + allow - pf )<< endl;
    return 0;
}