#include <iostream>
#include <boost/numeric/odeint.hpp>
#include <Eigen/Dense>
using namespace boost::numeric::odeint;
using namespace Eigen;
typedef VectorXd state_type;
void myFun(const state_type &x, state_type &dxdt, double t) {
    dxdt = x;
}
int main() {
    std::cout << "The size of int is: " << sizeof(int) << " bytes." << std::endl;
    return 0;
    
    // state_type x(6);
    // x.fill(1.0);  
    // auto stepper = make_controlled< runge_kutta_fehlberg78<state_type> >(1.0e-12, 1.0e-12);
    // integrate_adaptive(stepper, myFun, x, 0.0, 1.0, 0.01, [](const state_type &x, double t) 
    // {
    //     std::cout << t;
    //     for (int i = 0; i < x.size(); ++i) 
    //     {
    //             std::cout << "\t" << x(i);
    //     }
    //     std::cout << std::endl;
    //     });
    // return 0;
}
