/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducret <ambrodu@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 21:38:47 by aducret           #+#    #+#             */
/*   Updated: 2023/02/18 10:27:08 by aducret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const & src);
		~PresidentialPardonForm(void);

		PresidentialPardonForm &	operator=(PresidentialPardonForm const & rhs);

		void	execute(Bureaucrat const & executor) const;

	private:
		std::string	_target;
};

#endif