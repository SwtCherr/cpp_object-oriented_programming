//Злобина Вера Б02-002

#include<iostream>

using namespace std;

class GasHolder{
public:
    float v = 0;
    float p = 0;
    float T = 273;
    float mol = 0;
    float R = 8.31;
	
	GasHolder(){};
    GasHolder(const float& v){
        this->v  = v;
    }
    
    ~GasHolder(){};
    
    void inject(const float& m, const float& M){
        p += T * R / v * m / M;
        mol += m / M;
    }
    
    void heat(const float& dt){
        T += dt;
        p = T * R * mol / v;
    }
    
    void cool(const float& dt){
        T -= dt;
        p = T * R / v * mol;
        if (T < 0) {
            T = 0;
            p = 0;
        }
    }
    
    float getPressure(){
        return p;
    }

};

int main(){

    GasHolder h(1.0);
    h.inject(29, 29);
    cout << "Pressure after operation: " << h.getPressure() << " Pa" << endl;
    h.inject(29, 29);
    cout << "Pressure after operation: " << h.getPressure() << " Pa" << endl;
    h.heat(273);
    cout << "Pressure after operation: " << h.getPressure() << " Pa" << endl;
    h.cool(373);
    cout << "Pressure after operation: " << h.getPressure() << " Pa" << endl;
    h.cool(373);
    cout << "Pressure after operation: " << h.getPressure() << " Pa" << endl;
	return 0;
}
