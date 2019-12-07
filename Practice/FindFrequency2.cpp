#include<iostream>
using namespace std;

int main(){
    int i, count = 0;
    char str[100];
    char n;
    cin.get(str, 100);
    cin >> n ;

    for ( i = 0; str[i] != '\0'; i++)
    {
        if (str[i]== n)
        {
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}