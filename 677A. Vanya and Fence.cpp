#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cin >> x ;
    cin >> y ;
    
    int m[x];
    
    for(int i = 0 ; i<x ; i++){
        cin >> m[i] ;
    }
    
    int n = 0 ;
    
    for(int i = 0 ; i<x ;i++){
        if((m[i])>y){
            n = n + 2;
        }
        else{
            n = n + 1;
        }
    }
    
    cout << "" << n ;

    return 0;
}
