#ifndef STATICSHAP_H
#define STATICSHAP_H

#include "Utils.h"



//静态图形类，为了保证每个对象访问的是同一个静态图形对象，所以封装成单例模式
class StaticShap
{
public:
    static StaticShap* getInstance();//获得实例的静态函数
    static void releaseInstance();//释放实例
    
    void show();//显示图形
    bool collide(int dirX, int dirY, int index);
    void addToMap();
private:
    StaticShap();
    StaticShap(const StaticShap& other);
    ~StaticShap();
    
    bool isFull(int line);//判断一行是否满
    void clearLine(int line);//消一行
    void moveLine(int dst, int src);//移动一行
private:
    static StaticShap* instance;//指向单例对象的指针
    int map[HEIGHT][WIDTH] = {{0}};//表示静态图形的二维数组 0没有图形 1有图形 2边界
};

#endif // STATICSHAP_H
