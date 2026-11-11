/*1)  Максимальное из 3х. Написать функцию int maxOfThree(int a, int b, int c), 
которая возвращает наибольшее из трех переданных целых чисел*/

#include <iostream>
using namespace std;

int maxOfThree(int a, int b, int c){
    if(a > b and a > c) return a;
    if(b > c) return b;
    return c;
}

int main(){
    setlocale(LC_ALL,"ru-RU.UTF8");
    int a, b, c;
    cout << "Приложение дял поиска максимального из 3 чисел" << endl;
    cout << "===================================================" << endl;

    cout << "Введите первое число:";
    while(!(cin >> a)){
        cout << "Неверный ввод";
        cin.ignore();
        cin.clear();
    }

    cout << "Введите второе число:";
    while(!(cin >> b)){
        cout << "Неверный ввод";
        cin.ignore();
        cin.clear();
    }

    cout << "Введите третье число:";
    while(!(cin >> c)){
        cout << "Неверный ввод";
        cin.ignore();
        cin.clear();
    }

    cout << maxOfThree(a,b,c);
}