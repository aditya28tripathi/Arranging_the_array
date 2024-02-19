class Solution
{
    public:
        void Rearrange(int arr[], int n)
        {
            int i;
            vector<int>v;
            for(i=0;i<n;i++)
            {
                if(arr[i]<0)
                {
                    v.push_back(arr[i]);
                }
            }
            for(i=0;i<n;i++)
            {
                if(arr[i]>=0)
                {
                    v.push_back(arr[i]);
                }
            }
            for(i=0;i<n;i++)
            {
                arr[i]=v[i];
            }
        }
};
