#include <iostream>

using namespace std;

void displayArray(const int arr[], int arrSize) {
  if (arrSize > 0) {
    cout << arr[0];
    for (int i = 1; i < arrSize; ++i) {
      cout << ' ' << arr[i];
    }
  }
}

void smallestLargest(int arr[], int arrSize);
void smallestLargest(int arr[], int arrSize, int range);

void smallestLargest(int arr[], int arrSize) {
  smallestLargest(arr, arrSize, arrSize);
}

void smallestLargest(int arr[], int arrSize, int range) {
  int temp = 0;
   
  if (range == 0) {
    return;
  }
  if (arr[range - 1] < arr[0]) {
    temp = arr[0];
    arr[0] = arr[range - 1];
    arr[range - 1] = temp;
  }
  else if (arr[range - 1] > arr[arrSize - 1]) {
    temp = arr[arrSize - 1];
    arr[arrSize - 1] = arr[range - 1];
    arr[range - 1] = temp;
  }
   
  smallestLargest(arr, arrSize, range - 1);
}



int main() {
  int test0[] = { };
  int test1[] = { -1 };
  int test2[] = { -3, -2 };
  int test3[] = { 8, 4 };
  int test4[] = { 2, 5, 1 };
  int test5[] = { 8, 2, 4 };
  int test6[] = { 5, 4, 1 };
  int test7[] = { 2, 8, 4, 11, 9, 2, 1, 3, 1, 11, 4, 8 };


  cout << "Enter a test case #: ";
  int testCase;
  cin >> testCase;
  cout << endl;

  cout << "Test #" << testCase << " Output:" << endl;
  if (testCase == 0) {
    smallestLargest(test0, 0);
    cout << "smallest: none" << endl;
    cout << " largest: none" << endl;
    cout << endl;
  } else if (testCase == 1) {
    smallestLargest(test1, 1);
    cout << "smallest: " << test1[0] << endl;
    cout << " largest: " << test1[0] << endl;
    cout << endl;
  } else if (testCase == 2) {
    smallestLargest(test2, 2);
    cout << "smallest: " << test2[0] << endl;
    cout << " largest: " << test2[1] << endl;
    cout << endl;
  } else if (testCase == 3) {
    smallestLargest(test3, 2);
    cout << "smallest: " << test3[0] << endl;
    cout << " largest: " << test3[1] << endl;
    cout << endl;
  } else if (testCase == 4) {
    smallestLargest(test4, 3);
    cout << "smallest: " << test4[0] << endl;
    cout << " largest: " << test4[2] << endl;
    cout << endl;
  } else if (testCase == 5) {
    smallestLargest(test5, 3);
    cout << "smallest: " << test5[0] << endl;
    cout << " largest: " << test5[2] << endl;
    cout << endl;
  } else if (testCase == 6) {
    smallestLargest(test6, 3);
    cout << "smallest: " << test6[0] << endl;
    cout << " largest: " << test6[2] << endl;
    cout << endl;
  } else if (testCase == 7) {
    smallestLargest(test7, 12);
    cout << "smallest: " << test7[0] << endl;
    cout << " largest: " << test7[11] << endl;
    cout << endl;
  }
}
