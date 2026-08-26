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
