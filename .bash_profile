#------------
# ALIASES
#------------

export PATH="$HOME/anaconda/bin:/usr/bin:/bin:/usr/sbin:/sbin:/usr/local/bin:$PATH"

alias emacs="/Applications/Emacs.app/Contents/MacOS/Emacs -nw"
alias iterm="open -a /Applications/iTerm.app"

#alias ls='ls --color=always'

# Set CLICOLOR if you want Ansi Colors in iTerm2 
# This is OS X only, don't try with Ubuntu
export CLICOLOR=1
export LSCOLORS=GxFxCxDxBxegedabagaced

# Set colors to match iTerm2 Terminal Colors
export TERM=xterm-256color
#export LS_COLORS='rs=0:di=01;34:ln=01;36:mh=00:pi=40;33'
reset=$(tput sgr0)
yellow=$(tput setaf 3)
magenta=$(tput setaf 5)
blue=$(tput setaf 4) 
cyan=$(tput setaf 6)
#export PS1='\e[s\e[0;0H\[$cyan\]\u\[$reset\]\[$magenta\]@\[$reset\]\[$yellow\]\h\[$reset\]    \t\e[u[\w]\$ '
export PS1='\[$cyan\]\H\[$reset\]\[$magenta\]:\[$reset\]\[$yellow\][\w]\[$reset\]\[$magenta\]$ \[$reset\]'

#PS1='\e[33;1m\u@\h: \e[31m\W\e[0m\$ '
alias clear="echo -e '\e[2J\n\n'"

#change the folder color
# Setting PATH for Python 3.5
# The orginal version is saved in .bash_profile.pysave
PATH="/Library/Frameworks/Python.framework/Versions/3.5/bin:${PATH}"
export PATH

# added by Anaconda3 4.0.0 installer
export PATH="/Users/darrin/anaconda/bin:$PATH"


