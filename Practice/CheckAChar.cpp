#include<iostream>
using namespace std;

int main(){
    char n;
    cin >> n ;

    if ( (n == 'a') || (n == 'o') || (n == 'i') || (n == 'e') || (n =='u') )
    {
        cout << "Vowel" << endl;
    } else
    {
        cout << "Consonant" << endl;
    }
    
    return 0;
}