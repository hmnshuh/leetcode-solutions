class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> arr;
        
        for(int i=left; i<=right;i++){

            int num=i;
            bool value =true;

                while(num>0){
                    int l_digit = num%10;

                    if(l_digit==0){
                        value =false;
                        break;
                    }

                    if(i%l_digit!= 0){
                        value=false;
                        break;
                    }

                    num=num/10;
        }
        if(value){
            arr.push_back(i);
        }

        }
return arr;
       
    }
};