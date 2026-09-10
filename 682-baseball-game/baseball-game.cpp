class Solution {
public:

    int calPoints(vector<string>& ops) {
        vector<int> score;
        int total=0;

        for(int i=0;i<ops.size();i++){
            if(ops[i] != "+" && ops[i] != "D" && ops[i] != "C") score.push_back(stoi(ops[i]));

            if(ops[i]=="+"){
                int sum=0;
                int first =score.back();
                int second = score[score.size()-2];
                sum=first+second;
                score.push_back(sum);
            }

            if(ops[i]=="D"){
                int prev=score.back();
                int doub= 2*(prev);
                score.push_back(doub);
            }

            if(ops[i]=="C"){
                score.pop_back();
            }
        }

        for(int i=1;i<=score.size();i++){
            int value = score[score.size()-i];
            total+= value;
            

        }
        return total;
        
    }
};