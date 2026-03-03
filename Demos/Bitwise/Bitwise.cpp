#include <iostream>
#include <bitset>

bool shouldResolveCollision(short o1Layer, short o2Mask);

//Bitwise Operations Demo
int main()
{
    // Base 10 = 0 1 2 3 4 5 6 7 8 9
    // Base 2 = 0 1

    short a = 0b11110000;
    short b = 0b10101010; //0b signifies bits/binary numbers

    std::cout << "a = " << std::bitset<8>(a) << std::endl;
    std::cout << "b = " << std::bitset<8>(b) << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    //a = 0b11110000;
    //b = 0b10101010;
    //& =   10100000;
    // Bitwise AND & - If both input are 1, output 1. otherwise 0
    short resultOfAnd = a & b;
    std::cout << "& = " << std::bitset<8>(resultOfAnd) << std::endl;
    std::cout << "& = " << resultOfAnd << std::endl;

    //a = 0b11110000;
    //b = 0b10101010;
    //| =   11111010;
    // Bitwise OR | - If at least input is 1, output 1. otherwise 0
    short resultOfOr = a | b;
    std::cout << "| = " << std::bitset<8>(resultOfOr) << std::endl;
    std::cout << "| = " << resultOfOr << std::endl;

    //a = 0b11110000;
    //b = 0b10101010;
    //^ =   01011010;
    // Bitwise XOR ^ - If inputs are different, output 1. otherwise 0
    short resultOfXor = a ^ b;
    std::cout << "^ = " << std::bitset<8>(resultOfXor) << std::endl;
    std::cout << "^ = " << resultOfXor << std::endl;

    //Single Variable operators
    short c = 0b11110000;

    // c = 0b0000000011110000  8 leading zeros; Binary Literals are 16 bits
    // ~ =   1111111100001111
    // Complement ~ - Invert every bit
    short resultOfComp = ~c;
    std::cout << "c = " << std::bitset<16>(c) << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "~ = " << std::bitset<16>(resultOfComp) << std::endl;
    std::cout << "~ = " << resultOfComp << std::endl;

    // c = 0b0000000011110000  8 leading zeros; Binary Literals are 16 bits
    // L1 =  0000000111100000
    // R1 =  0000000001111000
    // 
    // Left Shift << X - Shift the value X times to the left
    // Right Shift >> X - Shift the value X times to the right
    // When shifted to either end, the other side is always replaced with a 0
    unsigned short resultOfLShift = c << 2;
    unsigned short resultOfRShift = c >> 3;
    std::cout << "<< = " << std::bitset<16>(resultOfLShift) << std::endl;
    std::cout << ">> = " << std::bitset<16>(resultOfRShift) << std::endl;
    std::cout << "<< = " << resultOfLShift << std::endl;
    std::cout << ">> = " << resultOfRShift << std::endl;

    //Collision layers
    short playerLayer = 0b0001;
    short  ghostLayer = 0b0010;
    short   wallLayer = 0b0100;
    
    short playerMask = 0b0101;
    short  ghostMask = 0b0010;
    short   wallMask = 0b0001;

    //    ghost&player = 0000 => 0 no collision
    //     player&wall = 0001 => 1 collision

    std::cout << "Ghost v Player: " << shouldResolveCollision(ghostLayer, playerMask) << std::endl;
}

bool shouldResolveCollision(short o1Layer, short o2Mask) 
{
    return o1Layer & o2Mask;
}