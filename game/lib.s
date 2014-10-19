.extern _printc
.extern _out_byte
.extern _in_byte
.extern _lock
.extern _unlock
.extern _setmode
.extern _draw
.extern _set_cursor
.extern _print_char
_print_char:
	push bp
	mov bp, sp
	push ax
	push bx
	push cx
	movb ah, #0x09
	movb al, 4(bp)
	movb bh, #0x00
	movb bl, #15
	mov cx, #1
	int 0x10
	pop cx
	pop bx
	pop ax
	pop bp
	ret
_set_cursor:
	push bp
	mov bp, sp
	push ax
	push bx
	push dx
	movb ah, #0x02
	movb bh, #0x00
	movb dh, 4(bp)
	movb dl, 6(bp)
	int 0x10
	pop dx
	pop bx
	pop ax
	pop bp
	ret
_draw:
	push bp
	mov bp, sp
	push ax
	push es
	push dx
	push di
	mov dx, #320
	movb al, 6(bp)
	mul dx
	add ax, 4(bp) 
	mov di, ax
	mov ax, #0xa000
	mov es, ax
	movb al, 8(bp)
	eseg movb (di), al
	pop di
	pop dx
	pop es
	pop ax
	pop bp
	ret
_setmode:
	push bp
	mov bp, sp
	push ax
	mov ax, #0x0013
	int 0x10
	pop ax
	pop bp
	ret
_printc:
	push bp
	mov bp, sp
	movb al, 4(bp)
	movb ah, #0x0E
	mov bx, #0x0001
	int 0x10
	pop bp
	ret
_out_byte:
	push bp
	mov bp, sp
	push dx
	xor ax, ax
	movb al, 6(bp)
	mov dx, 4(bp)
	outb dx
	pop dx
	pop bp
	ret
_in_byte:
	push bp
	mov bp, sp
	push dx
	mov dx, 4(bp)
	inb dx
	pop dx
	pop bp
	ret
_lock:
	cli
	ret
_unlock:
	sti
	ret
