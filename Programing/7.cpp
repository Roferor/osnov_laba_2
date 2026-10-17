#include <iostream>
#include <time.h>
using namespace std;

int main(){
    setlocale(LC_ALL,"ru_RU.UTF-8");
    int day,mon,year, years_old;
    time_t mytime = time(NULL);
    struct tm *now = localtime(&mytime);


    cout << "Введте день:";
    cin >> day;
    cout << "Введите месяц:";
    cin >> mon;
    cout << "Введите год:";
    cin >> year;

    years_old = (now->tm_year + 1900) - year;
    if((now->tm_mon < mon) or ((now->tm_mon == mon) and now->tm_mday < day)){
        years_old--;
    }
    cout << years_old << endl;
}