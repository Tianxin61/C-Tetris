#ifndef GAMESCENE_H
#define GAMESCENE_H

#include "Shap.h"

class GameScene
{
public:
    GameScene();
    ~GameScene();//用来释放在类的内部创建的对象
    void run();//游戏主逻辑
private:
    bool userCtrl();//返回true继续   false结束
    void createShap();//创建图形
private:
    Shap* sp;//指向图形的指针
};

#endif // GAMESCENE_H
