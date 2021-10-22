int fact(int n){

    // ভুল বেস কেস (তাই স্ট্যাক ওভারফ্লো হতে পারে) 
    if (n == 100) 
        return 1;
    else
        return n * fact(n-1);
}