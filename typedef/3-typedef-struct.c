#include <stdio.h>
#include <string.h>

typedef struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
} Book;

int main(void)
{
	Book book;

	strcpy(book.title, "Computer programing");
	strcpy(book.author, "Rungene");
	strcpy(book.subject, "Pointers");
	book.book_id = 2358;

	printf("Book title: %s, Book author %s, Book Subject%s, Book id%d\n", book.title, book.author, book.subject, book.book_id);

	return(0);
}
