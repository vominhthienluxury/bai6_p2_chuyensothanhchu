#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int so;
    cout << "nhap so:  ";
    cin >> so;
    if (so == 0) {
        cout << "day la so khong\n";
    }
    else if (so == 1) {cout << "day la so mot\n";}
    else if (so == 2) {cout << "day la so hai\n";}
    else if (so == 3) {cout << "day la so ba\n";}
    else if (so == 4) {cout << "day la so bon\n";}
    else if (so == 5) {cout << "day la so nam\n";}
    else if (so == 6) {cout << "day la so sau\n";}
    else if (so == 7) {cout << "day la so bay\n";}
    else if (so == 8) {cout << "day la so tam\n";}
    switch (so)
    {
    case 0:
        cout << "so khong";
        break;
    case 1:
        cout << "so mot";
        break;
    case 2:
        cout << "so hai";
        break;
    case 3:
        cout << "so ba";
        break;
    case 4:
        cout << "so bon";
        break;
    case 5:
        cout << "so nam";
        break;
    case 6:
        cout << "so sau";
        break;
    case 7:
        cout << "so bay";
        break;
    case 8:
        cout << "so tam";
        break;
    case 9:
        cout << "so chin";
        break;
    case 10:
        cout << "so muoi";
        break;
            
    }
}
