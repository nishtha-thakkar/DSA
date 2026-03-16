# include <iostream>
using namespace std;
# include <vector>


template <class T>
class Student{
    private:
    T id ;
    string name;

    public:
    T stdid = id;
    string stdname = name;

    void addstudent(){
        cout << "Enter your id :  " ;
        cin >> stdid;

        cout << "Enter your name : ";
        cin >> stdname ;
    }

    void displaystudent(){
        cout << "student id : " << stdid << endl;
        cout << "student name : " << stdname << endl;
    }
};

int main(){
    vector <Student<int>> student;
    int choice;

    do{
        cout << "--------- Student Management System ---------" <<endl;
        cout << "1. Add student details " << endl;
        cout << "2. Display student details " << endl;
        cout << "3. Search student details " << endl;
        cout << "4. Remove student details " << endl;
        cout << "5. Exit " << endl;

        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice){
            case 1 :{
                Student<int>s;
                s.addstudent();
                student.push_back(s);

                cout << " Student added successfully ! " << endl;
                break;
}

            case 2 :{
                if(student.empty()){
                    cout << " Student detail is not available " << endl;
                }else{
                    for(int i = 0 ;i<student.size() ; i++){
                        student[i].displaystudent();
                    }
                }
                break;
} 

            case 3 :{
                int studentid;
                cout << " Enter your id : ";
                cin >> studentid;

                bool found = false;

                for(int i = 0 ; i<student.size() ; i++){
                    if(student[i].stdid == studentid){
                        student[i].displaystudent();
                        found = true;
                        break;
                    }else{
                        cout << " student id is not found !" << endl;
                    }

                }
                break;
}

            case 4 :{
                    int studentid;
                    cout << " Enter your id : ";
                    cin >> studentid;

                    for(int i = 0 ; i< student.size() ; i++){
                        if(student[i].stdid == studentid){
                            student.erase(student.begin() + i);
                            cout << "student removed successfully ! " << endl;
                             
                        }
                    }
                    break;
}
 
           case 5 :{
            cout << " programme Exited successfully !" << endl;
            break;
           }

           default:
           cout << " Enter valid choice ! " << endl;
                

        }


}while(choice != 5);

}