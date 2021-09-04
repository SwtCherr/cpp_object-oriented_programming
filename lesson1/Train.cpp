//Злобина Вера Б02-002

#include<iostream>


using namespace std;

class Train{
public:
    double weight = 0;
    double velocity = 0;
	double coordinate = 0;

    Train(){
        cout << endl << "Hello, Danila!" << endl;
    }
    
	Train(const double& weight){
		this->weight = weight;
	}
	
	void move(const double& dt){
        coordinate += dt * velocity;
	}

    void accelerate(const double& dp){
        double p = weight * velocity;
        p += dp;
        velocity = p / weight;
    }

    double getX(){
        return coordinate;
    }
};

int main(){
    
    Train t(10);
    t.accelerate(1);
    t.move(1);
    cout << "Current X: " << t.getX() << endl;
    t.move(1);
    cout << "Current X: " << t.getX() << endl;
    t.accelerate(-2);
    t.move(3);
    cout << "Current X: " << t.getX() << endl;
	return 0;
};

