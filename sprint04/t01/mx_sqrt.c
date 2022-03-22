int mx_sqrt(int x)
{
    int pow = 0;

    while(pow*pow!=x)
    {
        pow+=1;
        if(pow*pow > x) return 0;
    }
    return pow;

}

