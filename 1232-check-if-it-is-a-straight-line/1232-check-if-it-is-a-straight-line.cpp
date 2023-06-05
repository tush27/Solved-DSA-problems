class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        float num = (c[1][0] - c[0][0]);
        float deno = (c[1][1] - c[0][1]);
        float slope;
        if(deno == 0)
            slope = INT_MAX;
        else
            slope =  num / deno;
        
        for(int i=2;i<c.size();i++){
            float tn = (c[i][0] - c[i-1][0]);
            float td = (c[i][1] - c[i-1][1]);
            float temp;
            if(td == 0)
                temp = INT_MAX;
            else
                temp = tn / td;
            
            if(temp!=slope)
                return false;
        }
        return true;        
    }
};