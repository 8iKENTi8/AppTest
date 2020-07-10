#include <iostream>
#include <algorithm>
#include <string>
#include <list>
#include <vector>
using namespace std;


class Student
{
public:

    Student(string name, double score) {
        this->Name = name;
        this->Score = score;
    }


    string Name;
    double Score;
};


int main()
{
    setlocale(LC_ALL, "ru");

    list<Student> people{
    Student("Олег", 32),
    Student("Ваня", 71),
    Student("Аня", 65)
    };
    

    int a;
    cout << " 1 – Добавить позиции\n";
    cout << " 2 – Удалить позиции\n";
    cout << " 3 – Вывести список позиций\n";
    cout << " 4 – Выполнять текстовый поиск позиции\n";
    cout << " 5 – Выход\n\n";


    cout << "Select: ";
    cin >> a;

    switch (a)
    {
    case 1:
    {
        system("cls");

        cout << " 1 – Добавить вначало\n";
        cout << " 2 – Добавить вначало\n";
        cout << " 3 – Добавить в выбраную позицию\n";
        
        string n;
        double s;
        cout << "Введите имя студента: ";
        cin >> n;
        cout << "Введите балл студента: ";
        cin >> s;

        Student s1(n, s);

        people.push_back(s1);

    }
    break;
    case 2:
    {
        system("cls");
    }
    break;
    case 3:
    {
        system("cls");
        cout << "Всего элементов: " << people.size() << endl << endl;

        for (auto i : people)
            cout << "Имя: " << i.Name << "Баллы: " << i.Score << endl;
      
    }
    break;
    case 4:
    {
        system("cls");
    }
    break;
    case 5: exit(0); 
   
    default: { 
        system("cls");
        cout << "Неправильный ввод повторите попытку\n\n"; 
        main();
    }
   }

    
}