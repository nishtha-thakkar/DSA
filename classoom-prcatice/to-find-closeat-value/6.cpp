# include <iostream>
using namespace std;

// to find closeats value



int main(){
    int arr[5] = {10, 20 ,35 ,40 ,50};
    int size = 5;
    int value = 30;
    int closeValue = arr[0];

    for(int i = 0 ; i<size ; i++){

        int differences = arr[i] - value;  
        if(differences < 0 ){           
            differences = -differences;  
        }

        int closeDiff = closeValue - value;  
        if(closeDiff < 0 ){              
            closeDiff = -closeDiff; 

        if(differences < closeDiff){ 
            closeValue = arr[i];   

        }

       }
        cout << "closeat value : " << closeValue  ;



}