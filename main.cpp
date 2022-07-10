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

    Piece bp1({0,2},1,'P');
    Piece bp2({1,2},1,'P');
    Piece bp3({2,2},1,'P');
    Piece bp4({3,2},1,'P');
    Piece bp5({4,2},1,'P');
    Piece bp6({5,2},1,'P');
    Piece bp7({6,2},1,'P');
    Piece bp8({7,2},1,'P');


    Piece wp1({0,6},0,'P');
    Piece wp2({1,6},0,'P');
    Piece wp3({2,6},0,'P');
    Piece wp4({3,6},0,'P');
    Piece wp5({4,6},0,'P');
    Piece wp6({5,6},0,'P');
    Piece wp7({6,6},0,'P');
    Piece wp8({7,6},0,'P');

    std::cout << bp1.boardpos[1] << std::endl;
    return 0;
}
