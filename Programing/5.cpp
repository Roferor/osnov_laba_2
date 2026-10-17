#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL,"re_RU.UTF-8");
    int N,q;
    string n = "";
    cout << "Введите число:";
    cin >> N;
    cout << "Введите степень:";
    cin >> q;

    while(N > 0){
        n += to_string(N % q);
        N = N/q;
    }
    for(int i = n.size() - 1;i >= 0;i--){
        cout << n[i];
    }
}