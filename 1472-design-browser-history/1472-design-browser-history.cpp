class BrowserHistory {
    vector<string>mylist;
    int it;
public:
    BrowserHistory(string homepage) {
        mylist.push_back(homepage);
        it=0;
    }
    
    void visit(string url) {
        for(int i=mylist.size()-1;i > it ;i--){
            mylist.pop_back();
        }
        mylist.push_back(url);
        it++;
    }
    
    string back(int steps) {
        int curr=it-steps;
        if(curr < 0)
            curr=0;
        it=curr;
        return mylist[it];
    }
    
    string forward(int steps) {
        int curr=it+steps;
        if(curr >= mylist.size())
            curr=mylist.size()-1;
        it=curr;
        return mylist[it];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */