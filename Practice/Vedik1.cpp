#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    printf("%d%d * %d%d = %d", n, m, n, (10-m),n*m*n*(10-m) );  
    return 0;
}