# 使用多阶段构建
FROM gcc:latest AS builder

RUN apt-get update && apt-get install -y cmake

WORKDIR /app

COPY main.cpp .
COPY CMakeLists.txt .

RUN mkdir build

RUN cd build && \
    cmake .. && \
    make

FROM ubuntu
# 复制构建好的可执行文件
COPY --from=builder /app/build/app /usr/local/bin/app

# CMD ["app"]
