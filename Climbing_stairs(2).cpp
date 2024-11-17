class Solution {
public:
    
    int climbStairs(int n) {
        int pre = 1;
        int cur = 1;
        int next=-1;
        for(int i=2; i<=n; i++){
            next = pre + cur;
            pre = cur;
            cur = next;
        }
        if(next == -1){
            return cur;
        }
        return next;
    }
};
