cppfile:=$(wildcard *.cpp)
bin:=$(cppfile:%.cpp=%)

.PHONY: all
all:$(bin)

$(bin):%:%.cpp
	g++ $^ -o $@

.PHONY: clean
clean:$(bin)
	rm $^
