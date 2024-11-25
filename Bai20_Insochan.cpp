// Bai20_Insochan.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    cout << "Xet so co phai la so chan hay khong\n";
    int so, tongchan = 0, tongle = 0, tong = 0;
    cout << "Nhap so: "; cin >> so;

    cout << "Cac so chan tu 1 den " << so <<" vua nhap : \n";
    for (int i = 1; i < so; i++)
    {
        tong += i;
        if (i % 2 == 0)
        {
            cout << i << " ";
            tongchan += i;
        }
        else 
        {
            tongle += i;
        }
    }

    cout << endl;    cout << endl;

    cout << "Cac so le tu 1 den " << so << " vua nhap : \n";
    for (int i = 0; i < so; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }


    cout << endl;    cout << endl;

    cout << "Tong cac so chan tu 1 den " << so << " la: " << tongchan << endl;
    cout << "Tong cac so le tu 1 den " << so << " la: " << tongle << endl;
    cout << "Tong cac so tu 1 den " << so << " la: " << tong << endl;

    return 0;
}


