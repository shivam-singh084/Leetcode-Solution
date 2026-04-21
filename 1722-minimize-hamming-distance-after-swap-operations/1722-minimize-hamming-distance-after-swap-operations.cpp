class Solution {
public:
    void dfs(int node, vector<vector<int>>& adj, vector<bool>& vis, vector<int>& comp) {
        vis[node] = true;
        comp.push_back(node);
        
        for (auto &i : adj[node]) {
            if (!vis[i]) {
                dfs(i, adj, vis, comp);
            }
        }
    }

    int minimumHammingDistance(vector<int>& source, vector<int>& target, vector<vector<int>>& allowedSwaps) {
        int n = source.size();
        
        vector<vector<int>> adj(n);
        for (auto &e : allowedSwaps) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        vector<bool> vis(n, false);
        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                vector<int> comp;
                dfs(i, adj, vis, comp);

                unordered_map<int, int> freq;

                for (auto &idx : comp) {
                    freq[source[idx]]++;
                }

                for (auto &idx : comp) {
                    if (freq[target[idx]] > 0) {
                        freq[target[idx]]--;
                    } else {
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};