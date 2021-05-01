#include <iostream>

using namespace std;

int main(){
    char letter;
    cout<<"input a letter";
    cin>>letter;
    
    letter = tolower(letter);
    
    switch (letter)
    {
    case 'a':
        cout<<"y";
        break;
    case 'e':
        cout<<"y";

    default:
        cout<<"n";
    }

}