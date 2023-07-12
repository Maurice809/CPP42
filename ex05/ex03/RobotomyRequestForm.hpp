/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducret <ambrodu@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 21:07:36 by aducret           #+#    #+#             */
/*   Updated: 2023/02/18 10:29:57 by aducret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const & src);
		~RobotomyRequestForm(void);

		RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);

		void execute(Bureaucrat const & executor) const;

	private:
		std::string _target;
};

#endif