// Class: ToolPacketDataFactory


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToolPacketDataFactory::CreateData(std::string const&) */

void ToolPacketDataFactory::CreateData(string *param_1)

{
  string *psVar1;
  long lVar2;
  char *pcVar3;
  long *extraout_x0;
  code *pcVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ToolPacketProps>>::GetInstancePtr();
  ObjectTypeDirectory<ToolPacketProps>::GetTypeFromTypeName(psVar1);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  pcVar3 = (char *)FUN_0547429c(lVar2 + 0x10);
  lVar2 = Sexy::RtClass::StaticGetClassNamed(pcVar3);
  FUN_0442dea4(*(undefined8 *)(lVar2 + 0x18));
  nop();
  pcVar4 = *(code **)(*extraout_x0 + 0x48);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  (*pcVar4)(extraout_x0,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(extraout_x0);
}

