# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_sh.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ynaamane <ynaamane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 17:44:53 by ynaamane          #+#    #+#              #
#    Updated: 2018/11/08 11:41:24 by ynaamane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

find . -type f -name "*sh" | rev | cut -d / -f 1 | rev | cut -d . -f 1
