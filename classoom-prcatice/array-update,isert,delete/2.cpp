# include <iostream>
using namespace std;

// update the array
// int main(){
//     // insert , delete and update array
// int arr[10]= {10 , 20 , 30 , 40 ,50};
// int index = 3;
// int value = 500;
// int size = 5 ;

// arr[index] = value;


// for(int i = 0 ; i<size ; i++){
//     cout << arr[i] << " ";
// }

// }



// insert   the array

//  int main(){
//  int arr[10] = {10 , 20 , 30 ,40 ,50};
//  int index = 3 ;
//  int value = 400;
//  int size = 5;

// for(int i = size ; i> index ; i-- ){
// arr[i] = arr[i-1];

// };
// arr[index]= value;
//size ++;

// for(int i = 0 ; i< size ; i++){
// cout << arr[i] << " ";
// }



// }


// delete the array

int main(){
    int arr[10] = {10 , 20 , 30 , 40 ,50};
    int index = 3;
    // int value = 500;
    int size = 5;

    for(int i = index ; i<size ; i++){
        arr[i] = arr[i+1];
    };

    size--;

    for(int i = 0 ; i<size ; i++){
        cout << arr[i] << " ";
    }

}