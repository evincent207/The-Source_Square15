#ifndef MODEL_H_
#define MODEL_H_

#include "Grid.h"
using namespace std;

class Model {

public:

	Model(Grid*);
	~Model();

	bool input(int, int);

	Grid* grid;
	int time;
	int moves;

};

#endif
