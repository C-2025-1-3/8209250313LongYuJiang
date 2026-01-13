#ifndef POINT_H
#define POINT_H

class Point {
public:
    Point();                    
    Point(int x_val, int y_val);  

    void setPoint(int i, int j);  
    void setXY(int x_val, int y_val);  
    void display() const;        
    int getX() const;             
    int getY() const;           

private:
    int x;  
    int y;  
};
#endif 

