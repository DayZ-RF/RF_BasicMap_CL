class RF_BasicMap_CL_RPCInstance: RF_RPCInstance {

    // MARK: - Override Properties

    override int GetRPCType() { return RF_BasicMap_Constant.RPC_TYPE; }

    override string GetModName() { return RF_BasicMap_Constant.MOD_NAME; }

    // MARK: - Override

    override void Handle(PlayerIdentity sender, string key, ParamsReadContext ctx) {
        super.Handle(sender, key, ctx);
        switch (key) {
            case "didReceiveKeyString": {
                handleDidReceiveKeyString(sender, ctx);
                break;
            }
            case "didReceiveKeyInt": {
                handleDidReceiveKeyInt(sender, ctx);
                break;
            }
        }
    }

    // MARK: - Handlers

    private void handleDidReceiveKeyString(PlayerIdentity sender, ParamsReadContext ctx) {
        string object;
        ctx.Read(object);
        if (!object) return;

        RF_BasicMap_Log().Info(object);
    }

    private void handleDidReceiveKeyInt(PlayerIdentity sender, ParamsReadContext ctx) {
        int object;
        ctx.Read(object);
        if (!object) return;

        RF_BasicMap_Log().Info(object.ToString());
    }
}