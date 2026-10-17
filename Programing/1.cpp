#include <iostream>
using namespace std;

int main(){
    int N, q, proiz = 1;
    setlocale(LC_ALL,"ru_RU.UTF-8");

    cout << "Введите число затем степень" << endl;
    cin >> N >> q;
    
    for(int i = 0;i < q;i++){
        proiz *= N;
    }

    cout << proiz; 
}