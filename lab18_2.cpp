#include<iostream>
#include<cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *,Rect *);

int main(){
	Rect p1,p2;
    Rect *g1=&p1;
    Rect *g2=&p2;
	cout << "Please input Rect 1 (x y w h): ";
	cin>>p1.x>>p1.y>>p1.w>>p1.h;
	cout << "Please input Rect 2 (x y w h): ";
	cin>>p2.x>>p2.y>>p2.w>>p2.h;
	
	cout << "Overlap area = "<<overlap(g1,g2);	
	return 0;
}
double overlap(Rect *p1,Rect *p2){
	double f1,f2;
if(abs((*p1).x-(*p2).x)<(*p1).w){
	f1=(*p1).w-abs((*p1).x-(*p2).x);
	if((*p2).w<(*p1).w){
f1=(*p2).w;
	}
}
if(abs((*p1).y-(*p2).y)<(*p1).h){
	f2=(*p1).h-abs((*p1).y-(*p2).y);
	if((*p2).h<(*p1).h){
f2=(*p2).h;
	}
}
return f1*f2;
}
