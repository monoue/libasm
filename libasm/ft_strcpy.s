; char    *ft_strcpy(char *dst, const char *src);

%define DST rdi
%define SRC rsi

section .text
    global _ft_strcpy

_ft_strcpy:
    push    DST          ; var = dst;
    cld                  ; clear the direction flag for movsb

.while:
    cmp     byte[SRC], 0 ; if (*src - '\0'
    je      .endwhile    ;                 == 0) goto .endwhile
    movsb                ; *dst++ = *src++;
    jmp     .while       ; goto .while

.endwhile:
    mov     byte[DST], 0 ; *dst = '\0';
    pop     rax          ; retV = dst;
    ret                  ; return (retV);
