workspace(name = "ompl_project")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# Download and setup OMPL
http_archive(
    name = "ompl",
    urls = ["https://github.com/ompl/ompl/archive/1.5.2.tar.gz"],
    strip_prefix = "ompl-1.5.2",
    sha256 = "db1665dd2163697437ef155668fdde6101109e064a2d1a04148e45b3747d5f98",
    build_file = "@//:ompl.BUILD",
)

# Add Boost
http_archive(
    name = "com_github_nelhage_rules_boost",
    url = "https://github.com/nelhage/rules_boost/archive/96e9b631f104b43a53c21c87b01ac538ad6f3b48.tar.gz",
    sha256 = "5ea00abc70cdf396a23fb53201db19ebce2837d28887a08544429d27783309ed",
    strip_prefix = "rules_boost-96e9b631f104b43a53c21c87b01ac538ad6f3b48",
)

load("@com_github_nelhage_rules_boost//:boost/boost.bzl", "boost_deps")
boost_deps()

# Add Eigen
http_archive(
    name = "eigen",
    url = "https://gitlab.com/libeigen/eigen/-/archive/3.4.0/eigen-3.4.0.tar.gz",
    sha256 = "8586084f71f9bde545ee7fa6d00288b264a2b7ac3607b974e54d13e7162c1c72",
    strip_prefix = "eigen-3.4.0",
    build_file = "@//:eigen.BUILD",
)