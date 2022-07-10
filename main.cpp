#include <iostream>
#include <array>

class Piece {
    public : 
        std::array<int,2> boardpos;
        short team;
        char name;
        Piece(std::array<int,2> a, int b, char c) {
            boardpos = a;
            team = b;
            name = c;
        }
};

int main(int argc, char const *argv[])
{
    /* code */
    std::array<int,2> pos1 = {0,2}, pos2 = {1,2} , pos3 = {2,2} , pos4 = {3,2}, pos5 = {4,2}, pos6 = {5,2} , pos7 = {6,2} , pos8 = {7,2};

    Piece bp1(pos1,1,'P');
    Piece bp2(pos2,1,'P');
    Piece bp3(pos3,1,'P');
    Piece bp4(pos4,1,'P');
    Piece bp5(pos5,1,'P');
    Piece bp6(pos6,1,'P');
    Piece bp7(pos7,1,'P');
    Piece bp8(pos8,1,'P');

    std::cout << bp1.name << std::endl;
    return 0;
}
