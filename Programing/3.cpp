#include <iostream>



using namespace std;
int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    string s;
    int k,a,m;
    cout << "Введите текст:";
    cin >> s;
    cout << "Введите число:";
    cin >> k;

    cout << "Выбирите действие:" << endl << "1.Вывести символ строки под указанным номером" << endl;
    cout << "2.Вывести подстроку от введёного числа до нового числа" << endl;
    cin >> a;
    switch (a)
    {
    case 1: 
        cout << s[k];
        break;
    case 2:
        cin >> m;
        for (int i = 0;i < s.size();i++){
            if (i >= k and i < m){
                cout << s[i];
            }
        }
        break;
    }
    return 0;
}