all: call_read direct_read

call_read: call_read.c data.c
	gcc call_read.c data.c -o call_read

direct_read: direct_read.c
	gcc direct_read.c -o direct_read
