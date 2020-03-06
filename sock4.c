#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include<sys/types.h>
#include<sys/socket.h>
#include<errno.h>
#include<netinet/in.h>

struct sockaddr_in alvo;

int main()
{
 
    int sock;
    sock = socket(AF_INET,SOCK_STREAM,0);
    if(sock == -1)
    {
      perror("Objeto 'sock' ");
      exit(1);
    } else {
              
              printf("Sucesso ao criar sock\n");
              char vet_ip[20];
              int int_port;
              int conecta;
              
              printf("Digite o ip: ");
              fgets(vet_ip,20,stdin);
              
              printf("Digite a porta: ");
              scanf("%d",&int_port);
                            
 
              printf("O ip que você digitou é : %s",vet_ip);
              printf("A porta que você digitou é : %d\n\n",int_port);

              
              alvo.sin_family = AF_INET;
              alvo.sin_port = htons(int_port);
              alvo.sin_addr.s_addr = inet_addr(vet_ip);
              
                  conecta = connect(sock,(struct sockaddr*)&alvo,sizeof alvo);
                  if(conecta == 0)
                  {
                   printf("Porta %d = [ABERTA]\n",int_port);
                   close(sock);
                  } else {
                            printf("Porta %d = [FECHADA]\n",int_port);
                            close(sock);
                         }
              
           }
return 0;
}
