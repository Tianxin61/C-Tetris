#ifndef LINESHAP_H
#define LINESHAP_H

#include "Shap.h"

//条形类
class LineShap : public Shap
{
public:
    LineShap();
    
    void show() override;
    void change() override; 
private:
    static Point shapLib[2][4];//图形库  所有对象共用同一个图形库
};

#endif // LINESHAP_H
