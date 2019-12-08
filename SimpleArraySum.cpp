#include<iostream>
using namespace std;

int main(){
    int array[1000], input, sum = 0;
    cin >> input ;
   
    for ( int i = 0; i < input; i++ ) 
    {
        cin >> array[i];
        sum += array[i];
    }
   
    cout << sum << endl;
    return 0;
}