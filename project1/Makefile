# Universal C++ Makefile

# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++20 -Iinclude
LDFLAGS =

# Project settings
TARGET = $(notdir $(CURDIR))
SRCEXT = cpp
SRCDIR = src
OBJDIR = obj

# Auto-detect source files
SOURCES = $(wildcard $(SRCDIR)/*.$(SRCEXT))
OBJECTS = $(patsubst $(SRCDIR)/%.$(SRCEXT),$(OBJDIR)/%.o,$(SOURCES))

# Default target
all: $(TARGET)

# Create target executable
$(TARGET): $(OBJECTS)
	@echo "Linking $(TARGET)..."
	$(CXX) $(OBJECTS) -o $@ $(LDFLAGS)

# Compile source files to object files
$(OBJDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	@mkdir -p $(OBJDIR)
	@echo "Compiling $<..."
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Run the program
run: $(TARGET)
	./$(TARGET)

# Clean build files
clean:
	@echo "Cleaning..."
	rm -rf $(OBJDIR) $(TARGET)

# Install dependencies (example)
install:
	@echo "No dependencies to install"

# Debug info
debug:
	@echo "Target: $(TARGET)"
	@echo "Sources: $(SOURCES)"
	@echo "Objects: $(OBJECTS)"

.PHONY: all run clean install debug
