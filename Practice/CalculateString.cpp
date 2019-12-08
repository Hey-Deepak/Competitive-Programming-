#include<iostream>
using namespace std;

int main(){
    int vowelsCount = 0, consonantsCount = 0, digitsCount = 0, whiteSpacesCount = 0; 
    string str1;

    getline(cin, str1);

    for (int i = 0; i < str1.size(); i++)
    {
        if ( (str1[i] == 'a') || (str1[i] == 'o') || (str1[i] == 'i') || (str1[i] == 'e') || (str1[i] =='u') || (str1[i] == 'A') || (str1[i] == 'O') || (str1[i] == 'I') || (str1[i] == 'E') || (str1[i] =='U'))
        {
            vowelsCount++;
        } else
        {
            consonantsCount++;
        }
    }
    cout << vowelsCount << endl;
    cout << consonantsCount << endl;
    return 0;
}