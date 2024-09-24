NAME := command
BUILD_DIR := build

SRC_DIR := src
INC_DIR := incs
CMD_DIR := cmd
CMD_OUT_DIR := $(BUILD_DIR)/$(CMD_DIR)


CMDS := $(wildcard $(CMD_DIR)/*.cpp)
INCS := $(wildcard $(INC_DIR)/*.hpp)
SRCS := $(wildcard $(SRC_DIR)/*.cpp)
OBJS := $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SRCS))

OBJS_CMD := $(patsubst $(CMD_DIR)/%.cpp,$(BUILD_DIR)/$(CMD_DIR)/%.o,$(CMDS))

CPP := c++
CPPFLAGS := -Wall -Wextra -Werror -std=c++98 -I $(INC_DIR)

UNUSED := -Wno-unused-parameter


all: $(NAME)


$(CMD_OUT_DIR)/%.o: $(CMD_DIR)/%.cpp $(INCS)  | $(CMD_OUT_DIR)
	@$(CPP) $(CPPFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp $(INCS)  | $(BUILD_DIR)
	@$(CPP) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJS) $(OBJS_CMD)
	@$(CPP) $(OBJS) $(OBJS_CMD) $(CPPFLAGS) -o $@

$(BUILD_DIR):
	@mkdir -p $(BUILD_DIR)

$(CMD_OUT_DIR):
	@mkdir -p $@

clean:
	@$(RM) -r $(BUILD_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
