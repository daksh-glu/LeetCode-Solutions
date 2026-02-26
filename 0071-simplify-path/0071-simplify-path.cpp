class Solution {
public:
    string simplifyPath(string path) {
        vector<string> st;
        string temp;
        
        for (int i = 0; i < path.size(); i++) {
            if (path[i] == '/') continue;
            
            temp.clear();
            while (i < path.size() && path[i] != '/') {
                temp += path[i];
                i++;
            }
            
            if (temp == ".") continue;
            else if (temp == "..") {
                if (!st.empty()) st.pop_back();
            } else {
                st.push_back(temp);
            }
        }
        
        if (st.empty()) return "/";
        
        string result;
        for (string &dir : st) {
            result += "/" + dir;
        }
        
        return result;
    }
};