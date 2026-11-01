/*ОП 31.10.26 Указатели, ссылки массив как ссылка*/
#include <iostream>
using namespace std;

void f(int& a){
    a = 1;
}

int find_min(int* massiv, int count){
    int* min = nullptr;
    int minimum = *massiv;
    for(min; min < massiv+count ; min++){
        if(minimum > *min){
            minimum = *min;
        }
    }

    return minimum;
}

int main(){
/*
    int a = 5;
    int* pa = &a;
    int** ppa = &pa;
    cout << pa << endl;
    cout << ppa << endl;
*/
    int array[5] = {1,2,3,4,5};
    find_min(array, 5);
    return 0;
}