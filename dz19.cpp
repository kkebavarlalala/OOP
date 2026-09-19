#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    string title;
    string author;
    string genre;

    bool isTaken;

    string readerSurname;
    int readerId;

public:
    Book()
    {
        title = "";
        author = "";
        genre = "";
        isTaken = false;
        readerSurname = "";
        readerId = 0;
	}
    Book(string t, string a, string g)
    {
        title = t;
        author = a;
        genre = g;

        isTaken = false;
        readerSurname = "";
        readerId = 0;
    }
    string getTitle()
    {
        return title;
    }

    string getAuthor()
    {
        return author;
    }

    string getGenre()
    {
        return genre;
    }

    bool getIsTaken()
    {
        return isTaken;
    }

    string getReaderSurname()
    {
        return readerSurname;
    }

    int getReaderId()
    {
        return readerId;
    }

    void setTitle(string t)
    {
        title = t;
    }

    void setAuthor(string a)
    {
        author = a;
    }

    void setGenre(string g)
    {
        genre = g;
    }

    void setIsTaken(bool taken)
    {
        isTaken = taken;
    }

    void setReaderSurname(string surname)
    {
        readerSurname = surname;
    }

    void setReaderId(int id)
    {
        readerId = id;
    }

    void takeBook(string surname, int id)
    {
        if (isTaken == false)
        {
            isTaken = true;
            readerSurname = surname;
            readerId = id;

            cout << "Book was taken." << endl;
        }
        else
        {
            cout << "Book is already taken." << endl;
        }
    }

    void returnBook()
    {
        if (isTaken == true)
        {
            isTaken = false;
            readerSurname = "";
            readerId = 0;

            cout << "Book was returned." << endl;
        }
        else
        {
            cout << "Book is already in the library." << endl;
        }
    }

    void showInfo()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Genre: " << genre << endl;

        if (isTaken == true)
        {
            cout << "Status: taken" << endl;
            cout << "Reader surname: " << readerSurname << endl;
            cout << "Reader ID: " << readerId << endl;
        }
        else
        {
            cout << "Status: in library" << endl;
        }

        cout << endl;
    }
};

int main()
{
    Book book1("Harry Potter", "J. K. Rowling", "Fantasy");
    book1.showInfo();
    book1.takeBook("Ivanov", 101);
    book1.showInfo();
    book1.returnBook();
    book1.showInfo();

}