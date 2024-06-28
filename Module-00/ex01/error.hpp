#ifndef ERROR_HPP
# define ERROR_HPP

#include <string>

class Error {
	private:
		int code_;
		std::string message_;
	public:
		Error();
		void setError(int code, const std::string& message);
		bool hasError() const;
		int getCode() const;
		std::string getMessage() const;
};

extern Error	error;

#endif