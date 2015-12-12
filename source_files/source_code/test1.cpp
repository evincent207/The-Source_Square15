#include "Grid.h"
#include <iostream>
using namespace std;

int main()
{
	Grid g = Grid( 4 );
	g.display();
	if ( !g.check() )
		cout<<"Not done yet." <<endl;
	g.swap ( 3, 2);
	g.display();
	if ( !g.check() )
		cout<<"Not done yet." <<endl;
	
	return 1;
}
