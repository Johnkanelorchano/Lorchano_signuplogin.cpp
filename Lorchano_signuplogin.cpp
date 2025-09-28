#include <iostream>
#include <string>
using namespace std;

int main() {
    string username, password;
    string loginUser, loginPass;
    int choice;

    cout << "1. Sign Up\n";
    cout << "2. Sign In\n";
    cout << "Choose One or Two: ";
    cin >> choice;

    if (choice == 1) {
        cout << "=== Sign Up ===\n";
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;
        cout << "Account created!\n";
    } 
    else if (choice == 2) {
        cout << "=== Sign In ===\n";
        cout << "Enter username: ";
        cin >> loginUser;
        cout << "Enter password: ";
        cin >> loginPass;

        if (loginUser == username && loginPass == password) {
            cout << "Login successful! Welcome " << loginUser << "!\n";
        } else {
            cout << "Invalid username or password.\n";
        }
    } 
    else {
        cout << "Invalid choice.\n";
    }

    return 0;
}
    