#include <bits/stdc++.h>

using namespace std;

class Solution 
{
    public:
        int res = 0 ;
        void count ( vector<int>& coins , int amount , int sum , int num )
        {
            if ( res ) return ;
            if ( sum > amount ) return ;
            if ( sum == amount )
            {
                res = num ;
                return ;
            }

            for ( int i = coins.size() - 1 ; i >= 0 ; i -- )
            {
                
                count ( coins, amount , sum + coins[ i ] , num + 1 ) ;
            }
            
            return ;
        }

        int coinChange(vector<int>& coins, int amount) 
        {
            if ( amount == 0 ) return 0 ;

            sort( coins.begin() , coins.end() ) ;
            for ( int i = coins.size() - 1 ; i >= 0 ; i -- )
            {
                if ( coins[ i ] > amount ) coins.pop_back() ;
            }
            if ( coins.empty() ) return -1 ;
            
            count ( coins , amount , 0 , 0 ) ;

            if ( ! res ) return -1 ;
            else return res ;
        }
};