#ifndef RLSHAP_H
#define RLSHAP_H

#include "Shap.h"

class RLShap : public Shap
{
public:
    RLShap();
    
    void change() override;
    void show() override;
private:
    static Point shapLib[4][4];
};

#endif // RLSHAP_H
