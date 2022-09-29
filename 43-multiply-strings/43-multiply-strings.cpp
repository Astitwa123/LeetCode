class Solution {
public:
    string multiply(string nums1, string nums2) {
    if(nums1=="0"|| nums2=="0")return "0";
        int i,j;
    vector<int>num(nums1.size()+nums2.size(),0);
    for( i=nums1.size()-1;i>=0;i--)
    {
        for(j=nums2.size()-1;j>=0;j--)
        {
            num[i+j+1]+=(nums1[i]-'0')*(nums2[j]-'0');
            num[i+j]+=num[i+j+1]/10;
            num[i+j+1]%=10;
                         
        }
    }
            i=0;             
           while(i<num.size()&& num[i]==0)i++;
            string res="";
            while(i<num.size())res.push_back(num[i++]+'0');
            return res;
        
    }
};