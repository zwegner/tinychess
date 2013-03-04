tinychess
=========

A very small chess program written in C. It's rather obfuscated, but not too much. I wrote this around 2003-2004 (at age 15 or 16). [Here's](http://www.stmintz.com/ccc/index.php?id=417486) an archive of when I posted this to the CCC forum in 2005, for minor historical interest.

This version is not nearly as good as I got it, but that version was lost in a hard drive failure. I had compressed the source down a bit (at least by a line, to fit exactly in an 80x24 terminal). I also began to format the source like a big chess board, but alas it's gone.

This was for the IOCCC, and aimed to not "cheat"--i.e. use any defines whatsoever, and not use any of the characters {}; with a space afterwards, which is discounted for the size requirements. I never entered it though...

User interface
==============

Enter moves in coordinate notation (e2e4, etc.)
U-undo move
G-go
N-new game
Pn-set search depth to n ply
Cn-set computer side to n, where 1=w, 2=b, 3=w+b
