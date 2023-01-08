//
// Created by Noob on 19.12.22.
//

#include "sss.h"
#include <iostream>
#include <fstream>

using namespace std;
int choice;
int a;
int rev;
int id;

struct studenci
{
    string imie;
    string nazwisko;
    int album;
};

void dodaj(){
    cout << "Under which number in the list to enrol the student?\t";
    cin >> a;
    if (a<1){
        cout << "Enter a valid list number (list no.>=1)\t";
        cin >> a;}
    rev = a;
    studenci a;
    cout << "Enter the album number of the student you wish to add:\t";
    cin >> a.album;
    cout << "\nSpecify the name of the student you wish to add:\t";
    cin >> a.imie;
    cout << "\nSpecify the name of the student you want to add:\t";
    cin >> a.nazwisko;
    cout << "\nStudent nr. " << rev << ":\t" << a.album << "\t" << a.imie << "\t" << a.nazwisko << "\n\n";

}

void usun(){
    int oof;
    cout << "Enter the number on the list of the student you wish to remove from the list:\t";
    cin >> id;
    oof = id;
    studenci id;
    id.album = 0;
    id.imie = "puste";
    id.nazwisko = "puste";
    cout << "Student with a list number " << oof << " has been deleted\n\n";
}

void save(){
    int j, i;
    cout << "How many of the first entries in the list do you want to save to file\n";
    cin >> j;
    ofstream zapisz;
    zapisz.open("zapislisty.txt");
    for (i = 1; i<=j; i++){
        studenci i;
        zapisz << i.album << "\n" << i.imie << "\n" << i.nazwisko << endl;
    }
    zapisz.close();
    return;
}

void load(){
    int l, k;
    cout << "How many first entries from the file do you want to upload?\n";
    cin >> l;
    ifstream zaladuj;
    zaladuj.open("savedlist.txt");
    for (k = 1; k<l; k++){
        studenci k;
        zaladuj >> k.album;
        zaladuj >> k.imie;
        zaladuj >> k.nazwisko;
    }

}

int main()
{
    do {
        cout << "1. Add student\n2. Delete student\n3. Save list to file\n4. Load list from file\n5. Exit the program\n";
        cin >> choice;

        switch (choice){
            case 1:
                dodaj();
                break;
            case 2:
                usun();
                break;
            case 3:
                save();
                break;
            case 4:
                load();
                break;
        }
    }
    while (choice != 5);
}

