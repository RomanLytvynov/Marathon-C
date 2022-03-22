double mx_pow(double n, unsigned int pow)
{
	double power = 1;
		for (unsigned int i = 0; i < pow; ++i)
		{
			power*=n;
		}

		return power;
}

