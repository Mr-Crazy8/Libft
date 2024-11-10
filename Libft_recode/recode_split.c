char **ft_split(char const *s, char c)
{
    if (s == NULL)
       return NULL;
    size_t i = 0, n = 0;
    while (s[i])
    {
        if ((s[i] != c && (i == 0 )))
            n++;
        i++;
    }

    char **split = (char **)malloc((n + 1) * sizeof(char *));
    if (split == NULL)
        return  NULL;
    
    i = 0;
    size_t j = 0;
    while (s[i] && j < n)
    {
        while (s[i] == c)
            i++;
        size_t start = i;
        while (s[i] != c && s[i] != '\0')
            i++;
        size_t len = i - start;

        split[j] = (char *)malloc((len + 1) * sizeof(char));

        if(!split)
        {
            size_t k = 0;
            while (k < j)
            {
                free(split[k]);
                k++;
            }
            free(split);
            return NULL;
        }
        ft_strlcpy(split[j], &s[start], len + 1);
        j++;
    }
    split[j]= NULL;
    return split;
}