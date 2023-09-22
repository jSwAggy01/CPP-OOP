#include <iostream>
#include "minFunc.h"
const int * min(const int arr[], int arrSize) {
    if (arrSize == 1) {
        return arr;
    }
    if (arr == nullptr) {
        return nullptr;
    }

    const int *tempLoc = min(arr + 1, arrSize - 1);

    if (*arr < *tempLoc) {
        return arr;
    }

    return tempLoc;
}