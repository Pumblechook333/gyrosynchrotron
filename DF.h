#pragma once

class DF
{

 public:

// single integer
 int N_intervals{};
 // array of 10 double values
 double E_x[10]{};
 // array of 9 integers
 int logscale[9]{};
 // two seperate double values
 double nb{}, EPS_mu0{};
 // integer
 int PK_on;


 virtual void Fp(double p, double p_z, double p_n,
	             double *f, double *df_dp, double *df_dalpha) = 0;

 virtual void FE(double E, double mu, 
	             double *f, double *df_dE, double *df_dmu, 
				 double *g1, double *g2) = 0;

 DF()
 {
  PK_on = 0;
 }

 virtual ~DF() {};

};