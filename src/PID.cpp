#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
	this->Kp = Kp;
	this->Ki = Ki;
	this->Kd = Kd;

	double p_error = 0;
	double i_error = 0;
	double d_error = 0;
}

void PID::UpdateError(double cte) {
	d_error = cte - p_error; // since p_error = previous cte 
									// hence calc d_error 1st before we update p_error in the next line
	p_error = cte;			// proportional error which is cte itself
	i_error +=  cte;			// add prev i_error to current error --> accumulating errors
}

double PID::TotalError() {
	return Kp*p_error + Kd*d_error + Ki*i_error;
}

