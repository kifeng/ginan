
#ifndef ___WRITEMONGO_HPP__
#define ___WRITEMONGO_HPP__


#include <set>

using std::set;

#include "satSys.hpp"
#include "mongo.hpp"


struct TestStatistics
{
	int		numMeas				= 0;
	double	sumOfSquaresPre		= 0;
	double	sumOfSquaresPost	= 0;
	double	averageRatioPre		= 0;
	double	averageRatioPost	= 0;
	double	chiSq				= 0;
	double	dof					= 0;
	double	chiSqPerDof			= 0;
	double	qc					= 0;
};

void mongoMeasResiduals(
	GTime				time,
	vector<ObsKey>&		obsKeys,
	VectorXd&			prefits,
	VectorXd&			postfits,
	MatrixXd&			variance,
	string				suffix = "",
	int					beg = 0,
	int					num = -1);

void mongoMeasComponents(
	KFMeas&		kfMeas);

void mongoStates(
	KFState&			kfState,
	string				suffix = "");

void mongoMeasSatStat(
	StationMap&			stationMap);

void mongoTestStat(
	KFState&			kfState,
	TestStatistics&		statistics);

#endif

