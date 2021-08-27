class Solution {
public:
    bool isHappy(int n) {
        int sum = 0, summ;
        vector<int> vec;
        auto it = vec.end();
        while(1){
            sum = 0;
             while(n > 0){
                sum += ( n % 10 ) * (n % 10);
                n = n/10;
            }
            n = sum;
            cout<<sum<< " ";
            it = find(vec.begin(), vec.end(), sum);
            
            if(it != vec.end())
                break;
            vec.push_back(sum);
            summ = 0;
            while(sum >0){
                summ += sum %10;
                sum = sum/10;
            }
            if(summ == 1)
                break;
        }
        
           cout<<sum;
        if(summ == 1)
            return true;
        else
            return false;
    }
};