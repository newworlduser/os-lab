echo "what is your name"
read NAME
echo "my name is, $NAME"
echo "current os version, release number, kernal verston are:"
uname -a
echo "top 10 processes in decending order are:"
ps -eo pid, cmd,%mem, %cpu --sort=-%mem|head
echo "processes with highest memory usage are:"
ps aux |sort -nk +4 |tail
echo "current logged in user and logname are:"
lognane
echo "current shell Ls:"
echo $SHELL
echo "home directory is"
echo $HOME
echo "current path is"
echo $PAΤΗ
echo "current working directory ts"
pwd
echo "current date is"
date
echo "current directory consist of"
ls