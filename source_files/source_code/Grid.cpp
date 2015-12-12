#include "Grid.h"
#include<iostream>
#include <cstdlib>
#include <ctime>
#include <cstdio>
using namespace std;


//---default---//
Grid::Grid(int size) {
	//Initialize member variable
	this->size = size;

	//Fill grids with integers 1 to size^2 - 1
	int filler = 1;
	for (int a = 0; a < size; a++) {
		for (int b = 0; b < size; b++) {
			if (filler < (size * size)) {
				sol[a][b] = filler;
				contents[a][b] = filler;
				filler++;
			} else {
				sol[a][b] = 0;
				contents[a][b] = 0;
			}
		}
	}
	//Do initial shuffling of numbers on play grid
	//this->scramble();
}


//---public member functions---//
void Grid::scramble()
{
	srand( time( NULL ));
	for( int i = 0; i < size ; i++ )
	{
		for ( int j = 0; j < size; j++ )
		{
			int n = rand() % size;
			int m = rand() % size;
			
			int temp = contents[i][j];
			contents[i][j] = contents[n][m];
			contents[n][m] = temp;
		}
	}
}

bool Grid::check()
{
	for ( int i = 0; i < size; i++ )
	{
		for ( int j = 0; j < size; j++ )
		{
			if ( contents[i][j] != sol[i][j] )
				return 0;
		}
	}
	cout<<"Solution achieved" <<endl;
	return 1;
}

void Grid::display()
{
	cout<<endl <<"---------------------" <<endl;
	for ( int i = 0; i < size; i++ )
	{
		for ( int j = 0; j < size; j++ )
		{
			if ( contents[i][j] < 10 )
				cout<<contents[i][j] <<"  ";
			else
				cout<<contents[i][j] <<" ";
		}
		cout <<endl;
	}
	cout<< endl <<"---------------------" <<endl;
}

void Grid::swap(int a, int b) {
	//Find indices of empty square
	int empty_a, empty_b = 0;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (contents[i][j] == 0) {
				empty_a = i;
				empty_b = j;
				break;
			}
		}
	}

	//Swap inputted square with empty square
	contents[empty_a][empty_b]  = contents[a][b];
	contents[a][b] = 0;
	
}
