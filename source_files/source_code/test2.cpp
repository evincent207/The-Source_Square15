#include "Model.h"
#include<iostream>

int main ()
{
	Grid* g = new Grid( 4 );
	Model m = Model( g );
	char qcode ;
	int x;
	int y;
	int i;
	g->display();
	g->scramble();
	g->display();
	
	while ( qcode != 'q')
	{
		cout<<endl <<"Do you want to quit?: ";
		cin>>qcode;
	
		cout<<endl <<"enter the co-ordinates of the tile you want to move: ";
		cin>> x >> y;
		i = m.input( x, y);
		if ( i )
			break;
		
		
	}
	
	return 1;
}
