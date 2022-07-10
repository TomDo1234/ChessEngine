#include <array>


namespace PieceNS
{
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
}