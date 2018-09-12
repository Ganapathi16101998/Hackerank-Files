int minimumSwaps(vector<int> arr) 
{
    int n=arr.size();
    pair<int,int> arrPos[n];
    for(int i=0;i<arr.size();i++)
    {
        arrPos[i].first=arr[i];
        arrPos[i].second=i;
    }
    sort(arrPos,arrPos+n);
    vector<bool> vis(n,false);
    int ctr=0;
    for(int i=0;i<n;i++)
    {
        if(vis[i]||arrPos[i].second==i)
            continue;
        int cycle=0;
        int j=i;
        while(!vis[j])
        {
            vis[j]=1;
            j = arrPos[j].second;
            cycle++;
        }
        ctr+=(cycle-1);
    }
    return ctr;
    
}
