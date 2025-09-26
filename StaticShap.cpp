#include "StaticShap.h"
#include <cstdio>

StaticShap* StaticShap::instance = nullptr;

StaticShap::StaticShap()
{
    int i;
	//左右边界，遍历Ｙ轴
	for(i = 0;i < HEIGHT;i++)
	{
		map[i][0] = 2;//左边值
		map[i][WIDTH-1] = 2;//右边值
	}
	//上下边界，遍历Ｘ轴
	for(i = 0;i < WIDTH;i++)
	{
		map[0][i] = 2;//上边值
		map[HEIGHT-1][i] = 2;//下边值
	}
}

StaticShap::StaticShap(const StaticShap& other)
{
    
}

StaticShap::~StaticShap()
{
    
}

StaticShap* StaticShap::getInstance()
{
    if(instance == nullptr)
        instance = new StaticShap;
    return instance;
}

void StaticShap::releaseInstance()
{
    if(instance != nullptr)
    {
        delete instance;
        instance = nullptr;
    }
}

bool StaticShap::isFull(int line)
{
    //遍历一行，略过左右边界
    int i;
    for(i = 1;i < WIDTH-2;i++)
    {	
        if(map[line][i] == 0)
        {
            return false;
        }
    }
    return true;
}

void StaticShap::clearLine(int line)
{
    //遍历一行，略过左右边界
    int i;
    for(i = 1;i < WIDTH-2;i++)
    {	
        map[line][i] = 0;
    }
}

void StaticShap::moveLine(int dst, int src)
{
    //遍历一行，略过左右边界
    int i;
    for(i = 1;i < WIDTH-2;i++)
    {	
        map[dst][i] = map[src][i];
        map[src][i] = 0;
    }
}

void StaticShap::show()
{
    //绘制静态图形
    for(int i = 0;i < HEIGHT;i++)
    {
        for(int j = 0;j < WIDTH;j++)
        {
            if(map[i][j] != 0)//有图形
            {
                Utils::drawPoint(j, i);
            }
        }
    }
    
    fflush(stdout);//清理输出缓存
}

bool StaticShap::collide(int dirX, int dirY, int index)
{
//    int i;
//    for(i = 0;i < 4;i++)
//    {
//        //计算图形移动后的点位置
//        int collideX = shapes[index][i].x+x+dirX;
//        int collideY = shapes[index][i].y+y+dirY;
//        if(map[collideY][collideX] != 0)//有碰撞
//        {
//            return true;
//        }
//    }
//    return false;
}

void StaticShap::addToMap()
{
    //遍历图形，在ｍａｐ中找到与图形４个点对应的４个元素，将值置为１
//    int i;
//    for(i = 0;i < 4;i++)
//    {
//        int lx = shapes[shapeIndex][i].x+x;
//        int ly = shapes[shapeIndex][i].y+y;
//        map[ly][lx] = 1;
//    }
}
