# include <iostream>
using namespace std;
 
int main(){

int arr [10] = {10, 20 , 50 , 60 ,10 , 70 ,20 , 80 , 90 ,60};
int length = 10;

// remove duplicate array

for(int i = 0 ; i<length ;i++){
    for(int j = i+1 ; j<length; ){
        if( arr[i] == arr[j]){
            for(int k = j ; k<length ; k++){
                arr[k] == arr[k+1];
            }
            length --;

        }else{
            j++;
        }
    }

}
for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }





}

