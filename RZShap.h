#ifndef RZSHAP_H
#define RZSHAP_H

#include "Shap.h"

class RZShap : public Shap
{
public:
    RZShap();
    
    void change() override;
    void show() override;
private:
	static Point shapLib[2][4];
};

#endif // RZSHAP_H
