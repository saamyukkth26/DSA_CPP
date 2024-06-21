class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int initial_satisfaction = 0;
        for (int i=0;i<grumpy.size();i++)
        {
            if (grumpy[i]==0)
            {
                grumpy[i] = customers[i];
                initial_satisfaction += customers[i];
            }
            else
            {
                grumpy[i] = 0;
            }
        }
        multimap<int,int> ump;
        int k = minutes;
        int sum1 = 0;
        int sum2 = 0;
        for (int i=0;i<k;i++)
        {
            sum1+=customers[i];
            sum2+=grumpy[i];
            
        }
        cout<<"first insert"<<endl;
        ump.insert(pair<int, int>(sum1, sum2));
        for (int i=k;i<customers.size();i++)
        {
            sum1 += customers[i]-customers[i-k];
            cout<<"sum1 "<<sum1<<endl;
            sum2+=grumpy[i]-grumpy[i-k];
            ump.insert(pair<int, int>(sum1, sum2));
        }
        int diff = 0;
        for (auto i = ump.begin();i!=ump.end();i++)
        {
            cout<<"first "<<i->first<<" second "<<i->second<<endl;
            diff = max(diff,i->first-i->second);
        }
        return initial_satisfaction + diff;
    }
};