/*************************************************************************
    > tcp Name: J_IO_TCP.h
    > Author: Jeason
    > Created Time: 2015-06-22
 ************************************************************************/ 
#ifndef J_IO_TCP_H 
#define J_IO_TCP_H

int tcp_open(struct io_desc* desc);
int tcp_read_(struct io_desc* desc, char* buff, int len);
int tcp_write(struct io_desc* desc, char* buff, int len);
int tcp_seek(struct io_desc* desc, int offset, int whence);
int tcp_close(struct io_desc* desc);

#endif //J_IO_TCP_H;
