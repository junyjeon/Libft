#ifndef GET_NEXT_LINE_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

char	*get_next_line(int fd);

#ifndef	BUFFER_SIZE
#define	BUFFER_SIZE	1048576
#else
# if BUFFER_SIZE < 1
#  ERROR BUFFER_SIZE is too small
# endif
#endif
#endif
