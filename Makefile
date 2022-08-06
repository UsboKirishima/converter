#MACROS
SHELL=/bin/sh 
CC=gcc
INCLUDES=
OBJS= main.c
OUTDIR=bin/main
FILE=lolz

out.o:${OBJS}
	 ${CC} ${OBJS} -o ${OUTDIR} && ./${OUTDIR} ${FILE}