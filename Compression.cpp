void compression(vector<int> &org) {
    vector<int> cp(org.size());
    rep(i, org.size()) cp[i] = org[i];
 
    sort(cp.begin(), cp.end());
    cp.erase(unique(cp.begin(), cp.end()), cp.end());
    rep(i, org.size()) {
        int id = lower_bound(cp.begin(), cp.end(), org[i]) - cp.begin();
        org[i] = id;
    }
}