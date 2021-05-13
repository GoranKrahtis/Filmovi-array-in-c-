// zadatak2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void Festival() {
    string name;
    cout << "Unesite naziv festivala: ";
    cin >> name;
    int rows, cols = 2;
    cout << "Unesite broj godina odrzavanja festivala " << name << ":";
    cin >> rows;

    int** table = new int* [rows];
    for (int i = 0; i < rows; i++) {
        table[i] = new int[cols];
    }

    int sum = 0;
    float avg;
    for (int i = 0; i < rows; i++) {
        cout << "Unestite godinu ";
        cin >> table[i][0];
        cout << "unestite broj filmova ";
        cin >> table[i][1];
        sum += table[i][1];
    }
    cout << "\nFestival " << name << "\n";
    for (int i = 0; i < rows; i++) {
        cout << "<" << table[i][0] << "," << table[i][1] << ">";
        if (i < rows - 1)
            cout << ",";
    }

    avg = (float)sum / rows;

    cout << "\nProsecan broj filmova na festvalu " << name << " je: " << avg << endl;

    string answer;
    cout << "Da li zelite da unesete novi festival?" << endl;
    cin >> answer;
    cout << endl;
    if (answer.find("da" || "Da" || "DA" || "y" || "Y" || "YES" || "Yes" || "YEs" || "yes")) {
        Festival();
    }
}

// Dynamic Memory Allocation in C++ for 2D Array
int main()
{
    Festival();
    system("pause>0");
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
