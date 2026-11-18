#include <iostream>
using namespace std;

int notes(int a, int b) 
{
    return a + b;
}

int notes(int a, int b, int c) 
{
    return a + b + c;
}

int main() {
    setlocale(LC_ALL, "Russian");

    int n1, n2, n3;

    cout << "ТЕСТ 1 (2 аргумента)" << endl;
    cout << "Введите количество сыгранных нот (1-е число): ";
    cin >> n1;
    cout << "Введите количество сыгранных нот (2-е число): ";
    cin >> n2;

    cout << "Суммарное число нот: " << notes(n1, n2) << endl;

    cout << "\n";

    cout << "ТЕСТ 2 (3 аргумента, граничный случай)" << endl;
    cout << "Введите количество сыгранных нот (1-е число): ";
    cin >> n1;
    cout << "Введите количество сыгранных нот (2-е число): ";
    cin >> n2;
    cout << "Введите количество сыгранных нот (3-е число): ";
    cin >> n3;

    cout << "Суммарное число нот: " << notes(n1, n2, n3) << endl;

    return 0;
}