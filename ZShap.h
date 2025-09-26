#ifndef ZSHAP_H
#define ZSHAP_H

#include "Shap.h"

class ZShap : public Shap
{
public:
    ZShap();
    
    void change() override;
    void show() override;
private:
	static Point shapLib[2][4];
};

#endif // ZSHAP_H
