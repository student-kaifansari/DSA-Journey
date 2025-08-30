#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>   // for max()

using namespace std;

int worth(const string &s) {
    int val = 0;
    for (char c : s) val += (c - 'a' + 1);
    return val;
}

int N, M, budget;
vector<string> strs;
vector<int> cost, val;
vector<vector<int>> conflict; // indices that conflict
int best = 0;

void dfs(int i, int curCost, int curVal, vector<bool> &used) {
    if (curCost > budget) return;               // over budget
    if (i == N) {
        best = max(best, curVal);               // reached end
        return;
    }

    // Option 1: skip string i
    dfs(i + 1, curCost, curVal, used);

    // Option 2: take string i (if no conflict)
    bool ok = true;
    for (int c : conflict[i]) {
        if (used[c]) { ok = false; break; }
    }
    if (ok && curCost + cost[i] <= budget) {
        used[i] = true;
        dfs(i + 1, curCost + cost[i], curVal + val[i], used);
        used[i] = false;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    strs.resize(N);
    cost.resize(N);
    val.resize(N);
    conflict.assign(N, {});

    for (int i = 0; i < N; i++) cin >> strs[i];
    for (int i = 0; i < N; i++) cin >> cost[i];
    for (int i = 0; i < N; i++) val[i] = worth(strs[i]);

    unordered_map<string, int> idx;
    for (int i = 0; i < N; i++) idx[strs[i]] = i;

    for (int i = 0; i < M; i++) {
        string a, b;
        cin >> a >> b;
        int u = idx[a], v = idx[b];
        conflict[u].push_back(v);
        conflict[v].push_back(u);
    }

    cin >> budget;

    vector<bool> used(N, false);
    dfs(0, 0, 0, used);

    cout << best << "\n";
    return 0;
}

