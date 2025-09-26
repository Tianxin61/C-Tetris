#include "ZShap.h"
#include <cstdlib>
#include "Utils.h"

Point ZShap::shapLib[2][4] = { //这种初始化方式是C++11语法
       {{0,0},{1,0},{0,-1},{-1,-1}},//正Z1	
       {{0,0},{1,-1},{0,1},{1,0}}//正Z2
	};

ZShap::ZShap()
{
    index = rand()%2;
}

void ZShap::change()
{
    index = index==0?1:0;
}

void ZShap::show()
{
    //画出图形
    for(int i = 0;i < 4;i++)
    {
        int lx = shapLib[index][i].x+x;
        int ly = shapLib[index][i].y+y;
        Utils::drawPoint(lx, ly);
    }
}
