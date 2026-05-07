// Class: Lua::CUISeedPacket


/* Lua::CUISeedPacket::~CUISeedPacket() */

void __thiscall Lua::CUISeedPacket::~CUISeedPacket(CUISeedPacket *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2c4f0;
  std::string::~string((string *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* Lua::CUISeedPacket::~CUISeedPacket() */

void __thiscall Lua::CUISeedPacket::~CUISeedPacket(CUISeedPacket *this)

{
  ~CUISeedPacket(this);
  AK::FreeHook(this);
  return;
}


/* Lua::CUISeedPacket::CUISeedPacket() */

void __thiscall Lua::CUISeedPacket::CUISeedPacket(CUISeedPacket *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06a2c4f0;
  Set8BytesTo0(this + 0xd8);
  *(undefined4 *)(this + 0xd4) = 0;
  return;
}


/* Lua::CUISeedPacket::SetPlantPieceType(char const*) */

void __thiscall Lua::CUISeedPacket::SetPlantPieceType(CUISeedPacket *this,char *param_1)

{
  if (param_1 != (char *)0x0) {
    *(undefined4 *)(this + 0xd4) = 2;
    std::string::append((string *)(this + 0xd8),param_1,(size_t)this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CUISeedPacket::SetGameItem(int) */

void __thiscall Lua::CUISeedPacket::SetGameItem(CUISeedPacket *this,int param_1)

{
  int local_38;
  undefined4 local_34;
  undefined1 auStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetGameItemInfo(param_1,0x7fffffff,0);
  if (local_38 == param_1) {
    *(undefined4 *)(this + 0xd4) = local_34;
    thunk_FUN_05475e00(this + 0xd8,auStack_28);
    GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_38);
  }
  else {
    GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CUISeedPacket::DrawPacketRenderData(Sexy::Graphics*, PacketRenderData const&, int, int) */

void Lua::CUISeedPacket::DrawPacketRenderData
               (Graphics *param_1,PacketRenderData *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  ResourceInfo *pRVar4;
  RtWeakPtr *this;
  long lVar5;
  double dVar6;
  double dVar7;
  Insets aIStack_18 [16];
  long local_8;
  
  dVar7 = (double)param_3 / (double)*(int *)(param_2 + 0x28);
  this = (RtWeakPtr *)(param_2 + 0x170);
  iVar1 = *(int *)(param_2 + 0x30);
  iVar2 = *(int *)(param_2 + 0x34);
  dVar6 = (double)param_4 / (double)*(int *)(param_2 + 0x2c);
  local_8 = ___stack_chk_guard;
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
  Sexy::Insets::Insets
            (aIStack_18,(int)(dVar7 * (double)-iVar1 + (double)*(int *)(param_2 + 0x30) * dVar7),
             (int)(dVar6 * (double)-iVar2 + (double)*(int *)(param_2 + 0x34) * dVar6),param_3,
             param_4);
  Sexy::Graphics::DrawImage(param_1,(Image *)pRVar4,(TRect *)aIStack_18,(TRect *)(param_2 + 0x20));
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)param_2);
  if (bVar3) {
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    this = (RtWeakPtr *)(lVar5 + 0x48);
  }
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
  Sexy::Insets::Insets
            (aIStack_18,(int)(dVar7 * (double)-iVar1 + (double)*(int *)(param_2 + 0x18) * dVar7),
             (int)(dVar6 * (double)-iVar2 + (double)*(int *)(param_2 + 0x1c) * dVar6),
             (int)(dVar7 * (double)*(int *)(param_2 + 0x10)),
             (int)(dVar6 * (double)*(int *)(param_2 + 0x14)));
  Sexy::Graphics::DrawImage(param_1,(Image *)pRVar4,(TRect *)aIStack_18,(TRect *)(param_2 + 8));
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* Lua::CUISeedPacket::Draw(Sexy::Graphics*) */

void __thiscall Lua::CUISeedPacket::Draw(CUISeedPacket *this,Graphics *param_1)

{
  SeedPacketUtils *pSVar1;
  PacketRenderData *pPVar2;
  
  if (*(int *)(this + 0xd4) == 1) {
    pSVar1 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    pPVar2 = (PacketRenderData *)
             SeedPacketUtils::GetPlantPacketRenderData(pSVar1,(string *)(this + 0xd8),-1,-1,-1);
    DrawPacketRenderData(param_1,pPVar2,*(int *)(this + 0x50),*(int *)(this + 0x54));
    return;
  }
  if (*(int *)(this + 0xd4) == 2) {
    pSVar1 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    pPVar2 = (PacketRenderData *)
             SeedPacketUtils::GetPlantPiecePacketRenderData(pSVar1,(string *)(this + 0xd8));
    DrawPacketRenderData(param_1,pPVar2,*(int *)(this + 0x50),*(int *)(this + 0x54));
    return;
  }
  return;
}

