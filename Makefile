# Sample App Makefile
#  	Created on: 24/07/2019
#   Author: Ajo Robert
#

TARGET = SampleApp

SRCS = main.cc string_property.cc property_factory.cc property_manager.cc
OBJECTS=$(subst .cc,.o,$(SRCS))
DEPENDS = $(subst .cc,.d,$(SRCS))

CPPFLAGS = -std=c++11 -g -Wall
LDFLAGS = 

.PHONY: all clean
all: $(TARGET)

$(TARGET): $(OBJECTS)
	g++ -o $@ $^ $(LDFLAGS)
	
-include $(DEPENDS)

%.o: %.cc
	g++ $(CPPFLAGS) -MMD -MP -c $< -o $@

clean:
	rm $(TARGET) $(OBJECTS) $(DEPENDS)
	