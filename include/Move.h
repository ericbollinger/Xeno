#include <iostream>
#include <string>
#include <stdlib.h>

class Move {

    private:
        int from;
        int pieceFrom;
        int to;
        int pieceTo;
        bool isCapture;

    public:
        Move(int from, int pieceFrom, int to, int pieceTo, bool isCapture);
        int getFrom();
        void setFrom(int f);
        int getPieceFrom();
        void setPieceFrom(int p);
        int getTo();
        void setTo(int t);
        int getPieceTo();
        void setPieceTo(int p);
        bool getCapture();
        void setCapture(bool c);
        bool operator< (const Move &other) const {
            if (isCapture < other.isCapture) {
                return true;
            } else if (isCapture > other.isCapture) {
                return false;
            } else {
                return (from > other.from);
            }
        }

};
