#include <iostream>
#include <vector>

using namespace std;

class Solution 
{
    public:
        int l ;
        vector<int> a ;
        vector<vector<int>> r ;

        void dfs_all_arrange ( int u , bool used[] , int num[] ) ;
    
        vector<vector<int>> permutation(vector<int>& nums) 
        {
            /*简要思路：
            1.全排列
            2.去重*/
            l = nums.size() ;
            a = nums ;
            r.clear() ;

            bool used [ l ] ;
            int num [ l ] ;
            dfs_all_arrange ( 0 , used , num ) ;//全排列函数调用
            
            for ( int i = 1 ; i < r.size() ; )
                if ( r [ i ] == r [ i - 1 ] )  r.erase( r.begin() + i , r.begin() + i + 1 ) ;
                else i ++ ;//去重
            
            return r ;
        }

        void dfs_all_arrange( int u , bool used[] , int num[] )
        {
            if ( u > l )
            {
                vector<int> plus ( l ) ;
                    for ( int i = 0 ; i < l ; i ++ )
                    plus [ i ] = num [ i ] ;//将num转入一维数组plus
                r.push_back( plus ) ;//在二维数组r一维的末尾增加一个一维数组plus
            }
            else
            {
                for ( int i = 0 ; i < l ; i ++ )
                {
                    if ( used [ i ] ) continue ;
                    else
                    {
                        num [ u ] = a [ i ] ;
                        used [ i ] = true ;
                        dfs_all_arrange ( u + 1 , used , num ) ;//DFS
                        used [ i ] = false ;//恢复现场
                    }
                }
            }
        }//全排列函数准备
};