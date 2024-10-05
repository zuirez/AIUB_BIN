# Data Structure

## Topics :

1. [Array](#array)
   - [1D Array](#1d-array)
   - [2D Array](#2d-array)
   
2. [Pointer](#pointer)

## Array


## Pointer

### Index :
- [Introduction](#1-introduction)
- [Pointer with Array](#2-pointer-with-array)
- [Pointer with Function](#3-pointer-with-function)

### **1. Introduction**
___

### # What is a pointer?

>A **Pointer** is a variable that stores the memory address of another variable.

<br>

```cpp
#include <iostream>
using namespace std;

int main()
{
    int a=5; 
    
    //Printing the value of a 
    cout<<"Value of a : "<<a<<endl;

    //Printing the address of a
    cout<<"Address of a : "<<&a<<endl;


    //Storing the value of a in a pointer
    int *ptr = &a;


    //Printing the value of a using pointer
    cout<<"Value of a using pointer : "<<*ptr<<endl;

    //Printing the address of a using pointer
    cout<<"Address of a using pointer : "<<ptr;
}
```

<br>

**Output :**
```
Value of a : 5
Address of a : 0x61ff08
Value of a using pointer : 5
Address of a using pointer : 0x61ff08
```
<br>

>[!IMPORTANT]
**The data type of a pointer depends on the variable whose address we are storing in pointer.**<br><br>
In the example, we are storing the address of variable **'a'** in pointer. **'a'** is a variable of type **int**. So the pointer which will store the address of **'a'** have to be **int** as well.

<br>

### # Size of a pointer?

><br>The size of a pointer depends on the **architecture of the system.**<br><br>
On a 32-bit architecture, pointers are typically 4 bytes in size. This is because 32 bits (or 4 bytes) can address up to 4 GB of memory.<br><br>
On a 64-bit architecture, pointers are generally 8 bytes.
<br><br>

<br>

**Size of a pointer :**

```cpp
//Size of int
cout<<"Size of int a : "<<sizeof(a)<<endl;

//Size of pointer
cout<<"Size of pointer : "<<sizeof(ptr)<<endl;
```
<br>

**Output :**
```
Size of int a : 4
Size of pointer : 8
```
<br>

### # Copying a pointer

```cpp
#include <iostream>
using namespace std;

int main()
{
    int a=5; 

    //Storing the value of a in a pointer
    int *ptr = &a;

    //copying ptr to q pointer
    int *q = ptr;

    cout<<"Value of a : "<<*q<<endl;

    cout<<"Address of a : "<<q<<endl;
}
```
<br>

**Output :**
```
Value of a : 5
Address of a : 0x5b07bff97c
```
<br>

>[!IMPORTANT]
If we try to increment the address of a pointer by 1, the address dosen't increment by 1. **The address actually increments by the size of the variable.**

<br>

### # Void pointer

>A void pointer is a special type of pointer that can point to any value **which does not have a specific data type.**

<br>

**Key Points:**<br>
- A void pointer does not know what type of data it points to.
  
- It can hold the address of any variable, regardless of its type.
  
- However, because it doesn’t have a type, we cannot directly dereference it or perform pointer arithmetic **until we typecast it to the appropriate pointer type.**

<br>

**An example of void pointer :**
```cpp
#include <iostream>
using namespace std;

void increase(void *data, int size)
{
    if ( size == sizeof(char) )
    {
        char *pchar;
        pchar=(char*)data;
        ++(*pchar);
    }

    else if (size == sizeof(int))
    {
        int *pint;
        pint=(int*)data;
        ++(*pint);
    }
}

int main()
{
    char a = 'x';
    int b = 1602;

    cout <<"Before increment : "<< a << ", " << b << endl;

    increase (&a,sizeof(a));
    increase (&b,sizeof(b));

    cout <<"After increment : "<< a << ", " << b << endl;
}
```

<br>

**Output :**
```
Before increment : x, 1602
After increment : y, 1603
```
<br>

**Explanation :**


``` cpp
#Main Function

Variables:

char a = 'x'; // A char variable a is initialized with the character 'x'.

int b = 1602; // An int variable b is initialized with the value 1602.


Calling the increase function:

increase(&a, sizeof(a)); // The address of a (char) is passed to the increase function along with the size of a (1 byte).

increase(&b, sizeof(b)); // The address of b (int) is passed to the increase function along with the size of b (4 bytes).



#Increase Function

Function parameter :

void increase(void *data, int size) //This function takes two arguments

void *data // A pointer to some data. Since it's a void*, it can point to any data type (char, int, etc.).

int size // The size of the data being passed (the size of char or int).

(void *) // Void pointer is used as we don't know the type of the data we're passing. Here, the size of the data (size) will help the function determine whether the data is a char or an int.


Inside if_else :

if (size == sizeof(char)) // The function checks if the size of the data is equal to the size of a char. The size of char is always 1 byte.

char *pchar; // A pointer of type char is declared to hold the address of the char data.

pchar = (char*)data; // The void* pointer data is type-cast to a char* pointer because the function knows the data is of type char based on its size.

++(*pchar); // This increments the value at the memory address pchar points to. The *pchar dereferences the pointer to access the actual value, and ++ increments it.



else if (size == sizeof(int)) // If the size of the data is equal to the size of an int, this block executes. The size of int is usually 4 bytes.

int *pint; // A pointer of type int is declared to hold the address of the int data.

pint = (int*)data; // The void* pointer data is type-cast to an int* pointer because the function knows the data is of type int based on its size.

++(*pint); // This increments the value at the memory address pint points to. The *pint dereferences the pointer to access the actual int value, and ++ increments it.

```
<br>

### # Null pointer

>A null pointer is a pointer that does not point to any valid memory location. It is used to indicate that the pointer is not currently assigned a value or memory address.

```cpp
int * p;
p = 0; // we can also write, p = NULL;

       //p has a null pointer value
```

<br>

### **2. Pointer with Array** 
___


### # Address of the first block of an Array :

```cpp
#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {10,11,12,13,14,15,16,17,18,19};

    cout<<"Address of first memory block of array : "<<arr<<endl;

    cout<<"Address of first memory block of array : "<<&arr[0]<<endl;
}
```

>Here the arr is pointing towards the address of the starting index

<br>

**Output :**
```
Address of first memory block of array : 0xdf1ebffb70
Address of first memory block of array : 0xdf1ebffb70
```
<br>

### # Increment

```cpp
#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {10,11,12,13,14,15,16,17,18,19};

    //incrementing value
    cout<<"Value before increment : "<<*arr<<endl;
    cout<<"Value after increment : "<<*arr+1<<endl;

    //incrementing address
    cout<<"Address before increment : "<<&arr[0]<<endl;
    cout<<"Address after increment : "<<&arr[0]+1<<endl;
}
```
<br>

**Output :**
```
Value before increment : 10
Value after increment : 11

Address before increment : 0x9c3e7ffd60
Address after increment : 0x9c3e7ffd64
```
<br>

>[!NOTE]
Here I incremented the address by 1 **but in the output the address is incremented by 4 instead of 1**<br><br>
This is because the first int took 4 byte space in memory, so incrementing the address by 1 is the same value. So instead of incrementing by 1 the address took us to the next memory block where another value is stored, which is 4 byte ahead.

<br>

>[!CAUTION]
WE CAN'T INCREMENT THE arr LIKE THIS : <Br><br>
arr = arr+1;<br><br>
This will give error. **Beacuse the starting index cannot be changed**. This line is **trying to change the memory address of the array** where the pointer increment is trying to move to the next momory location or momory block.

<br>

### # How Array access the elements?

```cpp
#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {10,11,12,13,14,15,16,17,18,19};

    //Accessing the value at index 2
    cout<<"Value at index 2 : "<<arr[2]<<endl;
    cout<<"Value at index 2  : "<<*arr+2<<endl;
}
```
**Output :**
```
Value at index 2 : 12
Value at index 2  : 12
```
<br>

>[!IMPORTANT]
The 2nd methode shows how the value at index 2 is actually being extracted. When we type arr[2], in the background the compailer takes the starting address of the array and adds 2 with it and then extract the value at that index and prints it. <br>
>><br>arr [2] = *arr+2<br><br>

<br>

>[!CAUTION]
>```cpp
>#include <iostream>
>using namespace std;
>
>int main()
>{
>    int arr[10] = {10,11,12,13,14,15,16,17,18,19};
>
>    cout<<"Value at index 2 : "<<2[arr]<<endl;
>
>    //equivalent statement
>    cout<<"Value at index 2  : "<<*arr+2<<endl;
>}
>```
>**Writing 2[arr] won't give error**

<br>

### # Character Array
```cpp
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};
    char ch[7] = "Rashed";

    cout<<"Printing arr : "<<arr<<endl;
    cout<<"Printing ch : "<<ch<<endl;
}
```
<br>

**Output :**
```
Printing arr : 0x9ea4fff940
Printing ch : Rashed
```

The cout works differently with character array. When We try to print arr, the address of first memory block is printed. But when we try to print the ch, we get the full string as output not the momory address.

<br>

### **3. Pointer with Function** 
___

### # Implementation

```cpp
#include <iostream>
using namespace std;

void print(int *p)
{
    cout<<"Printing the value of a : "<< *p <<endl;
}

int main()
{
    int a = 5;
    int *p = &a;

    print(p);
}
```
<br>

**Output :**
```
Printing the value of a : 5
```