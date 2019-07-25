# Sample App Makefile
#  	Created on: 24/07/2019
#   Author: Ajo Robert
#

TARGET = SampleApp

SRCS = main.cc string_property.cc property_factory.cc property_manager.cc
OBJECTS=$(subst .cc,.o,$(SRCS))

CPPFLAGS = -std=c++11 -g
LDFLAGS = 

$(TARGET): $(OBJECTS)
	g++ -o $(TARGET) $(OBJECTS) $(LDFLAGS)
	
%.o: %.cc
	g++ $(CPPFLAGS) -c $<