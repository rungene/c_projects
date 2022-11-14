#include<stdio.h>
#include <string.h>

/**
* struct Books - Books struct
* @title: Title
* @author: Author
* @subject: Subject
* @book_id: Book Id
*/
typedef struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
} Book;

/**
* main - runs other functions
*
* Return: 0 Always on success
*/
int main(void)
{
	Book book;

	strcpy(book.title, "C Programing");
	strcpy(book.author, "Rungene Samuel");
	strcpy(book.subject, "C Programing Tutorial");
	book.book_id = 12670;

	printf("Book title : %s\n", book.title);
	printf("Book author : %s\n", book.author);
	printf("Book subject : %s\n", book.subject);
	printf("Book book_id : %d\n", book.book_id);
	return (0);
}

