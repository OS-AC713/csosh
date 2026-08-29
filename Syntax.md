# csosh, basic syntax:
# The language doesn't provide you with a standard Bash-like language, but rather a family language.

# *The family language in the Core/713 division is a language divided into command families.*

# Basic commands:
## The ls family provides ls commands such as:
> cls - Component List - a list of your OS components,
> sls - a system list, providing OS files and folders,
> uls - User List - a list of your files within a directory,
# The cd command family:
> ucd - navigate through directories created by a regular user with the serial number 010 (0 - everyone can read, 10 - regular user),
> cls - component directories of your OS, provided by the serial number 1000 (1 - the first user, 1 - auos (Admin User On System), and 000 = all privileges),
> sls - navigate through your system directories, provided by auos.

# Basic serial numbers in the Core713 system:

# The first digit denotes the permissions, but if it's a 4-digit number, it denotes the author. The second digit denotes the creator, but if it's a 4-digit number, it denotes the primary privilege. The third digit denotes who is responsible for it, but if it's a 4-digit number, it denotes the privilege. The last 4th digit determines how they interact with the first digit. A basic example: 1000, 1 = AUOS, 000 = all privileges. The last digit means that only auos has the right to modify the file's operation.

In my system, 0 = the lowest process; the higher the number, the more privileged it is.

* ## Here's a simple formula for working with it: *
Three-digit number:
1 = privilege, 2 = author (you'll most likely choose 1 – that's you, in the user plan), 3 = responsible.

Four-digit number:

1 = author
2 = primary privilege
3 = privilege
4 = how these privileges interact with the author and the system scheduler

I don't think it's that complicated :p


# Family language terminology:

I'll go into more detail here.
The family language tells the kernel OS that a single family command has so many commands, each command performing its own role and its own flags.
Okay, that's it. What else can I tell you?

# Your OS prompts and how to distinguish them:
If you're a user, your prompt will end with a <>&

If you're an auos, your prompt will end with =


# WARNING: Regarding the code: I haven't really thought through the architecture in my head yet, so don't expect any super mega bash-level magic from the code.

# Why I created a family of commands:
First, I liked the idea.

Second, it's easier for me to manage the OS and shell this way.

Third, I'll do whatever I want with the commands :p

And fourth, it's just cool :p

# How do you work with csosh syntax:

Just pray it works.

# If you read this far, congratulations! You saw the cloud above the iceberg. There are still many commands here. And some of them are better left unseen, as the Arabs won't read them in droves. I checked.

# If you want to check, here's the easiest of the simplest commands in the iceberg: 
**tsch -fe --USB-INP --wfsf &$ --act def.sp**
Good luck.
