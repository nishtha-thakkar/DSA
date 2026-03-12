# include <iostream>
using namespace std;

void quicksort(int arr[] , int left , int right){
    if(left >= right) 
    return;

    int pivot = arr[right];
    int i = left;

    for(int j = left ; j<right ; j++){
        if(arr[j] < pivot){
            swap(arr[i] , arr[j] );
            i++;
        }
    }
    swap(arr[right] , arr[i]);
    quicksort(arr , left , i-1);
    quicksort(arr , i+1 , right);


};



int main(){
    int arr[] {85, 63, 24, 2, 96, 50, 46};
    int length = sizeof(arr)/ sizeof(arr[0]);
    quicksort(arr , 0 , length-1);

    for(int i = 0 ; i<length ; i++){
        cout << arr[i] << " ";
    }

}

// dry run

// 85 63 24 2 96 50 46

// Index:

// 0   1   2   3   4   5   6
// 85 63 24 2 96 50 46
// 1️⃣ Pivot selection

// Your code says:

// int pivot = arr[right];

// First function call:

// quickSort(arr, 0, 6)

// So

// right = 6
// pivot = arr[6]
// pivot = 46

// So pivot = 46.

// 2️⃣ Starting position
// int i = left;

// Left = 0

// So

// i = 0
// 3️⃣ Loop start
// for(j = 0 ; j < 6 ; j++)

// So j goes:

// 0 1 2 3 4 5

// We compare every number with pivot 46.

// 4️⃣ Step-by-step
// j = 0
// arr[0] = 85

// Check:

// 85 < 46 ❌

// No swap.

// Array stays:

// 85 63 24 2 96 50 46
// j = 1
// arr[1] = 63

// Check:

// 63 < 46 ❌

// No swap.

// j = 2
// arr[2] = 24

// Check:

// 24 < 46 ✅

// Swap happens.

// Code:

// swap(arr[i], arr[j])

// Currently:

// i = 0
// j = 2

// So we swap:

// 85 and 24

// Array becomes:

// 24 63 85 2 96 50 46

// Then:

// i++
// i = 1
// j = 3
// arr[3] = 2

// Check:

// 2 < 46 ✅

// Swap again.

// swap(arr[1], arr[3])

// Swap:

// 63 ↔ 2

// Array becomes:

// 24 2 85 63 96 50 46

// Then:

// i = 2
// j = 4
// 96 < 46 ❌

// No swap.

// j = 5
// 50 < 46 ❌

// No swap.

// 5️⃣ Final pivot swap

// Code:

// swap(arr[right], arr[i])

// Values:

// right = 6
// i = 2

// Swap:

// 46 ↔ 85

// Array becomes:

// 24 2 46 63 96 50 85

// Now pivot 46 is in correct position.

// 24 2 |46| 63 96 50 85

// Left side = smaller
// Right side = bigger

// ✔️ Important idea

// Before pivot:

// 85 63 24 2 96 50 |46

// After partition:

// 24 2 |46| 63 96 50 85

// Pivot goes in middle.

// ✅ Final sorted array will be

// 2 24 46 50 63 85 96