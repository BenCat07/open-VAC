#
# VALVE ANTI CHEAT
# 
# COPYRIGHT VALVE CORPERATION 2017
# ALL RIGHTS RESERVED.
#

if [ $(whoami) == "catbot-*" ]; then
    # Oh yeez, we have a hacker bois
    steam --vac-ban-user "$(whoami)"
fi
