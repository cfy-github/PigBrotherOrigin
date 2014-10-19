.extern _init
.define _timer_int
.define _keyboard_int
_init:
	cli
	xor ax, ax
	mov es, ax
	eseg mov (8*4), #int8
	eseg mov (9*4), #int9
	mov ax, cs
	eseg mov (8*4+2), ax
	eseg mov (9*4+2), ax
	sti
	ret
int8:
	push ax
	push bx
	push cx
	push dx
	push bp
	push si
	push di
	push es
	call _timer_int
	pop es
	pop di
	pop si
	pop bp
	pop dx
	pop cx
	pop bx
	pop ax
	iret
int9:
	push ax
	push bx
	push cx
	push dx
	push bp
	push si
	push di
	push es
	call _keyboard_int
	pop es
	pop di
	pop si
	pop bp
	pop dx
	pop cx
	pop bx
	pop ax
	iret
