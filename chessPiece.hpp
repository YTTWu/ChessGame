#ifndef ChessPiece_hpp
#define ChessPiece_hpp


#include <stdio.h>
#include "visitor.hpp"


class ChessPiece
{

protected:
    int x;
    int y;
    char color;
    char name;

public:
    void set_X(int x_)
    {
        x = x_;
    }
    
    void set_Y(int y_)
    {
        y = y_;   
    }
    
    void set_color(char color_)
    {
        color = color_;   
    }
    
    void set_name(char name_)
    {
        name = name_;   
    }
    
    int get_X()
    {
        return x;    
    }
    
    int get_Y()
    {
        return y;   
    }
    
    char get_color()
    {
        return color;
    }
    
    char get_name()
    {
        return name;
    }
    
    
    virtual bool accept(Visitor *pV, int d_x, int d_y) = 0;
    
};

#endif
