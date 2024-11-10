static int is_in_set(char c, const char *set)
{
    int i;

    i = 0;

    while (set[i] != '\0')
    {
        if (set[i] == c)
           return 1;
        i++;
    }
    return 0;
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t i2, i1, r, len;

    char *strtrim;

    if (s1 == NULL || set == NULL)
        return (NULL);
    i1 = 0;
    i2 = ft_strlen(s1);
    r = 0;
    while (s1[i1] != '\0' && is_in_set(s1[i1], set))
        i1++;
    while (i2 > i1 && is_in_set(s1[i2 - 1], set))
        i2--;
    len = i2 - i1;
    strtrim = (char *)malloc((len +1) * sizeof(char));
    if (strtrim == NULL)
        return NULL;
    while (i1 < i2)
         strtrim[r++] = s1[i1++];
    strtrim[r] = '\0';
    return (strtrim);
}