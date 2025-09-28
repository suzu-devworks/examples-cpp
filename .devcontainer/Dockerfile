FROM mcr.microsoft.com/devcontainers/cpp:debian-12 as develop-stage

# Avoid warnings by switching to noninteractive
ENV DEBIAN_FRONTEND=noninteractive

# Configure apt and install packages
RUN set -x \
    && apt update \
    && apt -y install --no-install-recommends apt-utils dialog 2>&1 \
    # Verify git, process tools installed
    && apt -y install git openssh-client less iproute2 procps \
    && apt -y install python3 python3-venv \
    # Install C++ tools
    && apt -y install build-essential clang cppcheck valgrind \
    && apt -y install libgtk-3-0 libgtk-3-dev \
    && apt -y install libgtk-4-1 libgtk-4-dev \
    && apt -y install libfcgi-dev spawn-fcgi curl \
    ;

# PEP 668 compliant package install
RUN set -x \
    && python3 -m venv /opt/python/venv \
    && /opt/python/venv/bin/python -m pip install --no-cache-dir cmake cmakelang \
    && /opt/python/venv/bin/python -m pip install --no-cache-dir meson ninja \
    && ln -s /opt/python/venv/bin/cmake* /usr/local/bin/ \
    && ln -s /opt/python/venv/bin/meson /usr/local/bin/ \
    && ln -s /opt/python/venv/bin/ninja /usr/local/bin/ \
    ;

# Clean up
RUN set -x \
    && apt autoremove -y \
    && apt clean -y \
    && rm -rf /var/lib/apt/lists/* \
    ;

# Switch back to dialog for any ad-hoc use of apt-get
ENV DEBIAN_FRONTEND=dialog
