# include <iostream>
using namespace std;

int main(){
    // to find even and odd number
    int arr[5]= {10 , 15 , 30 , 40 ,50};

    // int neg = 0 , pos = 0;
    int evenVal[5];
    int j= 0;
    int oddVal[5];
    int k = 0;
     
    
    for(int i = 0 ; i<5 ; i++){
        if( arr[i] % 2 == 0){
            //pos++;
            evenVal[j]= arr[i];
            j++;
        }else{
            oddVal[k]= arr[i];
            k++;
            
        }
    };
    // cout << "pos value : " << pos << endl;
    // cout << "neg value : "  << neg << endl;

    cout << "Even value : " << endl;
    for(int i =0 ; i<j ; i++){
        cout << evenVal[i] << " " << endl;
    }

    cout << "Odd value : " << endl;
    for(int i =0 ; i<k ; i++){
        cout << oddVal[i] << " " ;
    }
}









