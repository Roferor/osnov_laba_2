/*4) Напишите программу, которая принимает на вход массив из (N) целых чисел и целевое число (K). 
Программа должна найти и вывести индексы двух элементов массива, сумма которых равна (K). 
Если таких элементов несколько, выведите любую пару. Если пары нет — сообщите об этом. */
#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL,"ru-RU.UTF8");
    int m[1000];
    int size_m = 0, K;

    cout << "Введите размер массива:";
    while(!(cin >> size_m)){
        cout << "Ввод не верный";
        cin.ignore();
        cin.clear();
    }
    for(int i = 0;i < size_m;i++){
        cout << "Введите элемент массива:";
        while(!(cin >> m[i])){
            cout << "Ввод не верный";
            cin.ignore();
            cin.clear();
        }
    }

    cout << "Введите сумму двух чисел которые нужно найти:";
        while(!(cin >> K)){
            cout << "Ввод не верный";
            cin.ignore();
            cin.clear();
        }

    for(int i = 0;i < size_m - 1;i++){
        for(int j = i;j < size_m;j++){
            if(m[i] + m[j] == K){
                cout << i << " " << j << endl;
                exit(0);
            }
        }
    }
    cout << "В массиве нет двух чисел которыя являются суммой введённого числа" << endl;
}
