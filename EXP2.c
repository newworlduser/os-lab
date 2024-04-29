cuecho "Top 10 processes in descending order are:" ps -eo pid, ppid, cmd,%mem, cpu sort=-%mem head

Save

echo "Processes with highest memory usage are:"

ps aux sort -nk +4 tail

echo "current log in user and logname:"

Logname

echo "current shell is:"

echo $SHELL

echo "current home directory is:"

SHOME

echo "Current path is:"

echo $PATH

echo "current working directory:"

pwd

echo "OS version, release name and kernel version are:"



uname -a