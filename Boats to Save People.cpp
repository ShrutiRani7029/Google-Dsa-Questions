class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n=people.size();
        sort(people.begin(),people.end());
        int left=0,right=n-1;
        
        int boats=0;
        while(left<=right)
        {
            if(people[left] + people[right]<=limit){
                left++;
                right--;
            }
            else right--;
            boats++;
        }
        return boats;
    }
};
