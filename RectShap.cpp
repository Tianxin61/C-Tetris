#include "RectShap.h"
#include "Utils.h"

Point RectShap::shapLib[1][4] = { //这种初始化方式是C++11语法
		{{0,0},{-1,-1},{-1,0},{0,-1}}//方块	
	};

RectShap::RectShap()
{
    index = 0;
}

void RectShap::change()
{
    //变形什么都不用做
}

void RectShap::show()
{
    //画出图形
    for(int i = 0;i < 4;i++)
    {
        int lx = shapLib[index][i].x+x;
        int ly = shapLib[index][i].y+y;
        Utils::drawPoint(lx, ly);
    }
}
