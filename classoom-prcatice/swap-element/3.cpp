# include <iostream>
using namespace std;

int main(){
    int arr[10]= {10 , 20 , 30 , 40 , 50 , 60 , 70 , 80 , 90 ,100};
    int length = 10;

    cout << "original array : " ;

    for(int i = 0 ; i<length ; i++){
        cout << arr[i] << " " ;
    }

    cout << "\nswap array :    " ;
    for(int i = 0 ; i < length / 2 ; i++ ){   // 10/2 = 5 ,first 5 element use
        int temp = arr[i];       // value store in temp
        arr[i] = arr[length - i - 1]; // arr[10 - 0 - 1] =9  to store the element in 9 th index and assign in arr[i]
        arr[length - i - 1] = temp;   //  to store first value in last

    }

    for(int i =0 ; i<length ; i++){
        cout << arr[i] << " ";      
    }
}