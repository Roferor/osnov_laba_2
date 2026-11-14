/*2) Калькулятор. Напишите функцию double calculate(double a, double b, char op), 
которая принимает два числа и знак операции (+, -, *, /). 
Функция должна возвращать результат вычислений. Ввод происходит от пользователя.*/

#include <iostream>
using namespace std;

double calculate(double a, double b, char op){
    switch(op)
    {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
        default:
            cout << "Действие выбрано неверно" << endl;
            exit(0);
    }
}

int main(){
    setlocale(LC_ALL,"ru-RU.UTF8");
    double a,b;
    char op;
    cout << "Каклькулятор" << endl;
    cout << "===================" << endl;

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

    cout << "Введите действие которое нужно совершить(+, -, *, /):";
    while(!(cin >> op)){
        cout << "Неверный ввод";
        cin.ignore();
        cin.clear();
    }

    cout << calculate(a, b, op);
}