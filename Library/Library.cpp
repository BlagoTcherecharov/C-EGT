#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int NUM_BOOKS = 10;
    string libraryBooks[NUM_BOOKS] = {"Harry Potter", "The Little Prince", "The Hobbit", "The Da Vinci Code", "The Alchemist", "The Three Musketeers", "Death on the Nile", "The Hound of the Baskervilles", "The Lost World", "Journey to the Center of the Earth" };
    int totalBooks[NUM_BOOKS] = {10, 5, 4, 3, 6, 8, 0, 8, 3, 9 };

    int index;

    for (index = 0; index < NUM_BOOKS; index++)
    {
        cout << "Book " << libraryBooks[index] << " has " << totalBooks[index] << " units" << endl;
    }

    index = 0;

    string userInput;

    cout << "Enter name of the book you want: ";
    getline(cin, userInput);

    bool bookFound = true;

    while (index < NUM_BOOKS && bookFound == true)
    {
        if (libraryBooks[index] == userInput)
        {
            if (totalBooks[index] > 0)
            {
                totalBooks[index] -= 1;
                cout << "You have taken the book!" << endl;
            }
            else
            {
                cout << "Book has no units currently!" << endl;
            }
            bookFound = false;
        }
        index++;
    }

    if (bookFound == true)
    {
        cout << "We don’t have this book!" << endl;
    }

    return 0;
}
