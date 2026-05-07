// Class: PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>


/* PacketMemberFuncHandle<androidNetworkMsgProcess, _NetWorkMsg>::Process(_NetWorkMsg const&) */

void PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::Process(_NetWorkMsg *param_1)

{
  long lVar1;
  
  lVar1 = (long)*(ulong *)(param_1 + 0x18) >> 1;
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 8) + lVar1) + *(long *)(param_1 + 0x10)))
              (*(long *)(param_1 + 8) + lVar1);
    return;
  }
  (**(code **)(param_1 + 0x10))(*(long *)(param_1 + 8) + lVar1);
  return;
}


/* PacketMemberFuncHandle<INetworkMsgProcess,
   _NetWorkMsg>::PacketMemberFuncHandle(INetworkMsgProcess*, void
   (INetworkMsgProcess::*)(_NetWorkMsg const&)) */

void PacketMemberFuncHandle<INetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
               (INetworkMsgProcess *param_1,_func_void__NetWorkMsg_ptr *param_2)

{
  undefined8 in_x2;
  undefined8 in_x3;
  
  PackMemberFunctionBase::PackMemberFunctionBase((PackMemberFunctionBase *)param_1);
  *(_func_void__NetWorkMsg_ptr **)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = in_x2;
  *(undefined8 *)(param_1 + 0x18) = in_x3;
  *(undefined ***)param_1 = &PTR_Process_06608b10;
  return;
}


/* PacketMemberFuncHandle<androidNetworkMsgProcess,
   _NetWorkMsg>::PacketMemberFuncHandle(androidNetworkMsgProcess*, void
   (androidNetworkMsgProcess::*)(_NetWorkMsg const&)) */

void PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
               (androidNetworkMsgProcess *param_1,_func_void__NetWorkMsg_ptr *param_2)

{
  undefined8 in_x2;
  undefined8 in_x3;
  
  PackMemberFunctionBase::PackMemberFunctionBase((PackMemberFunctionBase *)param_1);
  *(_func_void__NetWorkMsg_ptr **)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = in_x2;
  *(undefined8 *)(param_1 + 0x18) = in_x3;
  *(undefined ***)param_1 = &PTR_Process_06609070;
  return;
}

