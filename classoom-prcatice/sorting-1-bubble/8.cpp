# include <iostream>
using namespace std;

void bubbleSort(int arr[] , int size ){

    for(int i =0 ; i<size-1 ; i++){
        for(int j = 0 ; j<size-i-1 ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);

                // int temp = arr[j];
                //arr[j] = arr[j+1];
                // arr[j+1] = temp
            }
        }
    }
    // 10, 5 , 45 , 65, 15 ,70     i = 0
    // 5 , 10 , 45 , 15 ,65 ,70      i= 1
    // 5, 10 , 15 , 45 , 65 , 70     i = 2 
    // 5 , 10 ,15 ,45 ,65 ,70        i= 3


}

int main(){
int arr[6] = {10 , 65 , 5 , 45 , 70 , 15}; // 5,10,15,45,65,70
int length = sizeof(arr) / sizeof(arr[0]);  // 6*4/4  = 24/4 = 6

bubbleSort(arr , length);

for(int i = 0 ; i<length ; i++){
    cout << arr[i]  << " ";


}




}