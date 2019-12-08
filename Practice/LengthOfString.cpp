#include<iostream>
using namespace std;

int main(){
    int i;
    char arr[100];
    
    cin.get(arr, 100);

    for ( i = 0; arr[i] != '\0'; i++);

    cout << i << endl;
    
    return 0;
}