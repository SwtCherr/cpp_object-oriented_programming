//Злобина Вера Б02-002

#include<iostream>
#include<vector>

using namespace std;

class SpacePort{
public:
    vector<bool> docks {};
    unsigned int size = 0;
  
    SpacePort(){};
    SpacePort(const unsigned int& size) : docks(size, true){
        this->size = size;
    };
    
    bool requestLanding(const unsigned int& dockNumber){
        if (dockNumber >= size){
            return false;
        } else if (docks[dockNumber] == true){
            docks[dockNumber] = false;
            return true;
        } else return false;
    }
    
    bool requestTakeoff(const unsigned int& dockNumber){
        if (dockNumber >= size){
            return false;
        } else if (docks[dockNumber] == false){
            docks[dockNumber] = true;
            return true;
        } else return false;
    }
    
};

int main(){
    SpacePort s(5);
    
    cout << boolalpha << s.requestLanding(0) << endl;
    cout << boolalpha << s.requestLanding(4) << endl;
    cout << boolalpha << s.requestLanding(5) << endl;
    
    cout << boolalpha << s.requestTakeoff(0) << endl;
    cout << boolalpha << s.requestTakeoff(4) << endl;
    cout << boolalpha << s.requestTakeoff(5) << endl;
    
	return 0;
}
