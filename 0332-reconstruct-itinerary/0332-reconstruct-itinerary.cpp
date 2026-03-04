class Solution {
public:
    map<string, multiset<string>> graph;
    vector<string> res;
    void dfs(string src) {
        while (!graph[src].empty()) {
            string next = *graph[src].begin();
            graph[src].erase(graph[src].begin());
            dfs(next);
        }
        res.insert(res.begin(), src);
    }
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        for (auto& t : tickets) graph[t[0]].insert(t[1]);
        dfs("JFK");
        return res;
    }
};