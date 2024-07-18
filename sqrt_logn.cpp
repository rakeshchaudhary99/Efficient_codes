#ifdef ONPC
    #define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
#define char unsigned char

using namespace std;
// mt19937 rnd(239);
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());

typedef long long ll;
typedef long double ld;

int sqrt(int x)
{
    int ans;
    int low=1;
    int high=x;
    while(low <= high)
    {
         int mid=(low+high)/2 ;
         int midSq=mid*mid;
         if(midSq==x)
         {
             return mid;

         }
         else if (midSq > x){
             high=mid-1;
         }
         else {
             low=mid+1;
             ans=mid;
         }

    }

    return ans;

}
int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cout<<sqrt(19)<<endl;



           #ifdef ONPC
            cout << "__________________________" << endl;
        #endif
    
    #ifdef ONPC
        cerr << endl << "finished in " << clock() * 1.0 / CLOCKS_PER_SEC << " sec" << endl;
    #endif
}
