#include<iostream>
using namespace std;

int main(){
    char n;
    cin >> n ;

    if ( (n == 'a') || (n == 'o') || (n == 'i') || (n == 'e') || (n =='u') || (n == 'A') || (n == 'O') || (n == 'I') || (n == 'E') || (n =='U'))
    {
        cout << "Vowel" << endl;
    } else
    {
        cout << "Consonant" << endl;
    }
    
    return 0;
}