#include "Cercle.h"
#include <string>
using namespace std;
	int Cercle::getRayon(){return rayon;}
	void Cercle::setRayon(int r){ rayon=r;}
	int Cercle::getCentreX(){return centre.getX();}
	int Cercle::getCentreY(){return centre.getY();}
	void Cercle::setCentreX(int X){centre.setX(X);}
	void Cercle::setCentreY(int Y){centre.setY(Y);}
	void Cercle::setColor(int x){
		string tab[7]={"Noir","Bleu","Vert","Orange","Jaune","Blanc"};
		color= tab[x];
	}
	string Cercle::getColor(){
		return color;
	}
Cercle::Cercle(){}
Cercle::~Cercle(){}