#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int one, two, three, four, five, six, seven;
    cout << "Введите первое число:\n";
    cin >> one;
    cout << "Введите второе число:\n";
    cin >> two;
    cout << "Введите третье число:\n";
    cin >> three;
    cout << "Введите четвёртое число:\n";
    cin >> four;
    cout << "Введите пятое число:\n";
    cin >> five;
    cout << "Введите шестое число:\n";
    cin >> six;
    cout << "Введите седьмое число:\n";
    cin >> seven;
    if (one < two)
    {
        one = two;
    }
    if (one < three)
    {
        one = three;
    }
    if (one < four)
    {
        one = four;
    }
    if (one < five)
    {
        one = five;
    }
    if (one < six)
    {
        one = six;
    }
    if (one < seven)
    {
        one = seven;
    }
    cout << "max: " << one;
}
