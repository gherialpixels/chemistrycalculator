#ifndef CALCULATIONS_H
#define CALCULATIONS_H

// user inputs
double getVolume();
double getVolume_1(); // used for conversions
double getVolume_2(); // used in conversions
double getMole();
double getConc();
double getConc_1(); // used in conversions
double getConc_2(); // used in conversions
double getNoOfParticles();
double getMass();
double getMass_1(); // used in conversions
double getMass_2(); // used in conversions
double getMolarNumber();

// calculations
double calculateVol(double, double);
double calculateMol_1(double, double); // these three mole calculations have different parameters
double calculateMol_2(double);
double calculateMol_3(double, double);
double calculateConc(double, double);
double calculateNoOfParticles(double);
double calculateMass(double, double);
double calculateMR(double, double);

#endif // CALCULATIONS_H
