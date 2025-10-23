//include the file only one time in project
#pragma once

class Rectangle
{
	private:
		int lenght = 0;
		int height = 0;
	
	public:

		Rectangle(int w, int h)
		{
			lenght = w;
			height = h;
		}
	
		int GetArea() const;
	
	protected:
	
	
};
