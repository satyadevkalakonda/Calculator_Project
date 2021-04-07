final.exe:func_add.c func_sub.c func_mul.c func_div.c project_main.c
	gcc func_add.c func_sub.c func_mul.c func_div.c project_main.c -o final.exe
run:final.exe
	final.exe