

#include "Pawn.hpp"
#include "PieceVisitor.hpp"
Pawn::Pawn(char d_x, char d_y, char p_color) : p_X(d_x), p_Y(d_y), color(p_color)
{
    isMoved = false;
    this->name = 'P';
}

Pawn::~Pawn(){}

void Pawn::setPawn_X(char x)
{
    this->p_X = x;
}

void Pawn::setPawn_Y(char y)
{
    this->p_Y = y;
}

char Pawn::getPawn_X()
{
    return p_X;
}

char Pawn::getPawn_Y()
{
    return p_Y;
}

char Pawn::getPawn_Color()
{
    return color;
}

bool Pawn::getPawn_isMoved()
{
    return isMoved;
}

bool Pawn::accept(Visitor *pV, char d_x, char d_y)
{
    if(pV->visitPawn(this, d_x, d_y))
    {
        return true;
    }
    return false;
}




