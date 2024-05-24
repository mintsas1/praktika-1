#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Book {
private:
    stack<string> titleStack;
    stack<string> authorStack;
    stack<string> genreStack;
    stack<int> yearStack;

public:
   
    Book() {}

    
    Book(string title, string author, string genre, int year) {
        titleStack.push(title);
        authorStack.push(author);
        genreStack.push(genre);
        yearStack.push(year);
    }

    
    void setTitle(string title) {
        titleStack.push(title);
    }

    void setAuthor(string author) {
        authorStack.push(author);
    }

    void setGenre(string genre) {
        genreStack.push(genre);
    }

    void setYear(int year) {
        yearStack.push(year);
    }

    
    string getTitle() {
        if (!titleStack.empty()) {
            return titleStack.top();
        }
        return "";
    }

    string getAuthor() {
        if (!authorStack.empty()) {
            return authorStack.top();
        }
        return "";
    }

    string getGenre() {
        if (!genreStack.empty()) {
            return genreStack.top();
        }
        return "";
    }

    int getYear() {
        if (!yearStack.empty()) {
            return yearStack.top();
        }
        return 0;
    }

    
    void displayInfo() {
        cout << "Title: " << getTitle() << endl;
        cout << "Author: " << getAuthor() << endl;
        cout << "Genre: " << getGenre() << endl;
        cout << "Year: " << getYear() << endl;
    }
};

int main() {
    
    Book book("The Great Gatsby", "F. Scott Fitzgerald", "Novel", 1925);

    
    book.displayInfo();

    
    book.setTitle("1984");
    book.setAuthor("George Orwell");
    book.setGenre("Dystopian");
    book.setYear(1949);

    
    book.displayInfo();

    return 0;
}
