// example to explain the usage of structure
// (C) 2014 kmaune0
// book.cpp

#include <iostream>
#include <cstring>

using namespace std;

struct Books {
  char title[50];
  char author[50];
  char subject[100];
  int book_id;
};

int main() {
  struct Books Book1;
  struct Books Book2;

  // book 1 specification
  strcpy(Book1.title, " ");
  strcpy(Book1.author, " ");
  strcpy(Book1.subject, " ");
  Book1.book_id = 6495407;

  // book 2 specification
  strcpy(Book2.title, " ");
  strcpy(Book2.author, " ");
  strcpy(Book2.subject, " ");
  Book2.book_id = 6495700;

  // print book 1 info
  cout << "Book 1 title: " << Book1.title <<endl;
  cout << "Book 1 author: " << Book1.author <<endl;
  cout << "Book 1 subject: " << Book1.subject <<endl;
  cout << "Book 1 id: " << Book1.book_id <<endl;

  // print book 2 info
  cout << "Book 2 title: " << Book2.title <<endl;
  cout << "Book 2 author: " << Book2.author <<endl;
  cout << "Book 2 subject: " << Book2.subject <<endl;
  cout << "Book 2 id: " << Book2.book_id <<endl;

  return 0;
}
