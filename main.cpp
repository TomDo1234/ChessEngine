#include <iostream>
#include "piece.h"
#include <array>

using namespace PieceNS;

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

    Piece X({-1,-1},0,' ');

    std::array<std::array<Piece,8>, 8> Board = 
    {{{X,X,X,X,X,X,X,X},
    {bp1,bp2,bp3,bp4,bp5,bp6,bp7,bp8},
    {X,X,X,X,X,X,X,X},
    {X,X,X,X,X,X,X,X},
    {X,X,X,X,X,X,X,X},
    {X,X,X,X,X,X,X,X},
    {wp1,wp2,wp3,wp4,wp5,wp6,wp7,wp8},
    {X,X,X,X,X,X,X,X}}};


    std::cout << bp1.boardpos[1] << std::endl;
    return 0;
}
