#include<iostream>
using namespace std;

int main(){
    int i, j, count = 0;
    string str;
    getline(cin, str);

    for ( i = 0; i < str.size(); i++)
    {
        if (str[i]=='a')
        {
            count++;
        }
    }
    
        cout << count << endl;
    

    return 0;
}