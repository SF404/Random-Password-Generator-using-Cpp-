#include <bits/stdc++.h>
using namespace std;

char charecters[] = "0123456789!@#$%^&*qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM"; // array of charecters

int main()
{
    int length_of_password, len_of_char_array = sizeof(charecters); // length of char array

    cout << "Enter the length of Password: ";
    cin >> length_of_password; // Desired length input
    srand(time(NULL));         // initialize the random according to the current time of computer
    cout << "Random Generated Password: ";
    string password;
    for (int i = 0; i < length_of_password; i++) // to print random charecter from the defined array
    {
        password = password + charecters[rand() % len_of_char_array]; // length of charecter array(No of charecters we have defined)
    }
    cout << password << "\n";
    ofstream file;
    file.open("Password_file.txt");
    file << password; // saving password to text file
    file.close();

    return 0;
}