#include <iostream>

int main(){

    int x = 0, y = 0;

    std::cout << " Enter x and y:" << std::endl;

    std::cin >> x >> y;

    if(x > y)
        y = 0;
    if (x < y)
        x = 0;
    if (x == y){
        x = 0;
        y = 0;
    }

    std::cout << " x - " <<  x << " y - " << y << std::endl;
    std::cout << " Enter a , b and c:" << std::endl;

    double a = 0 , b = 0, c = 0;

    std::cin >> a >> b >> c;

    std::cout << "Enter k:" << std::endl;

    double k = 0;

    std::cin >> k;

    if (a == b && b == c ) {
        std::cout << " in laba nichego ye bylo :(" << std::endl;
        a -= k;
        b -= k;
        c -= k;
        std::cout << a << " " << b << " " << c << std::endl; 
        return 0;
    }




    if (a == b && a>c ){
        a = a-k;
        b = b-k;
        std::cout << a << " " << b << " " << c << std::endl; 
        return 0;
    }else{
        if(b == c && b>a){
            b = b-k;
            c = c-k;
            std::cout << a << " " << b << " " << c << std::endl; 
            return 0;
        }else{
            if (a == c && a > b){
                a = a-k;
                c = c-k;
                std::cout << a << " " << b << " " << c << std::endl; 
                return 0;
            }
        }
    }
    
    if (a > b && a > c)
        a = a-k;
    else{
        if( b > c )
            b = b - k;
        else{
            c = c-k;
        }
    }

     std::cout << a << " " << b << " " << c << std::endl;

    return 0;
}