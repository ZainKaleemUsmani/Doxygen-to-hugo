/// This is a brief description of the main function.
///
///Along with a detailed description here

#include <iostream>
#include <MyClass.h>


using namespace std;

int main() {

  /// creating input integers and array to store elements
  ///  
  int i, n;
  float arr[20];

  cout << "Enter total number of elements(1 to 20): ";
  cin >> n;
  cout << endl;

  /// Store number entered by the user in the array
  ///
  for(i = 0; i < n; ++i) {
    cout << "Enter Number " << i + 1 << " : ";
    cin >> arr[i];
  }

  /// Loop to store largest number to arr[0]
  for(i = 1;i < n; ++i) {

    /// @note Change < to > if you want to find the smallest element and vice versa
    if(arr[0] < arr[i])
      arr[0] = arr[i];
  }

  cout << endl << "Largest element = " << arr[0];

  return 0;
}
