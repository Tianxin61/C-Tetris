#ifndef UTILS_H
#define UTILS_H

#include <cstdio>

#define WIDTH	15
#define HEIGHT	20

//工具类，这个类中封装工具函数
class Utils
{
public:
    //这两个函数写在图形类中是不合适的，因为他们和我的所有成员一点关系都没有
    //为什么是静态函数，因为这个类没有成员。
    static void drawPoint(int x, int y);//画点
    static char myget();//输入
};

#endif // UTILS_H
