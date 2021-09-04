#include<iostream>
#include<string>

using namespace std;

class Point{
public:
	int x = 0;
	int y = 0;
    
    Point() {};
    Point(const int& x, const int& y){
        this->x = x;
        this->y = y;
    }

	void print_point(const string& point_name){
        cout << "Point " << point_name << ": x = "
            << this->x << " y = " << this->y << endl;
	}
};

class Student{
public:
	string name = "Ivan";
	int age = 18;
	int height = 190;

	Student() {};
	Student(const string& name, const int& age, const int& height){
		this->name = name;
		this->age = age;
		this->height = height;
	}
    
    void print_student(){
        cout << "My friend is " << this->name << ". He is " << this->age
            << " years old and his height is " << this->height << "cm." << endl;
    }
    
    void set_group(const int& num){
        group = num;
    }
    
    void get_group(){
        cout << "group: " << group << endl;
    }
    
private:
    int group = 5;
};

Point operator +(const Point& a, const Point& b){
    return Point(a.x + b.x, a.y + b.y);
}

int main(){
	Point a, b, c;
    
	a.x = 3;
	a.y = 4;
    
    b.x = 10;
    b.y = 4;
    
    c = a + b;

	Student st1("Roman", 18, 180);
    cout << "Default value ";
    st1.get_group();
    
    st1.set_group(2);
    
    a.print_point("a");
    st1.print_student();
    c.print_point("sum");
    
    cout << "Changed value ";
    st1.get_group();
	
	return 0;
}
