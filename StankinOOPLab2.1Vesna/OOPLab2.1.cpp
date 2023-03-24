// OOPLab2.1.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
class Lib362 {
    
public:
    //virtual void fillDBLib362() = 0;
};
class Book : public Lib362 {
    
public:
    int* yearOfRelease; // ���� ������ �����
    std::string* nameBook; // �������� �����
    int* numberOfPages; // ���������� �������
    Book() : yearOfRelease(new int),
        nameBook(new std::string),
        numberOfPages(new int) {
    }
    /*void fillDBLib362() override {

    }*/
    virtual ~Book(){
        delete yearOfRelease, nameBook, numberOfPages;
    }
};
class Brochures : public Lib362{
public:
    int* yearOfRelease; // ���� ������ �����
    std::string* nameBook; // �������� �����
    int* numberOfPages; // ���������� �������
    Brochures() : yearOfRelease(new int),
        nameBook(new std::string),
        numberOfPages(new int) {
    }
    virtual ~Brochures() {
        delete yearOfRelease, nameBook, numberOfPages;
    }
};
class Newspapers : public Lib362 {
public:
    int* yearOfRelease; // ���� ������ �����
    std::string* nameBook; // �������� �����
    int* numberOfPages; // ���������� �������
    Newspapers() : yearOfRelease(new int),
        nameBook(new std::string),
        numberOfPages(new int) {
    }
    virtual ~Newspapers() {
        delete yearOfRelease, nameBook, numberOfPages;
    }
};
class Magazines : public Lib362 {
public:
    int* yearOfRelease; // ���� ������ �����
    std::string* nameBook; // �������� �����
    int* numberOfPages; // ���������� �������
    Magazines() : yearOfRelease(new int),
        nameBook(new std::string),
        numberOfPages(new int) {
    }
    virtual ~Magazines() {
        delete yearOfRelease, nameBook, numberOfPages;
    }
};
void fillDBLib362() {
    std::ofstream fout362;
    

    fout362.exceptions(std::fstream::failbit | std::fstream::badbit);
    try
    {
        fout362.open("Lib362BookBD.txt");
    }
    catch (const std::ofstream::failure& ex)
    {
        cout << ex.what() << endl;
        cout << ex.code() << endl;
        cout << "������ �������� ����� Lib362BookBD.txt!" << endl;
    }
    Book bk;
    srand(time(NULL));
    int randNum;
    int randCBook;
    for (int i = 0; i < 10; i++) {
        randNum = rand() % 3;
        randCBook = rand() % 4;
        switch (randNum)
        {
        case 0:
            switch (randCBook)
            {
            case 0:
                fout362 << bk.nameBook << bk.numberOfPages << bk.yearOfRelease;
            default:
                break;
            }
            break;
        case 1:
        default:
            break;
        }
    }
    fout362.close();
}
int main()
{
}


