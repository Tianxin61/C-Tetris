#include "RZShap.h"
#include <cstdlib>
#include "Utils.h"

Point RZShap::shapLib[2][4] = { //这种初始化方式是C++11语法
        {{0,0},{1,-1},{-1,0},{0,-1}},//反Z1	
        {{0,0},{-1,-1},{-1,0},{0,1}}//反Z2
	};

RZShap::RZShap()
{
    index = rand()%2;
}

void RZShap::change()
{
    index = index==0?1:0;
}

void RZShap::show()
{
    //画出图形
    for(int i = 0;i < 4;i++)
    {
        int lx = shapLib[index][i].x+x;
        int ly = shapLib[index][i].y+y;
        Utils::drawPoint(lx, ly);
    }
}
