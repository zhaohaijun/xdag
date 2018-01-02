/* состояние программы, T13.788-T13.788; $DVS:time$ */

cheatcoin_state(INIT, "Initializing.")
cheatcoin_state(REST, "Storage corrupted. Resetting block engine.")
cheatcoin_state(LOAD, "Loading blocks from local storage.")
cheatcoin_state(WTST, "Connecting to test network.")
cheatcoin_state(WAIT, "Connecting to main network.")
cheatcoin_state(TTST, "Connecting to testnet pool.")
cheatcoin_state(TRYP, "Connecting to mainnet pool.")
cheatcoin_state(CTST, "Connected to test network. Synchronizing.")
cheatcoin_state(CONN, "Connected to main network. Synchronizing.")
cheatcoin_state(XFER, "Waiting for transfer accomplishes.")
cheatcoin_state(PTST, "Connected to testnet pool. No mining.")
cheatcoin_state(POOL, "Connected to mainnet pool. No mining.")
cheatcoin_state(MTST, "Connected to testnet pool. Mining on. Normal testing.")
cheatcoin_state(MINE, "Connected to mainnet pool. Mining on. Normal work.")
cheatcoin_state(STST, "Synchronized with test network. Normal testing.")
cheatcoin_state(SYNC, "Synchronized witn main network. Normal work.")