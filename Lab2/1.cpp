/*Сортировка пузырьком: Реализовать алгоритм сортировки массива. Массив вводит пользователь, 
задавая сначала размер массива, далее его значения.*/
#include <iostream>
using namespace std;
//23432424
int main(){
    int m[1000];
    int size_m, temp;
    setlocale(LC_ALL,"ru-RU.UTF8");

    cout << "Введите размерность массива:";
    while(!(cin >> size_m)){
        cout << "Нужно чилсо:";
        cin.ignore();
        cin.clear();
    }

    for(int i = 0;i < size_m;i++){
        cout << "Введите элемент массива:";
        while(!(cin >> m[i])){
            cout << "Нужно число:";
            cin.ignore();
            cin.clear();
        }
    }

    for(int i = 0;i < size_m;i++){
        for(int j = 0;j < size_m - 1 - i;j++){
            if(m[j] > m[j + 1]){
                temp = m[j + 1];
                m[j + 1] = m[j];
                m[j] = temp;
            }
        }
    }

    for(int i = 0;i < size_m;i++){
        cout << m[i]  << " ";
    }
}