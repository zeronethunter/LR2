#include <iostream>
#include <cmath>
int factorial(int n) {
    int z = 1;
    while(n != 0){
       z = z*n;
       n = n-1;
    }
    return z;
}
int main() {

    for(unsigned short int i = 0; i<=127; i++){
        std::cout << (char)i << std::endl;
        }
    std::cout << "Input symbol: ";
    char sym;
    std::cin >> sym;
    static_cast<int>(sym);
    if ((sym >= 48) && (sym<=57)) {
        std::cout << " It's Digit" << std::endl;
    } else if (((sym>=65)&&(sym<=90)) || ((sym>=97)&&(sym<=122))){
        std::cout << " It's letter" << std::endl;
    } else {
        std::cout << " It's unknown symbol" << std::endl;
    }
    std::cout << "Input x: ";
    unsigned int x;
    std::cin >> x;
    std::cout << "Result: ";

    switch (x%4){
        case 0:
            std::cout << -1 << std::endl;
            break;
        case 1:
            std::cout << pow(x, -1) << std::endl;
            break;
        case 2:
            std::cout << "-" << x << std::endl;
            break;
        case 3:
            std::cout << x << std::endl;
            break;
    }
    std::cout << "Input y =";
    float y;
    std::cin >> y;
    int kol1 = 2;
    for (unsigned int m=100; m<1000001; m=m*10){
        int kol = 0;
        float z = sin(y);
        float res=y;
        while((static_cast<int>(res*m)) != (static_cast<int>(z*m))){
            res = res+(pow(-1,kol))*(pow(y, 2*kol+1))/(factorial(2*kol+1));
            kol += 1;
        }
        std::cout << res << " - accuracy is 10^-" << kol1 << "; Count of iteration = " << kol << std::endl;
        kol1+=1;
    }
    return 0;
}
