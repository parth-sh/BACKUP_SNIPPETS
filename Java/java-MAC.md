brew install openjdk

```
  ==> Caveats
  For the system Java wrappers to find this JDK, symlink it with
    sudo ln -sfn /opt/homebrew/opt/openjdk/libexec/openjdk.jdk /Library/Java/JavaVirtualMachines/openjdk.jdk

  openjdk is keg-only, which means it was not symlinked into /opt/homebrew,
  because macOS provides similar software and installing this software in
  parallel can cause all kinds of trouble.

  If you need to have openjdk first in your PATH, run:
    echo 'export PATH="/opt/homebrew/opt/openjdk/bin:$PATH"' >> ~/.zshrc

  For compilers to find openjdk you may need to set:
    export CPPFLAGS="-I/opt/homebrew/opt/openjdk/include"

  ==> Summary
  🍺  /opt/homebrew/Cellar/openjdk/19: 637 files, 320.0MB
  ==> Running `brew cleanup openjdk`...
  Disable this behaviour by setting HOMEBREW_NO_INSTALL_CLEANUP.
  Hide these hints with HOMEBREW_NO_ENV_HINTS (see `man brew`).
  ==> Caveats
  ==> openjdk
  For the system Java wrappers to find this JDK, symlink it with
    sudo ln -sfn /opt/homebrew/opt/openjdk/libexec/openjdk.jdk /Library/Java/JavaVirtualMachines/openjdk.jdk

  openjdk is keg-only, which means it was not symlinked into /opt/homebrew,
  because macOS provides similar software and installing this software in
  parallel can cause all kinds of trouble.

  If you need to have openjdk first in your PATH, run:
    echo 'export PATH="/opt/homebrew/opt/openjdk/bin:$PATH"' >> ~/.zshrc

  For compilers to find openjdk you may need to set:
    export CPPFLAGS="-I/opt/homebrew/opt/openjdk/include"

  z@Parths-MacBook-Air ~ % 
```
  
echo 'export PATH="/opt/homebrew/opt/openjdk/bin:$PATH"' >> ~/.zshrc

[Homepage](./0README.md)