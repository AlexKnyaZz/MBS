// MurderBetrayalSalvation.cpp 
#include <iostream>
#include <windows.h>
using namespace std;

//Salvation
void thirdEndCheck(bool npcA) {
    if (npcA == false) {
        cout << "Игра пройдена!" << endl;
    }
    else {
        cout << "Не стоило злить NPC... Подумайте над его предложением ещё раз, пожалуйста." << endl;
    }
}

void thirdLev() {
    string s;
    bool npcAggression = false;
    cout << "Вы видите человека. Он предлагает вам свою помощь. Вы хотите принять её?" << endl;
    cout << "Введите да  или нет" << endl;
    cin >> s;
    if (s == "да") {
        npcAggression = true;
        thirdEndCheck(npcAggression);
    }
    else {
        npcAggression = true;
        thirdEndCheck(npcAggression);
    }
}

//Betrayal
void secondEndCheck(bool dA) {
    if (dA == false) {
        cout << "Уровень пройден" << endl;
        thirdLev();
    }
    else {
        cout << "Вы умерли" << endl;
    }
}

void secondLev() {
    string s;
    bool dogAggression = false;
    cout << "Вы видите дикую собаку. Хотите её обойти?" << endl;
    cout << "Введите да или нет" << endl;
    cin >> s;
    if (s == "да") {
        dogAggression = true;
        secondEndCheck(dogAggression);
    }
    else {
        dogAggression = false;
        secondEndCheck(dogAggression);
    }
}
//Murder
void firstEndCheck(int dV) {
    if (dV == 0) {
        cout << "уровень пройден" << endl;
        secondLev();
    }
    else {
        cout << "вы умерли" << endl;
    }
}

void firstLev() {
    string s;
    int damageValue = 0;
    cout << "Вы видите перед собой яму. Хотите перепрыгнуть её?" << endl;
    cout << "Введите да или нет" << endl;
    cin >> s;
    if (s == "да") {
        damageValue = 0;
        firstEndCheck(damageValue);
    }
    else {
        damageValue = 0;
        firstEndCheck(damageValue);
    }
}


//Start
int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    firstLev();
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"