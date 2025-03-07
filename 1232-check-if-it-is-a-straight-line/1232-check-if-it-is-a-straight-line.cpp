class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        double n = coordinates.size();
        if(n<3) return true;
       double x0 = coordinates[0][0];
       double x1 = coordinates[1][0];
       double y0 = coordinates[0][1];
       double y1 = coordinates[1][1];
       double initial_slopee = (y1-y0)/(x1-x0);

        for(double i = 2 ; i< n ; i++){
            double x = coordinates[i][0];
            double y = coordinates[i][1];
            double curr = (y-y0)/(x-x0);
            // ye ham nahi kr skte kyuki ye ek value check krke true hi return krta rhega 
            // if(initial_slopee == curr) return true;
            // if(initial_slopee != curr) return false;
            if( (y1-y0)*(x-x0) != (y-y0)*(x1-x0)) return false;
        }

        return true;
    }
};