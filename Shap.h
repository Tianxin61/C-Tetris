#ifndef SHAP_H
#define SHAP_H

#include <cstdio>

struct Point
{
	int x;
	int y;
};

class Shap
{
public:
    Shap();
    
	virtual void change();//变形
	virtual void show();//显示
	
protected:
	int index;//图形的下标
	int x, y;//图形位置
};
#endif // SHAP_H
