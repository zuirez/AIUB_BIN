using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TASK4
{
    internal class Book
    {
        private string bookName;
        private string bookAuthor;
        private string bookid;
        private string bookType;
        private int bookCopy;
        public static int bookCounter = 0;

        public Book()
        {
            Console.WriteLine("Empty constructor called.");
        }

        public Book(string bookName, string bookAuthor, string bookid, string bookType, int bookCopy)
        {
            this.bookName = bookName;
            this.bookAuthor = bookAuthor;
            this.bookid = bookid;
            this.bookType = bookType;
            this.bookCopy = bookCopy;
            bookCounter++;
        }

        public string BookName
        {
            get { return bookName; }
            set { bookName = value; }
        }

        public string BookAuthor
        {
            get { return bookAuthor; }
            set { bookAuthor = value; }
        }

        public string BookId
        {
            get { return bookid; }
            set { bookid = value; }
        }

        public string BookType
        {
            get { return bookType; }
            set { bookType = value; }
        }

        public int BookCopy
        {
            get { return bookCopy; }
            set { bookCopy = value; }
        }

        public void AddBookCopy(int x)
        {
            if (x > 0)
            {
                bookCopy += x;
                Console.WriteLine("Added book copies: " + x);
            }
            else
            {
                Console.WriteLine("Invalid amount to add.");
            }
        }

        public static void showTotalBookInfo()
        {
            Console.WriteLine("Total number of books: " + bookCounter);
        }

        public void ShowBookInfo()
        {
            Console.WriteLine("Book Name: " + bookName);
            Console.WriteLine("Book Author: " + bookAuthor);
            Console.WriteLine("Book ID: " + bookid);
            Console.WriteLine("Book Type: " + bookType);
            Console.WriteLine("Book Copy: " + bookCopy);
        }
    }
}
