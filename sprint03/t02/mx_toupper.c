char mx_toupper(int c)
{
	if(c > 64 && c < 91) return ((char) c);
	else if(c > 96 && c < 123) return ((char) c - 32);
	else return (char) c;
}

