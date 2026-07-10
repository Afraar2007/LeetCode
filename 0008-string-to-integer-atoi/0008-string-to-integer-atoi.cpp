class Solution {
public:
    int myAtoi(string s) {
        int n=s.size();
        bool f1=false;
        bool st=false;
        int low=0;
        long long ans=0;
        while(low<n && (s[low]>'9' || s[low]<'0')){
            if(s[low]=='-'){
                f1=true;
                low++;
                break;
            }
            if(s[low]=='+'){
                low++;
                break;
            }
            if(s[low]==' '){
                low++;
                continue;
            }
            if(s[low]=='0'){
                break;
            }
            else return ans;
            low++;
        }
        while(low<n && s[low]=='0') low++;
        for(int i=low;i<n;i++){
            if(s[i]<='9' && s[i]>='0'){
                ans*=10;
                if(f1){
                    ans-=s[i]-'0';
                }
                else{
                    ans+=s[i]-'0';
                }
                if(ans<INT_MIN) return INT_MIN;
                if(ans>INT_MAX) return INT_MAX;
            }
            else{
                break;
            }
        }
        return ans;
    }
};