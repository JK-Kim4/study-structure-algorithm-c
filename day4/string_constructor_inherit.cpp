class Point
{
	private :
		int x;
		int y;
	public :
		Point() {x=0; y=0;}
}

class Rectangle : public Point
{
	private :
		int x2;
		int y2;
	public :
		Rectangle() : Point() {x2 = 0; y2 = 0};
}
