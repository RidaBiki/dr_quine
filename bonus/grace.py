import io

def func():
    x = 'import io\n\ndef func():\n    x = %r#comm\n    fil=open("Grace_kid.py", "w")\n    fil.write(x%%x)\n    fil.close()\n\nfunc()\n'#comm
    fil=open("Grace_kid.py", "w")
    fil.write(x%x)
    fil.close()

func()
