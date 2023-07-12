# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    pull.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/07 11:12:45 by Maurice809        #+#    #+#              #
#    Updated: 2023/03/06 15:56:43 by tmoret           ###   Lausanne.ch        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

git config --global user.email "maurice809@hotmail.com"
git config --global user.name "Maurice809"

git=$(git remote -v | sed '2d' | sed 's/origin//g' | sed 's/(fetch)//g' | tr -d "\t")

git pull  $git
