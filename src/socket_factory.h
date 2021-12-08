#ifndef _SOCKET_FACTORY_H
#define _SOCKET_FACTORY_H

typedef struct socket_factory_ socket_factory_t;

socket_factory_t * factory_init(const char * ip_addr, const char * port);
void factory_destroy(socket_factory_t * factory);
void fork_listen(socket_factory_t * factory);
int server_connect(socket_factory_t * factory);
int factory_get_socket(socket_factory_t * factory);
int tcp_server_setup(socket_factory_t * factory);
int udp_server_setup(socket_factory_t * factory);
char * udp_recv_msg(socket_factory_t * factory);
int udp_send_msg(socket_factory_t * factory, char * msg);

#endif
