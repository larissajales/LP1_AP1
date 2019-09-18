CC = g++ #compilador

CPPFLAGS = -Wall -std=c++11 #flags

#executavel
AP1: automovel.o gerenciar.o concessionaria.o mainAP.o 
	@$(CC) $(CPPFLAGS) -Iinclude automovel.o gerenciar.o concessionaria.o mainAP.o  -o AP1											
		
	@mv *.o build/ #enviando os .o para pasta objects
	
# o -I include diz que a biblioteca está nessa pasta


automovel.o: src/automovel.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/automovel.cpp
	@echo "Instalando..."

gerenciar.o: src/gerenciar.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/gerenciar.cpp
	@echo "Instalando..."

concessionaria.o: src/concessionaria.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/concessionaria.cpp
	@echo "Instalando..."

mainAP.o: src/mainAP.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/mainAP.cpp
	@echo "Aguarde..."
	@echo "Pronto!!!Para mais informações digite o comando --> ./AP1\n"
clean:
	@rm -rf AP1
	@echo "Diretorio limpo"