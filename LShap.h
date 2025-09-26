#ifndef LSHAP_H
#define LSHAP_H

#include "Shap.h"

class LShap : public Shap
{
public:
    LShap();
    
    void change() override;
    void show() override; 
private:
	static Point shapLib[4][4];
};

#endif // LSHAP_H
