#include <iostream>

using namespace std;

int main()
{
    long long int x ;
    
    cin >> x ;
    
    int y[x][1];
    
    for(int i =0 ; i <x ; i++){
        cin >> y[i][1];
    }
    
    for(int i =0 ; i<x ; i++){
        if((y[i][1])%2 == 0){
            int m = y[i][1]/2 ;
            
            cout << "\n" << m ;
        }
        
        else{
            int m = (y[i][1]-1)/2 + 1 ;
            
            cout << "\n" << m ;
        }
    }
    

    return 0;
}
