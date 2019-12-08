#include<iostream>
using namespace std;

int greatest(int, int, int, int);

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d ;

    
    cout << greatest(a, b, c, d) << endl;

    return 0;
}

int greatest(int a, int b, int c, int d){
    int temp = 0;
    
    temp = ( a > b ) ?  a : b;
    temp = ( temp > c ) ?  temp : c;
    temp = ( temp > d ) ?  temp : d;
    
    return temp;
}