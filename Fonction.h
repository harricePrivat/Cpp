#ifndef __MAIN__
#define __MAIN__
#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>
#include <cmath>
#include "Cercle.h"
using namespace std;

vector<Cercle> CreatorCercle(int nbrCercle);
void DisplayCercle(vector<Cercle> v);
float distance(Cercle c1,Cercle c2);
Cercle move(Cercle c1,Cercle c2);
bool ecartement(vector<Cercle> v);

#endif