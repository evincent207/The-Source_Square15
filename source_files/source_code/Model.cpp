#include "Model.h"
using namespace std;

Model::Model(Grid* grid) {
	//grid member variable grid that has sol (solution) and contents (played grid) as members
	this->grid = grid;

	this->time = 0;  //increment by one for every second passed; INCREMENTED IN MAIN
	this->moves = 0;  //increment by one for every call of Grid::update();
}

bool Model::input(int x, int y) {
	
	this->grid->swap(x, y);
	this->grid->display();
	this->moves++;
	int i = this->grid->check();
	return i;
}

Model::~Model()
{}
