#include <iostream>

using namespace std;

int main()
{   
    int x ;
    
    cin >> x ;
    
    int y[x][2];
    
    for(int i = 0 ; i<x ; i++){
        for(int j = 0 ; j<2 ; j++){
            cin >> y[i][j];
        }
    }
    
    for(int i = 0 ; i<x ; i++){
        if((y[i][0]%y[i][1]) == 0){
            cout <<"\n0\n" ;
        }
        
        else{
            int m ;
            
            m = y[i][1] - (y[i][0]%y[i][1]);
            
            cout << "\n" << m ;
        }
    }

    return 0;
}
