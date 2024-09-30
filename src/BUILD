cc_library(
    name = "my_ompl_lib",
    srcs = ["my_ompl_lib.cc"],
    hdrs = [],
    deps = [
        "@ompl//:ompl",
        "@eigen//:eigen",
    ],
    copts = [
        "-Iexternal/ompl/include",
        "-Iexternal/ompl/src",
    ],
    visibility = ["//visibility:public"],
)