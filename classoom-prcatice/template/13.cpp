# include <iostream>
using namespace std;



// using of template instade of data type like int,float ,char , double


template <typename T >

// void show( T a){
//     cout << " A : " << a ;
// }

// int main(){
//     show(10);
// }




// 


// T  sum( T a , T b){
//     return a+b;
// }

// int main(){
//   cout << " sum : "  << sum(10 ,15);
// }


class Employee{
    public:
    int id;

    void setData( T x){
        id = x;


    };
    void getData(){
        cout << "id :" << id;
    }
};

int main(){
    Employee <int> r;
    r.setData(20);
    r.getData();

}