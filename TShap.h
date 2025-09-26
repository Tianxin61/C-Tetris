#ifndef TSHAP_H
#define TSHAP_H

#include "Shap.h"

class TShap : public Shap
{
public:
    TShap();
    
    void change() override;
    void show() override;
private:
	static Point shapLib[4][4];
};

#endif // TSHAP_H
