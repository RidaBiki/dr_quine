import io
import os
i = 3

def func():
    global i
    if (i > 0):
        i = i - 1
        exfile = "Sully_"+str(i)+".py"
        x = 'import io\nimport os\ni = %s\n\ndef func():\n    global i\n    if (i > 0):\n        i = i - 1\n        exfile = "Sully_"+str(i)+".py"\n        x = %r#comm\n        fil=open(exfile, "w")\n        fil.write(x %% (str(i), x))\n        fil.close()\n        os.system("python "+exfile)\n\nfunc()\n'#comm
        fil=open(exfile, "w")
        fil.write(x % (str(i), x))
        fil.close()
        os.system("python "+exfile)

func()
