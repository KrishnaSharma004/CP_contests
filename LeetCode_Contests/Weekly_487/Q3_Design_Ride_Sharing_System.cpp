class RideSharingSystem {
public:
    queue<int> riderQueue;
    queue<int> driverQueue;
    unordered_set<int> availableRiders;  
    unordered_set<int> matchedRiders;    
    unordered_set<int> availableDrivers; 
    unordered_set<int> cancelledRiders;
    RideSharingSystem() {
        
    }
    
    void addRider(int riderId) {
        if (availableRiders.find(riderId) != availableRiders.end() || 
            matchedRiders.find(riderId) != matchedRiders.end() ||
            cancelledRiders.find(riderId) != cancelledRiders.end()) {
            return;
        }
        
        riderQueue.push(riderId);
        availableRiders.insert(riderId);
    }
    
    void addDriver(int driverId) {
        if (availableDrivers.find(driverId) != availableDrivers.end()) {
            return;
        }
        
        driverQueue.push(driverId);
        availableDrivers.insert(driverId);
    }
    
    vector<int> matchDriverWithRider() {
         bool rimovexalu = false;

        while (!riderQueue.empty()) {
            int frontRider = riderQueue.front();
            if (cancelledRiders.find(frontRider) != cancelledRiders.end()) {

                riderQueue.pop();
                cancelledRiders.erase(frontRider);
                availableRiders.erase(frontRider);
            } else {
                break;
            }
        }
        if (driverQueue.empty() || riderQueue.empty()) {
            return {-1, -1};
        }
        
        int driverId = driverQueue.front();
        int riderId = riderQueue.front();

        rimovexalu = true;

        driverQueue.pop();
        riderQueue.pop();
        

        availableDrivers.erase(driverId);
        availableRiders.erase(riderId);
        

        matchedRiders.insert(riderId);
        

        rimovexalu = false;
        
        return {driverId, riderId};
    }
    
    void cancelRider(int riderId) {
        if (availableRiders.find(riderId) != availableRiders.end() && 
            matchedRiders.find(riderId) == matchedRiders.end()) {
            cancelledRiders.insert(riderId);
        }
    }
}
