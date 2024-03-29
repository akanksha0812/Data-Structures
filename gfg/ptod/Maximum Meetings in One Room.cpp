//User function Template for C++

class Solution{
public:
    vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F){
         vector<pair<pair<int,int>,int>> temp;
        
        for(int i = 0; i<N; i++){
            temp.push_back({{F[i],S[i]},i+1});
        }
        sort(temp.begin(),temp.end());
        int finishtime = temp[0].first.first;// here is first finish time of meeting
        vector<int> result;
        result.push_back(temp[0].second);
        for(int i = 1; i<N; i++){
            if(temp[i].first.second>finishtime){
                result.push_back(temp[i].second);
                finishtime = temp[i].first.first;
            }
        }
        sort(result.begin(),result.end());
        return result;
        
    }
};
