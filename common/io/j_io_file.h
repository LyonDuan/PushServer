/*************************************************************************
    > File Name: j_io_file.h
    > Author: Jeason
    > Created Time: 2015-06-22
 ************************************************************************/
#ifndef J_IO_FILE_H
#define J_IO_FILE_H

int file_open(struct io_desc* desc);
int file_read_(struct io_desc* desc, char* buff, int len);
int file_write(struct io_desc* desc, char* buff, int len);
int file_seek(struct io_desc* desc, int offset, int whence);
int file_close(struct io_desc* desc);

#endif //J_IO_FILE_H;
