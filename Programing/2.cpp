#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL,"ru_RU.UTF-8");
    int n, sum = 0,i = 0;
    
    cout << "Введите положительное число до которого нужно сумировать целое и кратное 5";
    cin >> n;
    if(n < 0){
        cout << "Число должно быть больше 0";
        exit(1);
    }
    while(i < n){
        if (i % 5 == 0){
            sum += i;
        }
        i++;
    }
    cout << sum;
}