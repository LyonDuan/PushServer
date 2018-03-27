/*************************************************************************
    > udp Name: j_io_udp.h
    > Author: Jeason
    > Created Time: 2015-06-22
 ************************************************************************/
#ifndef J_IO_UDP_H
#define J_IO_UDP_H

int udp_open(struct io_desc* desc);
int udp_read_(struct io_desc* desc, char* buff, int len);
int udp_write(struct io_desc* desc, char* buff, int len);
int udp_seek(struct io_desc* desc, int offset, int whence);
int udp_close(struct io_desc* desc);

#endif //J_IO_UDP_H;
