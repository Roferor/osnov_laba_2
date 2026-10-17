#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    setlocale(LC_ALL,"ru_RU.UTF-8");
    float m,h;
    cout << "Введите вес в кг:";
    cin >> m;
    cout << "Введите рост в метрах:";
    cin >> h;

    cout << fixed << setprecision(1);
    cout << m / (h * h) << endl;
}