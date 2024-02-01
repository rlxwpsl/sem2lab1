

#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");
    unsigned char X = 7;
    // 7 = 00000111
    //unsigned char X = 98; 
    // 98 = 01100010
    //unsigned char X = 241; 
    // 241 = 11110001
    unsigned short i;
    std::cout << "Введите число i: ";
    std::cin >> i;
    unsigned short j;
    std::cout << "Введите число j: ";
    std::cin >> j;
    std::cout << "Начальное число: " << int(X) << std::endl;


    // 1 доп - start 
    unsigned char Y = ~X; 
    std::cout << "1.Инверсия числа: " << int(Y) << std::endl;
    //1 доп - end


    // 2 доп - start 

    unsigned char result = X;
    unsigned short I = (result >> i) & 1;
    unsigned short J = (result >> j) & 1;
    result = result & (~(1 << i)) & (~(1 << j));
    result = result | (I << j);
    result = result | (J << i);
    std::cout << "2. Итоговое число: " << int(result) << std::endl;

    // 2 доп - end 


    X &= ~(1 << i);
    std::cout << "Конечное число: " << int(X) << std::endl;




    return 0;
}

