class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(auto it:stones){
            pq.push(it);
        }
        while(pq.size()>1){
            int top=pq.top();
            pq.pop();
            int sec_top=pq.top();
            pq.pop();
            int temp=top-sec_top;
            if(temp)
                pq.push(temp);
        }
        if(pq.empty())
            return 0;
        return pq.top();
        
        
    }
};