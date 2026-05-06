#include<iostream>
using namespace std;

struct stud{
    int id;
    string name;
    float marks;
};

int main(){
    stud s[100];
    int choice, count=0;
    while(choice!=4){
        cout << "\n========== STUDENT RECORD ==========\n";
        cout << "1. Add students\n2. Display all\n3. Search by id\n4. Exit\n";
        cout << "Enter your choice :";
        cin >> choice;
        switch(choice){
            case 1:{
            cout << "Enter ID :";
            cin >> s[count].id;
            cout << "Enter Name :";
            cin >> s[count].name;
            cout << "Enter Total Marks :";
            cin >> s[count].marks;
            count++;
            cout << "Student added successfully!\n";
            }
            break;
            case 2:{
            cout << "\n---------- Student Record ----------\n";
            for(int i=0; i<count; i++){
                cout << "ID :" << s[i].id << "\tName :" << s[i].name << "\tMarks :" << s[i].marks << endl;
            }
        }
            break;
            case 3:{
            int searchId;
            cout << "Enter ID to search :";
            cin >> searchId;
            bool found=false;
            for(int i=0; i<count; i++){
                if(s[i].id==searchId){
                    cout << "Found :\n";
                    cout << "Name :" << s[i].name << " and Marks :" << s[i].marks << endl;
                    found=true;
                    break;
                }
            }
            if(!found){
                cout << "Student not found" << endl;
            }
        }
            break;
            case 4:{
            cout << "Exiting......." << endl;
            }
            break;
            default:
            cout << "Invalid choice" << endl;
        }
    }
    return 0;
}