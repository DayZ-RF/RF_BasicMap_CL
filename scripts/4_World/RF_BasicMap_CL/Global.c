class RF_BasicMap_CL_Global: Managed {

    // MARK: - Static Properties

    static ref RF_BasicMap_CL_KeyHandler keyHandler;

    static ref RF_BasicMap_CL_RPCInstance rpc;

    // MARK: - Static

    static void InitializeUnits() {
        rpc = new RF_BasicMap_CL_RPCInstance();
        keyHandler = new RF_BasicMap_CL_KeyHandler();
    }
}