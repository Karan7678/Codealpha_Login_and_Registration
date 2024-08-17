                                                   //TASK 2: LOGIN AND REGISTRATION SYSTEM

#include<iostream>
#include<fstream>  //file access
#include<string>
using namespace std;
bool loggingin(){
    string username, password, un ,pw;
    cout<<" Enter username : ";
    cin>>username;
    cout<<" Password : ";
    cin>>password;
    

    ifstream read("d:\\" + username + ".txt");
    getline(read,un);
    getline(read,pw);

    if(un == username &&  pw == password){
        return true;
            }
            else{
                return false;
            }

}
int main(){
    int choice;
    
    system("cls");          //To update the screen
    cout<<"\t\t\t WELCOME TO THE REGISTRATION AND LOGIN SCREEN "<<endl;
    cout <<" 1 : Register "<<endl;
    cout<<" 2 : Login "<<endl;
    cout<<" Select any option "<<endl;
    cin>>choice;
    if(choice == 1){
        string username, password;
        cout<<" Enter a username : ";
        cin>>username;
        cout<<" Enter password : ";
        cin>>password;
        
        ofstream file;
        file.open("d:\\" + username + ".txt");
        file << username << endl;
        file << password << endl;
        file.close();
        cout << "Registration successful!" << endl;
        
        main();
    }     
    
   else if(choice == 2){
        bool status = loggingin();
        if(!status){
            cout<<" Invalid login! "<<endl;
            system("PAUSE");
            return 0;
        }
        else{
            cout<<" Successfully logged in !! "<<endl;
            system("PAUSE");
            return 1;
        }
    }else{
        cout<<"Invalid choice! Now Program is exit now "<<endl;
    }

}

