#include <iostream>

using namespace std;

class Solution {
public:
    string reverseStr(string s, int k) {
        int i = 0;
        string rs = s;
        string sb = "";
        while (i < rs.length()){
	    cout<<"current i is"<<i<<endl;
            sb = rs.substr(i, k);
            reverse(sb.begin(), sb.end());
            rs.replace(i, k, sb);
            i += 2*k;
        }
        
        return rs;
    }
};

int main()
{
    Solution sol;
    string s = "abcdefgh";
    string ret = sol.reverseStr(s, 2);

    cout<<ret<<endl;
}
