cc_library(
    name = "ompl",
    srcs = glob([
        "src/**/*.cpp",
    ], exclude = [
        "src/ompl/extensions/**/*.cpp",
    ]),
    hdrs = glob([
        "include/**/*.h",
        "src/**/*.h",
        "src/**/*.hpp",
    ], exclude = [
        "include/ompl/extensions/**/*.h",
        "src/ompl/extensions/**/*.h",
    ]) + [":generate_config"],
    includes = [
        "include",
        "src",
    ],
    copts = [
        "-std=c++14",
        "-fPIC",
        "-Iexternal/ompl",
        "-Iexternal/ompl/src",
    ],
    visibility = ["//visibility:public"],
    deps = [
        "@boost//:algorithm",
        "@boost//:system",
        "@boost//:bind",
        "@boost//:chrono",
        "@boost//:date_time",
        "@boost//:dynamic_bitset",
        "@boost//:filesystem",
        "@boost//:graph",
        "@boost//:math",
        "@boost//:program_options",
        "@boost//:random",
        "@boost//:serialization",
        "@boost//:thread",
        "@eigen//:eigen",
    ],
)

genrule(
    name = "generate_config",
    outs = ["include/ompl/config.h"],
    cmd = """
    echo '#define OMPL_VERSION "1.5.2"' > $@
    echo '#define OMPL_MAJOR_VERSION 1' >> $@
    echo '#define OMPL_MINOR_VERSION 5' >> $@
    echo '#define OMPL_PATCH_VERSION 2' >> $@
    """,
)
