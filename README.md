![TESTNET In Operation](https://user-images.githubusercontent.com/317/40411678-465103e0-5e9b-11e8-8ac0-84538920aabe.png)

**Testnet Name:** MainClone  
**Current Status:** running  

**Algorithms**  
Hash: CryptoNight Lite Variant 1  
Difficulty: ????  

**Block Explorer:** https://testnet-mainclone.turtlecoin.ws/blocks/  
**Pool**: https://testnet-mainclone.turtlecoin.ws/  

**Purpose**    
Test things that might cause issues on mainnet here, it is a clone of mainnet with a diff of 500.  

It got started because a pool op had a wallet from block 7K and wanted to do a full optimise on it.  

AND you won't believe what happened next!! Go check it out

You can running anything you want on this testnet, if you run into issues ping us in [\#dev-general chat](http://discord.turtlecoin.lol)  

**Quickstart**

Linux *(deps already taken care of cause you already run mainnet)*
```
git clone --depth 1 -b main-clone https://github.com/turtlecoin/testnet.git trtl-testnet-main-clone_src
mkdir -p trtl-testnet-main-clone_run/data
mkdir trtl-testnet-main-clone_src/build
cd trtl-testnet-main-clone_src/build
cmake -DCMAKE_BUILD_TYPE=Release -DDO_TESTS=OFF ..
# specify -j core count here for fast build
make 
cd src
cp TurtleCoind simplewallet walletd miner ../../../trtl-testnet-main-clone_run/
cd ../../../trtl-testnet-main-clone_run/
cat <<EOT > trtl-testnet-main-clone
rpc-bind-ip=127.0.0.1
data-dir=$(pwd)/data
log-file=$(pwd)/trtl-testnet-main-clone.log
EOT
./TurtleCoind --config-file=trtl-testnet-main-clone
```

**Disclaimer**  
Testnets are for testing, they are disconnected from the main TurtleCoin Network.  
As such coins on mainnet can't be sent to testnet and testnet coins can't be sent to mainnet.
