NAME := ex01
BUILD_DIR := build

SRCS := $(wildcard *.cpp)
OBJS := $(patsubst %.cpp,$(BUILD_DIR)/%.o,$(SRCS))

CPP := c++
CPPFLAGS := -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(BUILD_DIR)/%.o: %.cpp | $(BUILD_DIR)
	$(CPP) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CPP) $(OBJS) $(CPPFLAGS) -o $@

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

clean:
	@$(RM) -r $(OBJS)

fclean: clean
	@$(RM) -r $(BUILD_DIR)
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re