/*
 Определить класс с именем TRAIN, содержащий следующие поля:
 ● название пункта назначения;
 ● номер поезда;
 ● время отправления.
 Определить методы доступа к этим полям и перегруженные операции извлечения и вставки для объектов типа TRAIN.
 Заранее число объектов не известно.
 Написать программу, выполняющую следующие действия:
 ● записи должны быть размещены в алфавитном порядке по названиям пунктов назначения;
 ● вывод на экран информации о поездах, направляющихся в пункт, название которого введено с клавиатуры;
 ● если таких поездов нет, выдать на дисплей соответствующее сообщение.
*/


#include <iostream>
#include "mylist.h"

using namespace std;

void menuPrint()
{
    setlocale(LC_ALL, "Russian");
    cout << endl << "\tМеню" << endl;
    cout << "0\tВыход" << endl;
    cout << "1\tВывод" << endl;
    cout << "2\tДобавить" << endl;
    cout << "3\tРедактировать" << endl;
    cout << "4\tУдалить" << endl;
    cout << "5\tПоиск" << endl;
    cout << "6\tСортировка" << endl;
}

void menu()
{
    setlocale(LC_ALL, "Russian");
    myList obj;

    int take = 0;

    while (1)
    {
        menuPrint();
        obj.seeFlag();

        mcin(&take);
        switch (take)
        {
        case 0:
            return;

        case 1:
            obj.print();
            break;

        case 2:
            obj.add();
            break;

        case 3:
            try {
                obj.edit();
            }
            catch (int e)
            {
                if (e == -1)
                    cout << "EXEPTION: invalid index" << endl;
                if (e == 0)
                    cout << "EXEPTION: no objects added yet" << endl;
            }
            break;

        case 4:
            try {
                obj.del();
            }
            catch (int e)
            {
                if (e == -1)
                    cout << "EXEPTION: invalid index" << endl;
                if (e == 0)
                    cout << "EXEPTION: no objects added yet" << endl;
            }
            break;

        case 5:
            try {
                obj.findType();
            }
            catch (int e)
            {
                if (e == 0)
                    cout << "EXEPTION: no objects added yet" << endl;
            }
            break;
        case 6:
            obj.flipFlag();
            break;

        default:
            cout << "unknown" << endl;
        }
    }


}

int main()
{
    setlocale(LC_ALL, "Russian");
    menu();

    return 0;
}