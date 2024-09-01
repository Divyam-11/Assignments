#include <iostream>
using namespace std;

class Book
{
public:
    string title;
    string author;
    int ISBN;
};

class Library
{
    Book Lib[10];
    int size = 0;

public:
    bool addNewBook(string &title, string &author, int &ISBN)
    {
        if (size >= 10)
            return false;
        Book obj;
        obj.title = title;
        obj.author = author;
        obj.ISBN = ISBN;
        Lib[size] = obj;
        size++;
        return true;
    }

    bool removeBooks(int &ISBN)
    {
        int index = -1;
        for (int i = 0; i < size; i++)
        {
            if (Lib[i].ISBN == ISBN)
            {
                index = i;
                break;
            }
        }

        if (index == -1)
            return false;

        for (int i = index; i < size - 1; i++)
        {
            Lib[i] = Lib[i + 1];
        }

        size--;
        return true;
    }

    void displayDetails()
    {
        cout << "Book Details: " << endl;
        for (int i = 0; i < size; i++)
        {
            cout << "Title: " << Lib[i].title << ", Author: " << Lib[i].author << ", ISBN: " << Lib[i].ISBN << endl;
        }
    }
};

int main()
{
    Library lib;

    string title1 = "Harry Potter and the Philosopher's Stone";
    string author1 = "J.K. Rowling";
    int isbn1 = 1;

    string title2 = "Harry Potter and the Chamber of Secrets";
    string author2 = "J.K. Rowling";
    int isbn2 = 2;

    string title3 = "Harry Potter and the Prisoner of Azkaban";
    string author3 = "J.K. Rowling";
    int isbn3 = 3;

    string title4 = "Harry Potter and the Goblet of Fire";
    string author4 = "J.K. Rowling";
    int isbn4 = 4;

    string title5 = "Harry Potter and the Order of the Phoenix";
    string author5 = "J.K. Rowling";
    int isbn5 = 5;

    lib.addNewBook(title1, author1, isbn1);
    lib.addNewBook(title2, author2, isbn2);
    lib.addNewBook(title3, author3, isbn3);
    lib.addNewBook(title4, author4, isbn4);
    lib.addNewBook(title5, author5, isbn5);

    lib.displayDetails();
    int book_to_remove = 4;
    lib.removeBooks(book_to_remove);
    lib.displayDetails();

    return 0;
}
