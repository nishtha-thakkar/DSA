# include <iostream>
using namespace std;

void selection(int arr[], int size){
    for(int i = 0 ; i<size ; i++){
        int minIndex =i;
        for(int i = i+1 ; j<size ; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }

        }
        swap(arr[i] , arr[minIndex]);
    }
};

int main(){
    int arr[]= {85 ,63 , 24 , 2, 96 , 50 ,46};
    int length = sizeof (arr) / sizeof(arr[0]);
    selection(arr , length);

    for(int i = 0 ; i<length ; i++){
        cout << arr[i] << " ";

    }

}