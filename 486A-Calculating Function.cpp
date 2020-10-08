#include <iostream>

using namespace std;

int main()
{   
    long long int x ;
    
    cin >> x;
    
    if(x%2 == 0){
        long long int i = x/2;
        cout << "" << i ;
    }
    
    else{
        long long int i = -(x+1)/2 ;
        cout << "" << i ;
    }

    return 0;
}
