# Array Header File

### How to include the header file ? 
 - Download or Clone this repo 
 - Include this header file
```c++
#include"ArrayLib/Array.h"
```
- Use the functions as per the [documentation](https://github.com/pratyaysaha/ArrayLib#documentation)

### How to use the header file ?
- Create an object of the Array class with the data type ``` (int, float, double) ```
```c++
Array<int> array;
```
- Now use the functions as [documented](https://github.com/pratyaysaha/ArrayLib#documentation)

## Documentation
- Template is used which can hold ```(int, float, double)``` data types.
- The ```size``` variable holds the size of the array.
- There is empty constructor with ```size=0``` and parameterised constructor ```Array<_data_type> objName(_size_)``` where ```size=_size_```. 
- List of functions :
    - [`void get_size()`](https://github.com/pratyaysaha/ArrayLib#user-input-size)
    - [`void inputData()`](https://github.com/pratyaysaha/ArrayLib#input-all-the-data-in-the-indices-of-the-array-all-at-a-time)
    - [`void pushData(_typename_ data, int index)`](https://github.com/pratyaysaha/ArrayLib#add-data-to-any-index-of-the-array)
    - [`void createRandom(int n=0)`](https://github.com/pratyaysaha/ArrayLib#fill-the-array-with-random-numbers-in-from-1-to-100)
    - [`void display()`](https://github.com/pratyaysaha/ArrayLib#displays-all-the-contents-of-the-array)
    - [`int length()`](https://github.com/pratyaysaha/ArrayLib#returns-the-size-of-the-array)
    - [`tp sum(int start=0,int end=-1)`](https://github.com/pratyaysaha/ArrayLib#returns-the-sum-of-the-data-of-the-array)
    - [`tp mul(int start=0, int end=-1)`](https://github.com/pratyaysaha/ArrayLib#returns-the-product-of-the-data-of-the-array)
- #### User input size
```c++
void get_size()
```
No parameters 

Takes user input size of the array. 

Example :
```c++
objName.get_size();
```
- #### Input all the data in the indices of the array all at a time
```c++
void inputData()
```
No parameters

Input all the data in all the indices of the array all at a time

Example :
```c++
objName.inputData();
```
- #### Add data to any index of the array
```c++
void pushData(_typename_ data, int index)
```

 Parameters:
    - `data`  : The data to be updated
    - `index` : The index at which the data to be updated

It is used to add the data/contents of a particular index.  

Example:
```c++
objName.pushData(100,1);
```
- #### Fill the array with random numbers in from `1 to 100`
```c++
void createRandom(int n=0)
```
- Parameters:
    - `n` : It is the size of the array. *Here if no parameter is provided that means the existing size of the array to be provided. If parameter is provided then the existing array size will overwrite to the given parameter.* 

It is used to get random values into the array.
<br/>
*NOTE : THIS FUNCTIONS WORKS ONLY WITH `int` DATA TYPE of ARRAY*

Example:

- `objName.createRandom();` : will create random numbers filled array with size of `objName` array.
- `objName.createRandom(4);`: will override size of `objName` array to the provided size.
- #### Displays all the contents of the array
```c++
void display()
```
Examples:
```c++
objName.display();
```
- #### Returns the size of the array
```c++
int length()
```
- #### Returns the sum of the data of the array
```c++
tp sum(int start=0,int end=-1)
```
- #### Returns the product of the data of the array
```c++
tp mul(int start=0, int end=-1)
```



