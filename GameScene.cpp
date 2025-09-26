#include "GameScene.h"
#include <ctime>
#include <windows.h>
#include <conio.h>
#include "Utils.h"
#include "LineShap.h"
#include "LShap.h"
#include "RLShap.h"
#include "RectShap.h"
#include "ZShap.h"
#include "RZShap.h"
#include "TShap.h"

GameScene::GameScene()
{
    srand(time(0));//初始化随机种子
    createShap();//创建图形对象
}

GameScene::~GameScene()
{
    delete sp;
}

void GameScene::run()
{
    while(1)
    {
        system("cls");
        sp->show();//显示一个图形
        
        if(userCtrl() == 0)//用户控制
        {
            break;
        }
        
        Sleep(50);
    }
}

bool GameScene::userCtrl()
{
    char input = Utils::myget();//输入
    switch(input)
    {
    case 'a'://左

        break;
    case 's'://下

        break;
    case 'd'://右

        break;
    case 'w'://变形
        sp->change();
        break;
    case 'q':
        return 0;
    }
    return 1;
}

void GameScene::createShap()
{
    switch(rand()%7)
    {
    case 0:
        sp = new LineShap;
        break;
    case 1:
        sp = new LShap;
        break;
    case 2:
        sp = new RLShap;
        break;
    case 3:
        sp = new ZShap;
        break;
    case 4:
        sp = new RZShap;
        break;
    case 5:
        sp = new RectShap;
        break;
    case 6:
        sp = new TShap;
        break;
    }
}
