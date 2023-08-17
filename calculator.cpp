#include<iostream>
using namespace std;
int main(){
    int a,b;
    int choice;
    while(choice!=5){
        cout<<"PRESS 1 FOR ADDITION OPERATION"<<endl;
        cout<<"PRESS 2 FOR SUBTRACTION OPERATION"<<endl;
        cout<<"PRESS 3 FOR DIVISION OPERATION"<<endl;
        cout<<"PRESS 4 FOR MULTIPLICATION OPERATION"<<endl;
        cout<<"PRESS 5 TO EXIT"<<endl;
        cout<<"ENTER UR CHOICE"<<endl;
        cin>>choice;
        if (choice==1)
        {
            cout<<"ENTER NUMBERS FOR ADDITION OPERATION "<<endl;
            cin>>a>>b;
            cout<<"RESULT="<<a+b<<endl;
        }
        else if (choice==2)
        {
            cout<<"ENTER NUMBERS FOR SUBTRACTION OPERATION "<<endl;
            cin>>a>>b;
            cout<<"RESULT="<<a-b<<endl;
        }
        else if (choice==3)
        {
            cout<<"ENTER NUMBERS FOR DIVISION OPERATION "<<endl;
            cin>>a>>b;
            cout<<"RESULT="<<a/b<<endl;
        }
        else if (choice==4)
        {
            cout<<"ENTER NUMBERS FOR MULTIPLICATION OPERATION "<<endl;
            cin>>a>>b;
            cout<<"RESULT="<<a*b<<endl;
        }
        else if (choice==5)
        {
            cout<<"SAYONARA "<<endl;
        
        }
        
    }
    return 0;
}