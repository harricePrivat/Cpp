#include "Fonction.h"

float distance(Cercle c1,Cercle c2){
	int distance=pow((c1.getCentreX()-c2.getCentreX()),2);
	int distance1=pow((c1.getCentreY()-c2.getCentreY()),2);
	return sqrt((distance1+distance));
}
vector<Cercle> CreatorCercle(int nbrCercle){
	vector<Cercle> v(nbrCercle);
	for(int i=0;i<nbrCercle;i++){
			int y=rand()%10;
			int x=rand()%10;
			int color =rand()%7;
			int rayon=rand()%5+1;
			v[i].setCentreX(x);
			v[i].setCentreY(y);
			v[i].setRayon(rayon);
			v[i].setColor(color);
			}
		return v;
}

void DisplayCercle(vector<Cercle> v){
	for(int i=0;i<v.size();i++ ){
		cout <<"Cercle: "<<i+1<<" "<<v[i].getColor()<<endl;
		cout <<"Le rayon du cercle: "<<v[i].getRayon()<<endl;
		cout <<"Centre: "<<v[i].getCentreX()<<" "<<v[i].getCentreY()<<endl<<endl;
	}
}


Cercle move(Cercle c1,Cercle c2){
	while(distance(c1,c2)<c1.getRayon()+c2.getRayon()){
		//cout <<distance(c1,c2)<<endl;
		c2.setCentreX(c2.getCentreX()+1);
		c2.setCentreY(c2.getCentreY()+1);
	}
	return c2;
}

bool ecartement(vector<Cercle> v){
	for(int i=0;i<v.size()-1;i++){
		for(int j=i+1;j<v.size();j++){
			if(distance(v[i],v[j])<v[i].getRayon()+v[j].getRayon()){
				return false;
			}
		}
	}
	return true;
}