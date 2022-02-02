//4. Напишіть гру Камінь-Ножиці-Папір-Ящірка-Спок використовуючи рядки
#include <iostream>
#include <ctime>
#include <string>
#include <Windows.h>// підключення заголовного файлу Windows.h, завдяки чому зможемо використовувати українську мову
using namespace std;
int main()
{
    srand(time(NULL));
    //SetConsoleCP(1251); // встановлення кодування Windows-1251 в  потік введення
    //SetConsoleOutputCP(1251); // встановлення кодування Windows-1251 в  потік виведення
    cout << "Hello! Let's play a game" << endl;
    cout << "Write  Rock or Paper or Scissors or Lizard or Spock" << endl;
    cout << "If you want to stop game- write \"Stop\"" << endl;
    string player;// оголошуємо змінну player
    while (player != "Stop") {//умова, за якої при введенні "Stop"-  закінчиться гра
        int k = rand() % 5;//оголошуємо змінну, яка рандомно буде дорівнювати від 0 до 5
        string  compValue;//оголошуємо змінну compValue
        if (k == 0) {//якщо k дорівнює 0, то
            compValue = "Rock";//комп’ютер вибирає Rock- камінь
        }
        else if (k == 1) {//якщо k дорівнює 1, то
            compValue = "Paper";//комп’ютер вибирає Paper - папір
        }
        else if (k == 2) {//якщо k дорівнює 2, то
            compValue = "Scissors";//комп’ютер вибирає Scissors - ножиці
        }
        else if (k == 3) {//якщо k дорівнює 3, то
            compValue = "Lizard";//комп’ютер вибирає Lizard - ящірка
        }
        else if (k == 4) {//якщо k дорівнює 4, то
            compValue = "Spock";//комп’ютер вибирає Spock - Спок
        }
        getline(cin, player);// вводить слово гравець - player

        if (player == compValue) {//якщо  слово гравця і комп’ютера однакові, то
            cout << "Draw! Computer chose - " << compValue << endl;//нічия
        }
        else if ((player == "Rock" and compValue == "Scissors") or (player == "Rock" and compValue == "Lizard") or (player == "Paper" and compValue == "Rock") or (player == "Paper" and compValue == "Spock") or (player == "Spock" and compValue == "Scissors") or (player == "Spock" and compValue == "Rock") or (player == "Scissors" and compValue == "Paper") or (player == "Scissors" and compValue == "Lizard") or (player == "Lizard" and compValue == "Paper") or (player == "Lizard" and compValue == "Spock")) {//ставимо умови, за яких виграє гравець
            cout << "You win! Computer chose - " << compValue << endl;
        }
        else {//якщо не виконуються умови, за яких виграє гравець,то
            cout << "You lose! Computer chose - " << compValue << endl;// виграє комп’ютер
        }
    }
}
