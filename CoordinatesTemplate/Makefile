CXX = g++
CXXFLAGS = -std=c++20 -Wall -Wextra

SRCS = main.cpp dotOnSurface.cpp
OBJS = $(SRCS:.cpp=.o)
EXEC = Paint

.PHONY: all clean

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(EXEC)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)
