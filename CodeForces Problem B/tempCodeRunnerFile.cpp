for(int i=0; i<m;i++){
        int take = min(n, s[i].second);
        ans = take * s[i].first;
        n =  n - take;
    }