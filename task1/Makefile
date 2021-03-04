SOURCE_BIN=/home/02/basargin/task1/hello
INSTALL_BIN=~/bin
FILES_DIR=src/main.c src/hello.c src/factorial.c
DIR=src
VERSION=1.0

all: compile clean

compile: prog cp

prog:
	gcc $(FILES_DIR) -o hello
#Установка ( Копирование ) и создание README
cp:
	cp $(SOURCE_BIN) $(INSTALL_BIN)
	cat $(DIR)/file1 $(DIR)/file2 > $(INSTALL_BIN)/README
#Запуск проекта
test:
	@./hello
	@if [[ $$? = 0 ]]; then echo "Work"; else echo "No work"; fi
wc:
	wc src/*.c
clean:
	rm -rf *.o *~ $(DIR)/*.o $(DIR)/*~
distclean:
	rm -rf hello $(INSTALL_BIN)/README $(INSTALL_BIN)/hello
dist:
	@rm -rf hello_$(VERSION).tar.gz
	@tar -cvf hello_$(VERSION).tar.gz ../task1

helper:
	@echo -e "Используйте make helper, чтобы получить справку\n\
	make compile - собрать программу.\n\
	make test - тестовый запуск проекта.\n\
	make wc - запуск внешних утилит.\n\
	make clean - очистить объектные файлы.\n\
	make distclean - очистить все файлы." 

.PHONY: clean
.SILENT:  wc
.DEFAULT:
	@make helper
