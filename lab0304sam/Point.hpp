#ifndef POINT_H
#define POINT_H





class Point {
	public:
		float x;
		float y; 

		
		void read_point();
		Point() {
			
		}
		static float dist(Point A, Point B);
};

#endif POINT_H