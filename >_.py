history = "~/>__history"
cmds = ""
while True:
    cmd = input(">_ ").split()
    if "exit" == cmd[0]:
        break
    if "add" == cmd[0]:
        pass


# I need append this commands in end file ~/>__history:
with open(history, "r") as f:
	file = f.read()
with open(history, "w") as f:
	f.write(file+cmds)



"""
interpreter:
// add object__TYPE // touch file - new
>_ add Man Man_1

// set object__TYPE // sed file - edit
>_ set Man Xp 10

//del oblect__TYPE // rm file - remove
>_ del Man_1 

...

exit

====================================================================================================
cmds = '''add Man Man_1
set Man Xp 10
del Man_1
'''


# I need append this commands in end file ~/>__history

with open("~/>__history", "r") as f:
	file = f.read()

with open("~/>__history", "w") as f:
	f.write(file+cmds)
"""

