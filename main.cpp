#include<iostream>
#include"Program.cpp"
using namespace std;
int main(int argc, char const *argv[])
{
    srand((unsigned)(time(NULL)));
    Program program;
    int op;
    while (op != 3)
    {
        program.Menu();
        cin >> op;
        switch (op)
        {
        case 1:
            system("cls");
            program.DegerGir();
            break;
        case 2:
            system("cls");
            program.Tablo();
            break;
        case 3:
            cout << "Cikis Yapildi" << endl;
            break;
        default:
            cout << "Gecerli Bir Deger Girin" << endl;
            break;
        }
    }
    system("pause");
    return 0;
}
