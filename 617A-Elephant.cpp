#include <iostream>

using namespace std;

int main()
{
    int x ;
    
    cin >> x ;
    
    if(x%5 == 0){
        int i = 0;
        i = x/5;
        cout << "" << i ; 
    }
    
    else{
        int i = 0 ;
        i = 1 + x/5 ;
        cout << "" << i ;
    }

    return 0;
}
