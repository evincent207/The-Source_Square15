#ifndef GRID_H
#define GRID_h
const int max_size = 4;
class Grid {
	
	private:
		int size;
		int sol[max_size][max_size];
		
	public:
	
	//---constructor---//
		Grid( int );
	//---functions---//
		void scramble();
		bool check();
		void swap( int , int);
		void display();
		int contents[max_size][max_size];
		
	
};
#endif
