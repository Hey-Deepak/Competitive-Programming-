#include<iostream>
using namespace std;

int main(){
    int i, count = 0;
    char arr[100];
    
    cin.get(arr, 100);

    for ( i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }

    cout << count << endl;
    
    return 0;
}