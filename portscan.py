impot socket
ip = raw_input('Coloque o IP: ')
portas = [] # Coloque as portas que deseja analisar

for porta in portas:
    cliente = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    cliente.settime(0,5)
    codigo = cliente.connect_ex((ip,porta))
    if codigo == 0
        print porta, "ABERTO"

print "PortScan finalizado com sucesso"

