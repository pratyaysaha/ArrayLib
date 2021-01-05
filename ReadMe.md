## Array Class with some function

### How to include the header file ? 
 - Download or Clone this repo 
 - Include this header file
```c++
#include"ArrayLib/Array.h"
```
- Use the functions as per the documentation

### How to use the header file ?
- Create an object of the Array class with the data type ``` (int, float, double) ```
```c++
Array<int> array;
```
- Now use the functions as documented

### Documentation
- Template is used which can hold ```(int, float, double)``` data types.
- The ```size``` variable holds the size of the array.
- There is empty constructor with ```size=0``` and parameterised constructor ```Array<_data_type> objName(_size_)``` where ```size=_size_```. 
- User input size
```c++
void get_size()
```
No parameters 

Takes user input size of the array. 

Example :
```c++
objName.get_size()
```



