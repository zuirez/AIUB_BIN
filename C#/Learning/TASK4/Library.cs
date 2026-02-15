using System;
using TASK4;

public class Library
{
    private string libName;
    private string libAddress;
    private Book[] listOfBook;
    private int totalBook;

    // Properties
    public string LibName 
    { 
        get => libName; 
        set => libName = value; 
    }
    public string LibAddress 
    { 
        get => libAddress; 
        set => libAddress = value; 
    }
    public Book[] ListOfBook 
    { 
        get => listOfBook; 
        set => listOfBook = value; 
    }
    public int TotalBook { get => totalBook; set => totalBook = value; }

    // Constructors
    public Library()
    {
        listOfBook = new Book[100];
        totalBook = 0;
    }
    public Library(string name, string address)
    {
        this.libName = name;
        this.libAddress = address;
        listOfBook = new Book[100];
        totalBook = 0;
    }

    // Methods
    public void ShowLibInfo()
    {
        Console.WriteLine($"Library: {libName}, Address: {libAddress}, Total Books: {totalBook}");
        for (int i = 0; i < totalBook; i++)
        {
            listOfBook[i].ShowInfo();
        }
    }

    public void AddNewBook(Book book)
    {
        listOfBook[totalBook++] = book;
        Console.WriteLine("Book added to library.");
    }

    public void DeleteBook(Book book)
    {
        for (int i = 0; i < totalBook; i++)
        {
            if (listOfBook[i] == book)
            {
                for (int j = i; j < totalBook - 1; j++)
                    listOfBook[j] = listOfBook[j + 1];
                totalBook--;
                Console.WriteLine("Book deleted from library.");
                return;
            }
        }
    }

    public void AddNewBookCopy(Book book, int copy)
    {
        book.AddBookCopy(copy);
    }
}