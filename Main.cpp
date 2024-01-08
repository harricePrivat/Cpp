#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>
#include <cmath>
#include "Cercle.h"
#include "Fonction.h"
using namespace std;



int main(){
	Cercle *cercle=new Cercle();
	srand(static_cast<int>(time(0)));
	int nbrCercle=rand()%6+2;
	vector<Cercle> v;
	v=CreatorCercle(nbrCercle);
	cout <<"\t\tETAT AVANT LE DEPLACEMENT"<<endl;
	DisplayCercle(v);
	while(ecartement(v)!=true){
		for(int i=0;i<v.size()-1;i++){
		for(int j=i+1;j<v.size();j++){
			if(distance(v[i],v[j])<v[i].getRayon()+v[j].getRayon()){
				v[j]=move(v[i],v[j]);
			}
		}
	}	
	}
	
	cout <<"\n\n\t\tETAT APRES LE DEPLACEMENT"<<endl;	
	DisplayCercle(v);	
		return 0;
}

