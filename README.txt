compile
bazel build //hello:hello_module --config=cusconfig

Test(builds and runs)
bazel test //test:hello-test --config=cusconfig