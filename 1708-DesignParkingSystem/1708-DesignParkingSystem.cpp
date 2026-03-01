// Last updated: 01/03/2026, 20:20:23
class ParkingSystem {
public:
int space[3];
    ParkingSystem(int big, int medium, int small) {
        space[0] = big; //0(1) -> big 2
        space[1] = medium;
        space[2] = small;
    }
    
    bool addCar(int carType) {
        if(space[carType-1] > 0){
            space[carType - 1]--;
            return true;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */