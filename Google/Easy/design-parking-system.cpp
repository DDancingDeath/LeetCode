//1603. Design Parking System
//https://leetcode.com/problems/design-parking-system/

//Time - O(1)
//Space - O(1)

class ParkingSystem {
    
    vector<int> carCount;
public:
    ParkingSystem(int big, int medium, int small) {
        carCount = {big, medium, small};
    }
    
    bool addCar(int carType) {
        return carCount[carType-1]-- > 0;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
