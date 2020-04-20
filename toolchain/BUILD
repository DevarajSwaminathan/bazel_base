package(default_visibility = ['//visibility:public'])

load(":cc_toolchain_config.bzl", "cc_toolchain_config")

cc_toolchain_config( name = "mycc_toolchain_config" )


filegroup(
    name = "all",
    srcs = [
        "mycc.sh",
    ],
)

filegroup(name = "empty")
cc_toolchain(
    name = "mycc_toolchain",
    toolchain_identifier = "mycc-toolchain",
    toolchain_config = ":mycc_toolchain_config",
    all_files = ":all",
    compiler_files = ":all",
    dwp_files = ":empty",
    linker_files = ":all",
    objcopy_files = ":empty",
    strip_files = ":empty",
    supports_param_files = 0,
)


cc_toolchain_suite(
    name = "custoolchain",
    toolchains = {
        "cusconfig": ":mycc_toolchain",
    },
)