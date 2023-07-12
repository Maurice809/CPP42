# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    getpoint.sh                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/07 11:13:26 by Maurice809        #+#    #+#              #
#    Updated: 2023/03/10 19:57:10 by tmoret           ###   Lausanne.ch        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

date=$(date '+%Y%m%d_%H%M');
git=$(git remote -v | sed '1d' | sed 's/origin//g' | sed 's/(push)//g' | tr -d "\t")

git config --global user.email "maurice809@hotmail.com"
git config --global user.name "Maurice809"

function ft_git()
{  
   git add .
   git commit -m "42 Lausanne | $HOSTNAME | $date"
   git push $git --all
}

git pull $git

if [ ! -f ".gitignore" ]; then
	cp ./util/.gitignore .
fi

gshuf -i 52000-52999 -n 2000 > $date.txt

ft_git
rm $date.txt
ft_git

