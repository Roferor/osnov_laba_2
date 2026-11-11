/*4.1) Вместо ввода пользователя сгенерировать массив из 1 000 000 элементов и найти любую пару заданную с клавиатуры (К) 
Программа должна найти ответ меньше чем за 1 минуту.*/
#include <algorithm>
#include <iostream>
#include <random>

using namespace std;

int main(){
    setlocale(LC_ALL,"ru-RU.UTF8");
    int size_m = 1'000'000, K, raznost;
    string s = " ";

    //generate(arr.begin(),arr.end(), [&]() { return unform_int_distribution<>(1,1000)(gen); });
    static int arr[1'000'000];
    std::mt19937 gen(std::random_device{}());
    std::uniform_int_distribution<int> dist(1, 1000);
    std::generate(std::begin(arr), std::end(arr), [&] { return dist(gen); });

    cout << "Введите сумму двух чисел которые нужно найти:";
    while(!(cin >> K)){
        cout << "Ввод не верный";
        cin.ignore();
        cin.clear();
    }


    for(int i = 0;i < size_m - 1;i++){
        if(s.find(" " + to_string(arr[i]) + " ") == -1){
            raznost = K - arr[i];
            for(int j = i + 1;j < size_m;j++){
                if(raznost == arr[j]){
                    cout << i << " " << j << endl;
                    cout << arr[i] << " : " << arr[j] ;
                    exit(0);
                }
            }
            s += to_string(arr[i]) + " ";
        }

        if(i % 100'000 == 0){
            cout << "i:" << i << endl;
        }
    }
    cout << "В массиве нет двух чисел которыя являются суммой введённого числа" << endl;
}