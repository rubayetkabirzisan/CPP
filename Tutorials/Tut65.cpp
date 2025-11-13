#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //connecting our file with hout stream
    ofstream hout("Samplle 64b.txt");

    //creating a name string and filling it with the string entered by the user
    string name;
    cout<<"Enter your name : ";
    cin>>name;

    //writing a string to the file
    hout<<name + " is my name";
    hout.close();

    ifstream hin("Samplle 64b.txt"); // Assuming the file name is "Sample64b.txt"
    string content;
    string combinedContent = "The content of this file is: "; // Initialize with prefix

    if (hin.is_open()) {
        while (getline(hin, content)) {
            combinedContent += content; // Append current line to combined content
        }
        hin.close(); // Close the file after reading
        cout << combinedContent << endl; // Print the combined content
    }
    hin.close();
    return 0;

}
