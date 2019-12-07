#include<iostream>
using namespace std;

int main(){
    int i, count = 0;
    string str;
    char n;
    
    getline(cin, str);
    cin >> n ;

    for ( i = 0; i < str.size(); i++)
    {
        if (str[i]== n)
        {
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}