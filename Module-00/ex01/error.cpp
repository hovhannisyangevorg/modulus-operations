/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehovhan <gehovhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 17:57:55 by gehovhan          #+#    #+#             */
/*   Updated: 2024/06/27 20:31:44 by gehovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "error.hpp"

Error::Error() : code_(0) {}

void Error::setError(int code, const std::string& message) {
	code_ = code;
	message_ = message;
}

bool Error::hasError() const {
	return (code_ != 0);
}

int Error::getCode() const {
	return (code_);
}

std::string Error::getMessage() const {
	return (message_);
}