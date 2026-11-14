/*3) Числа Фибоначи. Написать функцию int fibonacci(int n), которая возвращает n-е число Фибоначчи.*/
#include <iostream>
using namespace std;

int fibonacci(int n){
    int a = 0, b = 1;
    int temp;
    if(n == 0 or n == 1) return 0;
    if(n == 2) return 1;

    for(int i = 0;i < n;i++){
        temp = b;
        b = a + b;
        a = temp;
    }

    return b;
}

int main(){
    setlocale(LC_ALL, "ru-RU.UTF8");
    int n;

    cout << "Введите порядковый номер числа фибоначи" << endl;
    while(!(cin >> n)){
        cout << "Неверный ввод";
        cin.ignore();
        cin.clear();
    }
    cout << fibonacci(n) << endl;
    return 0;
}