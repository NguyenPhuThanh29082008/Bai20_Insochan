// Bai20_Insochan.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    cout << "Xet so co phai la so chan hay khong\n";
    int so;
    cout << "Nhap so muon biet la so chan: "; cin >> so;


    if (so % 2 == 0)
    {
        cout << "So " << so << " la so chan\n";
    }
    else
    {
        cout << "So " << so << " la so le\n";
    }

    return 0;
}


