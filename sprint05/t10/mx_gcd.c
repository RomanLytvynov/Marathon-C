int mx_mod(int x)
{
	if(x < 0) return -1*x;
	else return x;
}

int mx_gcd(int a, int b)
{
	int smallest = mx_mod(a) < mx_mod(b)? mx_mod(a) : mx_mod(b);
	static int gcd = 1, counter = 1;
	if (counter > smallest)
	{
		return gcd;
	}
	if(a%counter == 0 && b%counter == 0) gcd = counter;
	counter++;
	return mx_gcd(a, b);
}

