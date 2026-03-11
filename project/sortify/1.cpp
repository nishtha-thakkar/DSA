# include <iostream>
using namespace std;

void ascen(int arr[] , int size){
    for(int i = 0 ; i<size-1 ;i++){
        for(int j = 0 ; j<size-i-1 ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }

    }
}

void decen(int arr[] , int size){
    for(int i = 0 ; i<size-1 ;i++){
        for(int j = 0 ; j<size-i-1 ; j++){
            if(arr[j] < arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }

    }
}



int main(){
// que-1 - remove duplicate/twins array
cout << " \nQue-1 remove twins : " << endl;


int arr[10] = {10 ,20 , 30 ,10 , 40 , 20 , 50 ,30 , 70 ,40};
int length = 10 ;

for(int i = 0 ; i <length ; i++){
    for(int j = i+1; j<length ; ){
        if (arr[i ]== arr[j]){
            for(int k = j ; k<length ; k++){
                arr[k]= arr[k+1];

            }
            length--;
        }else{
            j++;
        }
    }
}
for(int i = 0 ; i<length ; i++ ){
    cout << arr[i] << " ";
}

cout << "\n--------------------------";

cout << "\nque-2 : " ;
// que-2  to find largest and second largest element


int arr2[5] = {10, 45, 30, 45, 20};
int largest = arr2[0];
int second;

for(int i = 0; i < 5; i++)
{
    if(arr2[i] > largest)
    {
        largest = arr2[i];
    }
}

second = arr2[0];
for(int i = 0; i < 5; i++)
{
    if(arr2[i] > second && arr2[i] < largest)
    {
        second = arr2[i];
    }
}
cout << "\nLargest = " << largest << endl;
cout << "Second Largest = " << second;

cout << "\n--------------------------";
cout << " \nQue-3 :" ;

// que-3 - ascending and decending

// ascending

int arr5[5] = {10,5 , 50 , 40 , 20};
int length2 = sizeof(arr5)/sizeof(arr5[0]);

ascen(arr5 , length2);


cout << "\nascending order : ";
for(int i = 0 ; i<length2 ; i++){
    cout << arr5[i] << " ";
}

decen(arr5 , length2);
cout << "\ndecending order : ";
for(int i = 0 ; i<length2 ; i++){
    cout  << arr5[i] << " ";
}





    
    
cout << "\n--------------------------";
cout << "\nQue-4 :";


cout << "Que-4 - count positive and negative value" ;

int arr3[5] = {10 , 20 ,-30 ,-40 , 60}; int size = 5;
int positive = 0;
int negative = 0;
for(int i  = 0 ; i<size ;i++){
    if(arr3[i] >0 ){
    positive++;
    }else if (arr3[i] < 0){
        negative++;
    }
}
    
        
    

cout << "\npositive no : " << positive << endl;
cout << "negative no : " << negative <<endl;

    
    
cout << "--------------------------";
cout << "\nQue-5  odd and even value : " << endl ;

// // que-5 - odd and even value

int arr4 [5] = {10 , 5 , 30 , 3 , 7};
int size2 = sizeof(arr4)/ sizeof(arr4[0]);
int evenVal[5];
int j = 0;
int oddVal[5];
int k = 0;

for(int i = 0 ; i<size2 ; i++){
    if(arr4[i] % 2 == 0 ){
        evenVal[j] = arr4[i];
        j++;
    }else{
        oddVal[k] = arr4[i];
        k++;
    }
}
 cout << "Even value :" <<endl ;
for(int i = 0 ; i<j ; i++){
    cout << evenVal[i] << " " <<endl;
}
cout << "Odd value :" <<endl ;
for(int i = 0 ; i<k ; i++){
    cout << oddVal[i] << " " <<endl;
}










 }