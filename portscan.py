impot socket
ip = raw_imput('Coloque o IP: ')
portas = []

for porta in portas:
    cliente = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    cliente.settime(0,5)
    codigo = cliente.connect_ex((ip,porta))
    if codigo == 0
        print port, "ABERTO"

print "PortScan finalizado com sucesso"

