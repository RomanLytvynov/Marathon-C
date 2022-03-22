#include <stdlib.h>
#include <stdbool.h>

bool mx_only_printable(int i)
{
	if(i > 31 && i < 127)
    	return true;
    else return false;

}

char*mx_strnew(const int size);

void mx_strdel(char**str);

int mx_count_words(const char*str, char delimiter);

char *mx_strncpy(char *dst, const char *src, int len);

char**mx_strsplit(char const*s, char c)
{
	int word_count = mx_count_words(s, c);
	char **words = (char**)malloc((word_count+1)*sizeof(char*));
	for (int j = 0; j < word_count; j++) 
	{
    	words[j] = (char*) malloc(128 * sizeof(char));
	}
	words[word_count] = NULL;
	int i = 0;
	for (int j = 0; *(s + j); ++j)
	{
		if(mx_only_printable(s[j]) && s[j]!= c)
		{
			int k = j;
			while(s[k]!=c)
			{
				k++;
			}
			char*word = mx_strnew((k-j)*sizeof(char));
			for (int d = 0; d < k-j; ++d)
			{
				word[d] = s[j+d];
			}
			mx_strncpy(words[i], word, k-j);
			j=k;
			j--;
			i++;
			mx_strdel(&word);
		}
	}
	return words;
}

