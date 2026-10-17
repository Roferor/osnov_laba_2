#include <iostream>
#include <string>
using namespace std;

int main(){
    setlocale(LC_ALL,"ru_RU.UTF-8");
    string s;
    int c = 0,it = 0,prob = 0,znak = 0;
    getline(cin,s);

    for(int i = 0;i < s.size();i++){
        if(static_cast<int>(s[i]) >= 65 and static_cast<int>(s[i]) <= 90 or static_cast<int>(s[i]) >= 97 and static_cast<int>(s[i]) <= 122){
            c++;
        }
        if(static_cast<int>(s[i]) >= 48 and static_cast<int>(s[i]) <= 57){
            it++;
        }
        if(s[i] == ' '){
            prob++;
        }
        if(s[i] == '!' or s[i] == '?' or s[i] == ',' or s[i] == '.'){
            znak++;
        }
    }

    cout << "Буквы:" << c << endl;
    cout << "Цыфры:" << it << endl;
    cout << "Пробелы:" << prob << endl;
    cout << "Знаки:" << znak << endl;
}