# include <iostream>
using namespace std;

void merge(int arr[] , int left , int mid ,int right){
    int temp[20];
    int i = left , j = mid+1 , k=   left;


    while(i<=mid && j <= right){
        if(arr[i] < arr[j]){
            temp[k++] = arr[i++];

        }else{
            temp[k++]= arr[j++];
        }
    }

    while(i<=mid){
        temp[k++]= arr[i++];
    }
    while(j<=right){
        temp[k++]= arr[j++];
    }
    for(int q=left ; q<=right ; q++){
        arr[q]=temp[q];
    }
};

void mergesort(int arr[] , int left , int right){
    if(left >=right)
    return;

    int mid = (left + right ) / 2;
    mergesort(arr, left ,mid);  
    mergesort(arr , mid+1 , right);
    merge(arr ,left ,mid ,right);



    
};

int main(){
    int arr[] = { 50 , 55 , 64 ,12 , 8 ,4};
    int length = sizeof (arr)/ sizeof(arr[0]);

    mergesort(arr , 0 ,length-1);

    for(int i = 0 ;i<length ; i++){
        cout << arr[i] << " ";
    }
}

