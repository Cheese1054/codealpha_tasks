#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool isUsernameTaken(string username) 
{
    ifstream file("database.txt");
    string u,p;
    while (file >> u >> p)
    {
        if (u == username)
            return true;
    }
    return false;
}

void registerUser()
{
    string username, password;
    cout << "\n--- Registration ---" << endl;
    cout << "Enter new username: ";
    cin >> username;

    if (isUsernameTaken(username))
    {
        cout << "Error: Username already exists." << endl;
        return;
    }

    cout << "Enter new password: ";
    cin >> password;

    ofstream file("database.txt", ios::app);
    if (file.is_open()) 
    {
        file << username << " " << password << endl;
        file.close();
        cout << "Registration complete!" << endl;
    }
}

bool loginUser() 
{
    string username, password, u, p;
    cout << "\n--- Login ---" << endl;
    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;

    ifstream file("database.txt");
    while (file >> u >> p)
    {
        if (u == username && p == password)
            return true;
        
    }
    return false;
}

int main() 
{
    int choice;

    while (true)
    {
        cout << "--- Welcome ---" << endl;
        cout << "1. Register" << endl;
        cout << "2. Login" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
            registerUser();
        else if (choice == 2)
        {
            if (loginUser())
                cout << "\nLogin successful!" << endl;
            else 
                cout << "\nError: Invalid username or password." << endl;
        }
        else if (choice == 3)
            break;
        else 
            cout << "Invalid choice." << endl;
    }
    return 0;
}