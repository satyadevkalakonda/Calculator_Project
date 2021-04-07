files= src/func_add.c\
src/func_sub.c\
src/func_mul.c\
src/func_div.c\

inc_h=INC

final.exe: $(files) project_main.c
	gcc -I $(inc_h) $(files) project_main.c -o final.exe
run:final.exe
	final.exe