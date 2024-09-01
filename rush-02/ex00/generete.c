#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main()
{ 
    char buffer[1024];
    int bytesread;
    int rows;
    int i;

    rows = 0;
    i = 0;
    int file = open("numbers.dict", O_RDONLY);

    printf("File: %d\n", file);
    if (file == -1)
    {
        write(1, "Error\n", 5);
        return(1);
    }
     bytesread = read(file, buffer, sizeof(buffer));
    
            while (i < bytesread)
            {
                if (buffer[i] == '\n')
                {
                    rows++;
                }
                i++;
            }

close(file);
printf("Rows: %d\n", rows);
printf("Bytes: %d\n", bytesread);

fflush(stdout);
return (0);
}