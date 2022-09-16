---
title: main.cpp

---

# main.cpp



## Namespaces

| Name           |
| -------------- |
| **[std](Namespaces/namespacestd.md)** <br>This is a brief description of the main function.  |

## Functions

|                | Name           |
| -------------- | -------------- |
| int | **[main](Files/main_8cpp.md#function-main)**() |


## Functions Documentation

### function main

```cpp
int main()
```


creating input integers and array to store elements

Store number entered by the user in the array

Loop to store largest number to arr[0]

Change < to > if you want to find the smallest element and vice versa




## Source code

```cpp


#include <iostream>
#include <MyClass.h>

using namespace std;

int main() {

  int i, n;
  float arr[20];

  cout << "Enter total number of elements(1 to 20): ";
  cin >> n;
  cout << endl;

  for(i = 0; i < n; ++i) {
    cout << "Enter Number " << i + 1 << " : ";
    cin >> arr[i];
  }

  for(i = 1;i < n; ++i) {

    if(arr[0] < arr[i])
      arr[0] = arr[i];
  }

  cout << endl << "Largest element = " << arr[0];

  return 0;
}
```


-------------------------------

Updated on 2022-09-16 at 16:11:19 +0500
