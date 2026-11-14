#include <iostream>
#include <random>
using namespace std;

 int generateSecretNumber(int min, int max){
    random_device rd;   
    mt19937 gen(rd());
    uniform_int_distribution<> dist(min,max);
    return dist(gen);
 }

 int getPlayerGuess(){
    int guess;
    cout << "введите число:" << endl;
    while(!(cin >> guess)){
        cout << "Неверный ввод";
        cin.clear();
        cin.ignore();
    }
    return guess;
 }

 string giveHint(int secret,int guess){
    if(secret == guess){
        return "Угадал";
    }
    if(secret > guess){
        return "Больше";
    }
    return "Меньше";
 }

int main(){
    setlocale(LC_ALL,"ru-RU.UTF8");
    int k = 0;
    int min, max, guess, secret;
    char work = 'y';
    cout << "Игра угадай число" << endl;
    cout << "=====================" << endl;

    cout << "Введите диапазон чисел" << endl;
    cout << "От:";
    while(!(cin >> min)){
        cout << "Неверный ввод";
        cin.clear();
        cin.ignore();
    }
    cout << "До:";
    while(!(cin >> max)){
        cout << "Неверный ввод";
        cin.clear();
        cin.ignore();
    }

    while(work == 'y'){
        secret = generateSecretNumber(min,max);

        do{
            guess = getPlayerGuess();
            cout << giveHint(secret,guess) << endl;
        }while(giveHint(secret,guess) != "Угадал");

        cout << "Хотите протолжить играть[y/n]" << endl;
        while(!(cin >> work)){
        cout << "Неверный ввод";
        cin.clear();
        cin.ignore();
        }
    }
}