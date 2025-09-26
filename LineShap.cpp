#include "LineShap.h"
#include <cstdlib>
#include "Utils.h"

Point LineShap::shapLib[2][4] = { //这种初始化方式是C++11语法
          {{0,0},{-1,0},{1,0},{2,0}},//横条	
          {{0,0},{0,-1},{0,1},{0,2}}//竖条
	};

LineShap::LineShap()
{
    index = rand()%2;//给图形一个初始化  Line只有两种形态
}

void LineShap::change()
{
    index = index==0?1:0;//Line只有两种形态
}

void LineShap::show()
{
    //画出图形
    for(int i = 0;i < 4;i++)
    {
        int lx = shapLib[index][i].x+x;
        int ly = shapLib[index][i].y+y;
        Utils::drawPoint(lx, ly);
    }
}
