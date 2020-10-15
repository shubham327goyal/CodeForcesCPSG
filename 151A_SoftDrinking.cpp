#include <iostream>

using namespace std;

int main()
{
    int a ,b ,c, d, e, f, g, h;
    
    cin >> a >> b >> c >> d >> e >> f >> g >> h ;
    
    int x , y , z ;
    
    x = (c*b)/g;
    
    y = d*e ;
    
    z = f/h ;
    
    if (x <= y && x <= z) 
        cout << x/a ; 
  
    else if (y <= x && y <= z) 
        cout << y/a ; 
  
    else
        cout << z/a ; 
    
    
    
    return 0;
}
