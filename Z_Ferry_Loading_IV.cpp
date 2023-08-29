#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        deque<int> left;
         deque<int> right;

        int l, m, total = 0;
        cin >> l >> m;
        for (int i = 0; i < m; i++)
        {
            int a;
            string b;
            cin >> a ;cin>>b;
            
            
            total += a;
            if (b.compare("left")==false)
            {
                left.push_back(a);
            }
            else 
            {
                right.push_back(a);
            }
        }
        //  for (deque<int>::iterator it = left.begin(); it != left.end(); ++it){
        //     cout<<*it<<endl;
        //  }
        // for (deque<int>::iterator it = right.begin(); it != right.end(); it++)
        //     {
        //       cout<<*it<<endl;
        //     }
        
     //    cout<<total<<endl;
        int c = 0, trans = 0;
        l =( l * 100);
        while (total != trans)
        {
            int parhcce = 0;
            for (deque<int>::iterator it = left.begin(); it != left.end(); it++)
            {
                parhcce += *it;
                
               // left.pop_front();
                if (parhcce >= l)
                {
                    c++;
                    break;
                }
                trans += *it;
                left.pop_front();
            }
            if(parhcce<l && left.empty())c++;
            // cout<<parhcce<<endl;
            parhcce = 0;
            for (deque<int>::iterator it = right.begin(); it != right.end(); it++)
            {
                parhcce += *it;
                
               // right.pop_front();
                if (parhcce >=l)
                {
                    c++;
                    break;
                }
                trans += *it;
                 right.pop_front();
            }
            if(parhcce<l && right.empty())c++;
        }
      cout<<c<<endl;  
    }
    return 0;
}