
# 整数二分的两个模板

## 模板1

划分方式[ l , r ] 变为 [ l , mid ] & [ mid + 1 , r ]
操作为 r = mid or l = mid + 1 ;
此时mid下取整（不用+1）

```cpp

int binary_search_1 ( int l , int r )
{
    while ( l < r ) 
    {    
        int mid = l + r >> 1;
        if ( check ( mid )) r = mid ;
        else l = mid + 1 ;
    }
    return l ;
}
```

## 模板2

划分方式[ l , r ] 变为 [ l , mid - 1 ] & [ mid , r ]
操作为 r = mid - 1 or l = mid ;
此时mid上取整（要+1）

```cpp

int binary_search_2 ( int l , int r )
{
    while ( l < r )
    {
        int mid = l + r + 1 >> 1 ;
        if ( check ( mid )) l = mid ;
        else r = mid - 1 ;
    }
    return l ;
}
```

使用模板1or2的选择依据
写完后发现l = mid ,那么计算mid时加上1
否则不用

## 模板3

这个模版不一定能返回一个具体的位置，但可以判断有没有解
但一定要符合单调性才能用（大概）

```cpp
int binary_search_3 ( int l , int r , int key )
{
    while ( l <= r )
    {
        int mid = l + r >> 1 ;
        if ( key == q[ mid ] ) return mid ;
        if ( key < q[ mid ] ) r = mid + 1 ;
        else j = mid - 1 ;
    }
    return -1 ;//表示没有答案
}
```
