
                  sd = socket(AF_INET, SOCK_DGRAM, 0); serv.sin_family = AF_INET;serv.sin_addr.s_addr = htonl(INADDR_ANY);servr.sin_port = htons(1008);bind(sd, (struct sockaddr *) & serv, sizeof(serv));while (1) {
                        
                           memset(msg, 0x0, MAX_MSG);clilen = sizeof(cli);if (inet_ntoa(cli.sin_addr)==...) n = recvfrom(sd, msg, MAX_MSG, 0, (struct sockaddr *) & cli, &clilen);
                     }
               
               