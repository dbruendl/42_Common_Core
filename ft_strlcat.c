/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrundl <dbrundl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:24:35 by dbrundl           #+#    #+#             */
/*   Updated: 2023/09/07 16:00:52 by dbrundl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	size_t			dlen;
	size_t			slen;

	i = 0;
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src [i] && i < (size - dlen - 1))
	{
		dest[dlen + i] = src[i];
		i++;
	}
	if (dlen + i < size)
		dest[dlen + i] = '\0';
	return (dlen + slen);
}
/*
int main() {
    char destination[20]; // Zielspeicher mit begrenzter Größe vorbereiten

    // Testfall 1: Einfache Zeichenkette anhängen
    char source1[] = "Hello";
    strcpy(destination, "World");
    size_t result1 = ft_strlcat(destination, source1, sizeof(destination));
    printf("Testfall 1: Ziel='%s', Ergebnis='%zu'\n", destination, result1);

    // Testfall 2: Zeichenkette anhängen, Puffer voll
    char source2[] = "This is a long string";
    strcpy(destination, "Short");
    size_t result2 = ft_strlcat(destination, source2, sizeof(destination));
    printf("Testfall 2: Ziel='%s', Ergebnis='%zu'\n", destination, result2);

    // Testfall 3: Leere Zeichenkette anhängen
    char source3[] = "";
    strcpy(destination, "Hello");
    size_t result3 = ft_strlcat(destination, source3, sizeof(destination));
    printf("Testfall 3: Ziel='%s', Ergebnis='%zu'\n", destination, result3);

    // Testfall 4: Teil der Zeichenkette anhängen
    char source4[] = " World!";
    strcpy(destination, "Hello");
    size_t result4 = ft_strlcat(destination, source4, 4); // Begrenzt auf 4 Zeichen
    printf("Testfall 4: Ziel='%s', Ergebnis='%zu'\n", destination, result4);

    // Testfall 5: Ziel ist leer
    char source5[] = "Copy me!";
    strcpy(destination, "");
    size_t result5 = ft_strlcat(destination, source5, sizeof(destination));
    printf("Testfall 5: Ziel='%s', Ergebnis='%zu'\n", destination, result5);

    return 0;
}*/
