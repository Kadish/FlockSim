#ifndef ALGO_H
#define ALGO_H
#include "Node.h"
#define VISION_RADIUS 50.0
#define SEPARATION_RADIUS 10.0
#define EAT_RADIUS 5.0

class Algo { 
	public:
		double separation;
		double cohesion;
		double alignment;
		double flee;

		Algo() : separation(), cohesion(), alignment(), flee() {}
		Algo(double sep, double coh, double ali) : separation(sep), cohesion(coh), alignment (ali), flee() {}
		Algo(double sep, double coh, double ali, double fl) : separation(sep), cohesion(coh), alignment (ali), flee(fl) {}
		double calcWeight(Node* a, Node* b);
		double calcWeightSq(Node* a, Node* b);
		double calcWeightVs(Node* a, Node* b);
};

#endif

/*
Algo
	- Params
	* We could use this as an abstract class:
       		- update(Graph g)
		* children implement different flocking algorithms
		* this would mean Graph is basically just a data structure
*/
