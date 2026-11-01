/*Бинарный поиск: Реализовать алгоритм поиска элемента в отсортированном массиве. */
#include <iostream>
using namespace std;

int main(){
    int m[10] = {1,3,5,7,11,14,20,24,26,30};
    int chislo, i,size = 10,histori_i = 0;
    bool f = false;
    setlocale(LC_ALL,"ru-RU.UTF8");

    cout << "Введите число индекс котогого нужно найти(пример чисел:{1,3,5,7,11,14,20,24,26,30})";
    while(!(cin >> chislo)){
        cout << "Нужно именно число";
        cin.ignore();
        cin.clear();
    }

    i = size/2;

    while(1){
        if(chislo == m[i]){
            break;
        }
        if(abs(i - histori_i) == 1){
            f = true;
            break;
        }
        histori_i = i;
        if(chislo > m[i]){
            i += i/2;
        }
        else{
            i -= i/2;
        }
    }
    cout << "===============" << endl;
    if(f){
        cout << "Такого числа в массиве нет";
    }
    else{
        cout << i;
    }
}