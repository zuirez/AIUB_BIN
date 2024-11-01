# Data Structure

## Topics :

1. [Array](#array)
   
2. [Pointer](#pointer)

<br><br>

# Array

### Index : 
- [Introduction](#1-introduction-to-array)
- [Operations on array](#2-operations-on-array)
  1. [Searching](#searching)
  2. [Insertion](#insertion)
  3. [Deletion](#deletion)

- [2D Array](#3-2d-array)


<br>

[Back to top](#top)

<br>

### **1. Introduction to array**
___

### # What is an array?

>An **array** can hold a series of elements of the **same type** placed in **contiguous
memory locations.**

<br>

**Key points :**
- Arrays are blocks of
**non-dynamic memory** whose size must be determined before execution.

- Declaring a regular array within a local scope (within a function) its elements **will not be initialized to any value by default,** so the contents can be unpredictable (garbage values).

- The elements of
**global and static** arrays are automatically initialized with their default values, **zeros.**

- An array can also be partially initialized. <br>
  ```cpp
  int mimo[5] = { 16, 2}; // rest of the index will be initialized by 0
  ```
- char vowel[6] = {'a', 'e', 'i', 'o', 'u', ‘\0'};<br>
is equivalent to string declaration: <br>char vowel[6] = "aeiou";

<br>

[Back to index](#array)

<br>

### **2. Operations on array** 
___


### # Searching :

```cpp
int mimo[10] = {32,4,5,12,15,54,6,23,3,55};

int n;

cout<<"Enter the number you want to search: "<<endl;

cin>>n;

for(int i=0; i<10; i++)
{
    if(n == mimo[i])
    {
        cout<<"The number "<<n<< " is found in index "<<i<<"of the array."<<endl;
        break;
    }
}
```
<br>

### # Insertion :

```CPP
int k, i, n=5, mimo[10]={2, 3, 5, 6, 7}; //partial initialization; n=total elements
    
mimo[n++] = 8; // insert value 8 at the array; increase n; n=6
    


/* insert value 1 at the beginning of array */
    
for(i=n; i>0; i--) //shift all the values one index forward.
{
    mimo[i] = mimo[i-1];
}
    
mimo[0] = 1; //1 is inserted at index 1
    
n++; // n increases; n=7
    


// insert value 4 in the middle (index k=3) of the array
    
k = 3;
    
for(i=n; i>k; i--) //shift all the values one index forward.
{
    mimo[i] = mimo[i-1];
}
    
mimo[k] = 4; //4 is inserted at index k;
n++; //n increases; n=8
    
for(i=0; i<n; i++) //printing all the values in the array after insert
    
cout << mimo[i]<<" "; 
```

<br>

### # Deletion :

```cpp

int k, i, n=8, mimo[10]={1, 2, 3, 4, 5, 6, 7, 8}; //n=total elements.
    
n--; // Deleting the last element of the array. Decrease n; last element 8 is no longer part of list.
    
    

/* delete value 1 from the beginning of array. */

n--; // deleting the value 1 will decrease the total elements n by one.
    
    
for(i=0; i<n; i++)  //shift all the values one index backward.
{
    mimo[i] = mimo[i+1];
}
    
k = 2; // delete value 4 from the middle (index k=2) of the array
    
n--;         // deleting the value 4 will decrease the total elements n by one.
    
for(i=k; i<n; i++) //shift all the values one index forward. i.e. the value
{
    mimo[i] = mimo[i+1];
}
    
for(i=0; i<n; i++) //printing all the values in the array after insert
    
cout<<mimo[i]<<" ";
```
<br>

[Back to index](#array)

<br>


### **3. 2D Array**
___

<br> 

>A 2D array has 2 dimentions : 
- Row
- column

### # Initialization 

```cpp
int minu[3][5] = {1,2,3,4,5,2,4,6,8,10,3,6,9,12,15};

int minu[3][5] = {{1,2,3,4,5},{2,4,6,8,10},{3,6,9,12,15}};

int minu[3][5] = {
                    {1,2,3,4,5},
                    {2,4,6,8,10},
                    {3,6,9,12,15}
                };
```
<br>

**Key points**
- **The internal braces are unnecessary**, but helps to distinguish the rows from the
columns. 

- **Semicolon at the end of the curly brace** which closes the
assignment. 

- If there are not enough elements in the curly braces to account for every single element in an array, the remaining elements will be filled out with **garbage/zeros.** 

- **Static and global variables are always guaranteed to be initialized to zero anyway, whereas auto or local variables are guaranteed to be garbage**

<br>

>[!NOTE]
>Formula to access an element : <br>
**{(Total_column) * (row_index) + (column_index)}**
> - The counting starts from 0

<br>

### # Memory access 

>**The name of an array always refer to the starting location of the array. i.e. the first element of the array. So, mimo = &mimo[0].**

<br>

>1D array :
```cpp
int mimo[5] = {1,2,3,4,5};
```
Let's assume, the starting address of this array is 100

So, mimo / mimo[0] address is 100

Now, to get the address of any element of this array we can use this formula : 

**&array[index] = start_location_array + index * size_of_data** <br>

=> &mimo[2] = 100 + 2 * 4 \
=> &mimo[2] = 100 + 8 \
=> &mimo[2] 108 

<br>

>2D array :

**&array[i][j] = start_location + {i * (Column * size_of_data)} + (j * size_of_data)** <br>

=> &mimo[1][1] = 100 + {1 * (3 * 4)} + (1 * 4) \
=> &mimo[1][1] = 100 + 12 + 4 \
=> &mimo[1][1] = 116


[Back to index](#array)

<br>
<br>



# Pointer

### Index :
- [Introduction](#1-introduction-to-pointer)
- [Pointer with Array](#2-pointer-with-array)
- [Pointer with Function](#3-pointer-with-function)

<br>

[Back to top](#top)

<br>

### **1. Introduction to pointer**
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


    //Storing the address of a in a pointer
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

[Back to index](#pointer)

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

[Back to index](#pointer)

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
<br>

### # Passing arguments by value and by address 

```cpp
#include <iostream>
using namespace std;

void swap(int *a, int *b) //a,b points to &num1,&num2 respectively
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int num1=5,num2=10;

    cout<<"Before swap : "<<endl;
    cout<<"Number1 = "<<num1<<endl;
    cout<<"Number2 = "<<num2<<endl;

    swap(&num1,&num2); // address of num1, num2 is passed
    
    cout<<"After swap : "<<endl;
    cout<<"Number1 = "<<num1<<endl;
    cout<<"Number2 = "<<num2;
}
```
<br>

**Output :**
```
Before swap : 
Number1 = 5
Number2 = 10

After swap :
Number1 = 10
Number2 = 5
```
>[!TIP]
When we pass arguments to a function **by value**, the called function only gets a copy of the variables, and there is **no way to modify the original variables** in the calling function.<br><br>
When we pass pointers as arguments (passing by reference or address), the called function **can access and modify the actual variables** in the calling function. <br><br>
Here we passed the **address** of the variables in the function. And the function swap the numbers and updated the variables instead of created another variable to store the swapped value. 

<br>

### **4.Dynamic Memory Allocation**
___

### # What is static memory allocation ?

>**Static memory** refers to memory that is allocated during the **compile time** of a program.

><br>
>The characteristics of static memory allocation : 
>
>1. Memory is allocated at compile time.
>
>2. The memory remains allocated throughout the program's >execution and is **automatically freed** when the program terminates.
>
>3. The size of the allocated memory must be known at compile time and cannot be changed during runtime.<br><br>

<br>

### # What is dynamic memory allocation ?

>**Dynamic memory** refers to memory that is allocated at **runtime** based on the program's needs.

><br>
>The characteristics of dynamic memory allocation : 
>
>1. Memory is allocated during runtime.
>
>2. The memory remains allocated until it is **explicitly freed** by the programmer (using free() in C or delete).
>
>3. Dynamic memory allocation allows a program to obtain more memory space, while running or to release space when no space is >required. <br><br>

<br>

### # Dynamic Memory Allocation: Operators new And new[]

>In order to create dynamic memory we use the operator **new**

```cpp
int *name = new int; // is used to allocate memory to contain one single element of type int

int *names = new int[10]; // is used to assign a block (an array) of elements of type int
```
<br>

### # Dynamic Memory Allocation: Operators delete And delete[]

>Since the necessity of dynamic memory is usually limited to specific moments within a program, once it is no longer needed it should be freed so that the memory becomes available again for other requests of dynamic memory. This is the purpose of the operator **delete**

```cpp
delete name; // used to delete memory allocated for a single element

delete [] names; // used to delete memory allocated for a block of elements (an array)
```
<br>

**Example of dynamic memory allocation :**
```cpp
#include <iostream>
using namespace std;

int main()
{
    int n, i,*ptr, sum=0;
    cout << "Number of elements : ";
    cin >> n;

    ptr = new (nothrow) int[n]; // nothrow ensures that the new operator returns nullptr (instead of throwing an exception) if it fails to allocate memory.

    if(ptr==NULL) //ptr==0
    { 
        cout << "Error! not allocated.";
        return 1;
    }

    cout << "Enter elements:\n";
 
    for(i=0;i<n;++i)
    {
        cin >> *(ptr+i); //ptr[i]
        sum += *(ptr+i);
    }
 
    cout << "Sum = " << sum;
    
    delete [] (ptr); //memory de-allocated
}
```
<br>

### # Size difference between static and dynamic 

```cpp
int arr[50];
```
>[!TIP]
>The array is type of int and has 50 elements. So the total size >of this array is, <br><br>
>50 x 4 = 200 byte<br><br>
>And this 200 byte is stored in **stack memory**.

```cpp
int *arr = new int[50];
```
>[!TIP]
>The array is created using new keyword. Which means this array is is using dynamic memory. Here the size of the array is,<br><br>
>50 x 4 = 200 byte <br><br>
>this 200 byte is stored in **Heap memory**. But this array is located to a pointer which took 8 byte of space in **stack memory.**<br><br>
>So, the total memory used is 200+8= **208 byte** 


<br>

[Back to index](#pointer)

<br>
