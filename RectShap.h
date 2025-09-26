#ifndef RECTSHAP_H
#define RECTSHAP_H

#include "Shap.h"

class RectShap : public Shap
{
public:
    RectShap();
    
    void change() override;
    void show() override;
private:
    static Point shapLib[1][4];
};

#endif // RECTSHAP_H
