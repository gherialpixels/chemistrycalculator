#include "stdafx.h"
#include <iostream>
#include <string>
#include "constants.h"

using namespace std;

//user inputs

double getVolume()
{
	cout << "Please enter the volume of the solution(in dm3)\n";

	double vol;
	cin >> vol;

	double const k_volume(vol);

	return k_volume;
}

double getVolume_1() // used for conversion
{
	cout << "Please enter the volume of the solution(in cm3)\n";

	double vol;
	cin >> vol;

	double const k_volume(vol);

	return k_volume;
}

double getVolume_2()
{
	cout << "Please enter the volume of the solution(in litre)\n";

	double vol;
	cin >> vol;

	double const k_volume(vol);

	return k_volume;
}

double getMole()
{
	cout << "Please enter the moles of the compound\n";

	double mol;
	cin >> mol;

	double const moles(mol);

	return moles;
}

double getConc() // 'Conc' short for concentration
{
	cout << "Please enter the concentration of the compound in the solution(in mol.dm-3)\n";

	double conc;
	cin >> conc;

	double const concentration(conc);

	return concentration;
}

double getConc_1() // 'Conc' short for concentration; used in conversions
{
	cout << "Please enter the concentration of the compound in the solution(in g.cm-3)\n";

	double conc;
	cin >> conc;

	double const concentration(conc);

	return concentration;
}

double getConc_2() // 'Conc' short for concentration; used in conversions
{
	cout << "Please enter the concentration of the compound in the solution(in g.dm-3)\n";

	double conc;
	cin >> conc;

	double const concentration(conc);

	return concentration;
}

double getNoOfParticles()
{
	cout << "Please enter the no. of particles of the compound\n";

	double nop;
	cin >> nop;

	double const no_of_particles(nop);

	return no_of_particles;
}

double getMass()
{
	cout << "Please enter the mass of the compound(in g)\n";

	double mass;
	cin >> mass;

	double const k_mass(mass);

	return k_mass;
}

double getMass_1()
{
	cout << "Please enter the mass of the compound(in kg)\n";

	double mass;
	cin >> mass;

	double const k_mass(mass);

	return k_mass;
}

double getMass_2()
{
	cout << "Please enter the mass of the compound(in mg)\n";

	double mass;
	cin >> mass;

	double const k_mass(mass);

	return k_mass;
}

double getMolarNumber()
{
	cout << "Please enter the atomic/molar number of the element/compound(in g.mol-1)\n";

	double mr;
	cin >> mr;

	double const k_molar_number(mr);

	return k_molar_number;
}

// calculations to give answer to user
double calculateNoOfParticles(double mol)
{
	double no_of_particles = mol * constants::k_avagadro;

	return no_of_particles;
}

double calculateVol(double mol, double conc)
{
	double vol = mol / conc;

	return vol;
}

double calculateMol_1(double vol, double conc) // calculates moles with volume and concentration
{
	double mol = vol * conc;

	return mol;
}

double calculateMol_2(double no_of_particles) // derived from number of particles
{
	double mol = no_of_particles / constants::k_avagadro;

	return mol;
}

double calculateMol_3(double mass, double molar_number) // derived from mass and molar number
{
	double mol = mass / molar_number;

	return mol;
}

double calculateConc(double mol, double vol) // 'Conc' short for concentration
{
	double conc = mol / vol;

	return conc;
}

double calculateMass(double mol, double molar_number)
{
	double mass = mol * molar_number;

	return mass;
}

double calculateMR(double mol, double mass) // MR stands, for some reason, for molar mass
{
	double molar_mass = mass / mol;

	return molar_mass;
}