class Solution {
public:
    int reverse(int x) {//revise
         int ans=0;
    if(x==0){
        cout<<0<<endl;
     
    }
    else{
        while(x!=0){
            int digit=x%10;
           if((ans>INT_MAX/10) || (ans < INT_MIN/10)){
            return 0;
           }
           else{
         ans = (ans*10) +digit;
        x=x/10;}
        }

    }
    return ans;
    }
};