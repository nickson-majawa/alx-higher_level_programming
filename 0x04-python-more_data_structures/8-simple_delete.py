#!/usr/bin/python3
def simple_deletw(a_dictionary, key=""):
    if key in a_dictionary:
        del a_dictionary[key]
    return a_dictionary
