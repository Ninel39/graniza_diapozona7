// graniza_diapozona7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int i;
    cout << "Введите первое число""\n";
    int a;
    cin >> a;
    cout << "Введите второе число""\n";
    int b;
    cin >> b;


    if
        (b < a)
    {
        int i = a; a = b; b = i;
    }

    cout << "\nЧетное ";
    for (int i = a; i < b; i++)
    {
        if (i % 2 == 0)
            cout << i << " ";
    }
    cout << "\nНечетное ";
    for (int i = a; i < b; i++)
    {
        if (i % 2 != 0);

        cout << i << " ";
    }
    cout << "\nДелятся на 7 ";
    for (int i = a; i < b; i++)
    {
        if (i % 7 == 0)
            cout << i << " ";
    }

}