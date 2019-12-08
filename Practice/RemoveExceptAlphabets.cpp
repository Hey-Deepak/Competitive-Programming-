#include<iostream>
using namespace std;

int main(){
    int j=0;
    char str[20] ,strCopy[20];


    cin.get(str, 20);

    
    for (int i = 0; str[i]!='\0'; i++)
    {
        if ( (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {   
            strCopy [j++] = str[i];
    
        }
        
    }
    strCopy[j]='\0';
    
    cout << strCopy << endl;
    return 0;
}