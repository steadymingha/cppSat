#ifndef _MAIN_H_
#define _MAIN_H_

namespace Propagator{

class RungeKuttaFehlberg{
public:
    RungeKuttaFehlberg();
    ~RungeKuttaFehlberg();

    void fcn();

private:
    int var;

};

void fcn();
}

#endif 

    

