#ifndef HF
#define HF

#include <stdbool.h>

typedef struct s_agent
{
    char *name;
    int power;
    int strength;
}           t_agent;

void mx_printerr(const char *s);
int mx_strlen(const char *s);
char *mx_file_to_str(const char *filename);
int mx_strcmp(const char *s1, const char *s2);
int mx_count_substr(const char *str, const char *sub);
int mx_atoi(const char *str);
bool mx_isdigit(int c);
bool mx_isspace(char c);
void mx_printstr(const char *s);
void mx_exterminate_agents(t_agent ***agents);
void mx_printint(int n);
void mx_printchar(char c);

#endif
