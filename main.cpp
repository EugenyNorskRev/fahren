//fahren.cpp
#include <iostream>
using namespace std;

int main()
{
    float ftemp;
    cout << "Введите температуру по Фаренгейту: ";
    cin >> ftemp;
    float ctemp = (ftemp - 32) * 5 / 9;
    cout << "Температура  по Цельсию равна: " << ctemp << endl;
    return 0;
}
