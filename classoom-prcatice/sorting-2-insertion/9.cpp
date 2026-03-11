# include <iostream>
using namespace std;

void insertion(int arr[], int size){

    for(int i = 0 ; i<size ; i++){
        int ele = arr[i];
        int j = i-1;

        while(j>=0 && arr[j] >ele){
            arr[j+1] = arr[j];
            j--;

        };
        arr[j+1] = ele;

    }
}


int main(){
    int arr [5]={2 ,  5 , 60 ,10 , 70 };
    int length = sizeof(arr)/sizeof(arr[0]);

    insertion(arr , length);

    for(int i =0 ; i<length ; i++){
        cout <<  arr[i] << " ";
    }
}