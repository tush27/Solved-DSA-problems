class SmallestInfiniteSet {
    int mini;
    set<int>s;
public:
    SmallestInfiniteSet() {
        mini=1;
    }
    
    int popSmallest() {
        s.insert(mini);
        int temp=mini;
        while(s.find(mini)!=s.end()){
          mini++;   
        }
        return temp;
    }
    
    void addBack(int num) {
        if(s.find(num)!=s.end()){
            mini=min(mini,num);
            s.erase(num);
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */