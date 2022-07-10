namespace PieceNS
{
    class Piece {
        public : 
            int boardpos[2];
            short team;
            char name;
            Piece(int boardpos[2], short team, char name) {
                boardpos = boardpos;
                team = team;
                name = name;
            }
    };

    Piece bp1;
}