#include<iostream>
using namespace std;

int main(){
    int input;
    cin >> input;
    if (input == 2)
    {
        printf("NO");
    }else if (input % 2 == 0)
    {
        printf("YES");
    } else
    {
        printf("NO");
    }
    return 0;
}
