class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int nodelete=arr[0];
        int onedelete=0;
        int res=arr[0];
        for(int i=1;i<arr.size();i++){
            int old_nodelete=nodelete;
            int old_onedelete=onedelete;
            nodelete = max(old_nodelete + arr[i], arr[i]);
            onedelete = max(old_onedelete + arr[i], old_nodelete);
            res = max(res, max(nodelete, onedelete));

        }
        return res;

        
    }
};