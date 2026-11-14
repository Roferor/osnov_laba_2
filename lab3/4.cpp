/*4) Программа шифрование Цезаря. Напишите функцию string encryptCaesar(string text, int shift), 
которая сдвигает каждую букву английского алфавита в строке 
на shift позиций вперед (с циклическим переносом, например, после z идет a).*/

/*4.1) Напишите парную функцию string decryptCaesar(string text, int shift), которая расшифровывает сообщение. 
Проверьте работу обеих функций на зашифрованном послании от друга.*/

#include <iostream>
using namespace std;

string encryptCaesar(string text, int shift){
    for(int i = 0;i < text.size();i++){
        if(text[i] >= 'A' and text[i] <= 'Z'){
            text[i] = (text[i] + shift) % 65 + 65;
        }
        if(text[i] >= 'a' and text[i] <= 'z'){
            text[i] = (text[i] + shift) % 97 + 97;
        }
    }
    return text;
}

string decryptCaesar(string text, int shift){
    for(int i = 0;i < text.size();i++){
        if (text[i] >= 'A' and text[i] <= 'Z'){
            text[i] = (text[i] - shift) % 65 + 65;
        }
        if(text[i] >= 'a' and text[i] <= 'z'){
            text[i] = (text[i] - shift) % 97 + 97;
        }
    }
    return text;
}


int main(){
    setlocale(LC_ALL,"ru-RU.UTF8");
    string text, textCaesar;
    int shift;
    while(text == ""){
        cout << "Введите строку:";
        getline(cin,text);
    }

    cout << "Введите сдвиг:";
    while(!(cin >> shift)){
        cout << "Неверный ввод";
        cin.clear();
        cin.ignore();
    }

    textCaesar = encryptCaesar(text,shift);
    cout << "Шифрование: " << textCaesar << endl;
    cout << "Дешифрование: " << decryptCaesar(textCaesar,shift) << endl;
}