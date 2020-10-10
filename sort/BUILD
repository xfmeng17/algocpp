load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "sort",                                                           
    srcs = [
        "quicksort.cc",
        "mergesort.cc",
        "insertsort.cc",
        "findkth.cc"
    ],
    hdrs = ["sort.h"],
    deps = ["//common:common"],
)

cc_binary(
    name = "main",
    srcs = ["main.cc"],
    deps = ["//sort:sort"],
)
