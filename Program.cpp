#include "Program.h"
void Program::Menu(){
    cout << "1.Programi Olustur" << endl;
    cout << "2.Programi Goruntule" << endl;
    cout << "3.Cikis" << endl;
    cout << "Secim : ";
}
void Program::DegerGir(){
    cout << "Ders Sayisini Girin : ";
    cin >> dersSayisi;
    dersAdlari = new string[dersSayisi];
    dersSaatleri = new int[dersSayisi];
    for (int i = 0; i < dersSayisi; i++)
    {
        cout << i + 1 << '.' << "Ders Adini Girin : ";
        cin >> dersAdlari[i];
    }
    for (int i = 0; i < dersSayisi; i++)
    {
        cout << "- " << dersAdlari[i] << " - " << " Dersinin Saatini Girin : ";
        cin >> dersSaatleri[i];
    }
    
}
void Program::Tablo(){
    DersProgrami();
    cout << "Pazt\tSali\tCars\tPers\tCuma" << endl;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (dersProgrami[i][j] == "X")
            {
                cout << " " << dersProgrami[i][j] << "\t";
            }
            else
                cout << dersProgrami[i][j] << "\t";
        }
        cout << endl << endl;
    }
}
void Program::DersProgrami(){
    for (int i = 0; i < dersSayisi; i++)
    {
        cout << i + 1 << ". Ders " << dersAdlari[i] << endl;
    }
    for (int i = 0; i < dersSayisi; i++)
    {
        cout << dersAdlari[i] << ':' << "Ders Saati : " << dersSaatleri[i] << endl;
    }
    
    for (int i = 0; i < dersSayisi; i++)
    {
        for (int j = 0; j < dersSaatleri[i]; j++)
        {
            int x = rand() % 8;
            int y = rand() % 5;
            if (dersProgrami[x][y] == "X")
            {
                dersProgrami[x][y] = dersAdlari[i];
            }
            else
                j--;
        }   
    }
}