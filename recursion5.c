int fact(int n)
{
    if (n < = 1)   // বেস কেস
        return 1;
    else    
        return n * fact(n-1);    
}