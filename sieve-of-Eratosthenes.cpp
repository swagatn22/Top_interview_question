class Solution {
public:
    int countPrimes(int n) {
        if(n == 0){
            return 0;
        }
        int a[n];
        for(int i=2; i<n; i++){
            a[i] = 1;
        }
        for(int i=2; i*i<n;i++){
            if(a[i] == 1){
                for(int j = i*i; j<n; j += i){
                    a[j]  = 0;
                }
            }
        }
        int count = 0; 
        for(int i=2; i<n;i++){
            if(a[i] == 1){
                count ++;
            }
        }
        return count;
    }
};
