// Class: LevelEditorEvilDaveSeedPacket


/* LevelEditorEvilDaveSeedPacket::onChangeCardInfo() */

void __thiscall LevelEditorEvilDaveSeedPacket::onChangeCardInfo(LevelEditorEvilDaveSeedPacket *this)

{
  char cVar1;
  
  cVar1 = FUN_0547419c((string *)(this + 0xf0));
  if (cVar1 != '\0') {
    CustomLevelUtils::RemoveEvilDaveZombie(*(int *)(this + 0xd4));
    return;
  }
  CustomLevelUtils::AddEvilDaveZombie(*(int *)(this + 0xd4),(string *)(this + 0xf0));
  return;
}


/* LevelEditorEvilDaveSeedPacket::~LevelEditorEvilDaveSeedPacket() */

void __thiscall
LevelEditorEvilDaveSeedPacket::~LevelEditorEvilDaveSeedPacket(LevelEditorEvilDaveSeedPacket *this)

{
  *(undefined ***)this = &PTR_GetClass_0695e830;
  LevelEditorSeedPacket::~LevelEditorSeedPacket((LevelEditorSeedPacket *)this);
  return;
}


/* LevelEditorEvilDaveSeedPacket::~LevelEditorEvilDaveSeedPacket() */

void __thiscall
LevelEditorEvilDaveSeedPacket::~LevelEditorEvilDaveSeedPacket(LevelEditorEvilDaveSeedPacket *this)

{
  ~LevelEditorEvilDaveSeedPacket(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorEvilDaveSeedPacket::LevelEditorEvilDaveSeedPacket(LevelEditorEvilDaveSeedBank*) */

void __thiscall
LevelEditorEvilDaveSeedPacket::LevelEditorEvilDaveSeedPacket
          (LevelEditorEvilDaveSeedPacket *this,LevelEditorEvilDaveSeedBank *param_1)

{
  LevelEditorSeedPacket::LevelEditorSeedPacket((LevelEditorSeedPacket *)this);
  *(LevelEditorEvilDaveSeedBank **)(this + 0x100) = param_1;
  *(undefined ***)this = &PTR_GetClass_0695e830;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorEvilDaveSeedPacket::Draw(Sexy::Graphics*) */

void __thiscall
LevelEditorEvilDaveSeedPacket::Draw(LevelEditorEvilDaveSeedPacket *this,Graphics *param_1)

{
  undefined8 uVar1;
  SeedPacketUtils *this_00;
  PacketRenderData *pPVar2;
  DeviceImage *pDVar3;
  Image *pIVar4;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85798);
  Draw9SliceImage(param_1,aIStack_18,uVar1);
  pIVar4 = *(Image **)(this + 0xf8);
  if (pIVar4 == (Image *)0x0) {
    this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    std::string::string((string *)aIStack_18,"");
    pPVar2 = (PacketRenderData *)
             SeedPacketUtils::GetZombiePacketRenderData
                       (this_00,(string *)(this + 0xf0),(string *)aIStack_18,-1);
    std::string::~string((string *)aIStack_18);
    nop();
    pDVar3 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(this_00,pPVar2,0,0);
    *(DeviceImage **)(this + 0xf8) = pDVar3;
    SeedPacketUtils::DrawPacketToDeviceImage(this_00,pDVar3,pPVar2,false,-1,false,false);
    pIVar4 = *(Image **)(this + 0xf8);
    if (pIVar4 == (Image *)0x0) goto LAB_04b3c700;
  }
  Sexy::Graphics::DrawImage(param_1,pIVar4,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
LAB_04b3c700:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorEvilDaveSeedPacket::CanSetTypeName(std::string const&) */

void __thiscall
LevelEditorEvilDaveSeedPacket::CanSetTypeName(LevelEditorEvilDaveSeedPacket *this,string *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(*(long *)(this + 0x100) + 0xe0));
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(*(long *)(this + 0x100) + 0xe0));
  local_18 = FUN_04b3fd98(uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(*(long *)(this + 0x100) + 0xe0));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(!bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorEvilDaveSeedPacket::Reload() */

void __thiscall LevelEditorEvilDaveSeedPacket::Reload(LevelEditorEvilDaveSeedPacket *this)

{
  bool bVar1;
  undefined8 uVar2;
  string asStack_20 [8];
  PakRecord aPStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = CustomLevelUtils::GetEvilDaveZombieTypeName(*(int *)(this + 0xd4));
  FUN_05475d88(asStack_20,uVar2);
  bVar1 = std::operator!=(asStack_20,"");
  if (bVar1) {
    LevelEditorCardInfo::LevelEditorCardInfo((LevelEditorCardInfo *)aPStack_18,3,asStack_20);
    LevelEditorCardInfo::operator=
              ((LevelEditorCardInfo *)(this + 0xe8),(LevelEditorCardInfo *)aPStack_18);
    PakRecord::~PakRecord(aPStack_18);
    LevelEditorEvilDaveSeedBank::AddTypeName
              (*(LevelEditorEvilDaveSeedBank **)(this + 0x100),(string *)(this + 0xf0));
  }
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorEvilDaveSeedPacket::TouchEnded(Sexy::Touch const&) */

void __thiscall
LevelEditorEvilDaveSeedPacket::TouchEnded(LevelEditorEvilDaveSeedPacket *this,Touch *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  LevelEditorMultifunctionAssembly *this_00;
  LevelEditorEvilDaveSeedChooser *this_01;
  undefined8 uVar6;
  code *pcVar7;
  int local_48;
  int local_44;
  string asStack_40 [8];
  int local_38 [4];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xdc) == (int)*(undefined8 *)param_1) {
    if (*(int *)(this + 0xe8) == 0) {
      this_01 = ::operator_new(0x140);
      LevelEditorEvilDaveSeedChooser::LevelEditorEvilDaveSeedChooser(this_01);
      pcVar7 = *(code **)(*(long *)this_01 + 0x198);
      (**(code **)(*(long *)this + 0xd0))(local_38,this);
      iVar1 = *(int *)(this + 0x50);
      iVar2 = FUN_04b334ec(0x32);
      uVar4 = FUN_04b334ec(0x15e);
      uVar5 = FUN_04b334ec(0x208);
      (*pcVar7)(this_01,local_38[0] + iVar1 + iVar2,iVar2,uVar4,uVar5);
      uVar6 = LevelEditorUtil::ShowDialogWithTouchClose((Widget *)this_01,true);
      FUN_04b32f24(afStack_28,this,uVar6);
      LevelEditorEvilDaveSeedChooser::Init(this_01,afStack_28);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    }
    else {
      this_00 = ::operator_new(0x120);
      LevelEditorMultifunctionAssembly::LevelEditorMultifunctionAssembly(this_00);
      (**(code **)(*(long *)this + 0xd0))(&local_48,this);
      iVar1 = *(int *)(this + 0x50);
      iVar2 = FUN_04b334ec(10);
      iVar3 = FUN_04b334ec(0x28);
      Sexy::Insets::Insets
                ((Insets *)local_38,local_48 + iVar1 + iVar2,
                 local_44 + (*(int *)(this + 0x54) - iVar3) / 2,iVar3,iVar3);
      FUN_04b32960(afStack_28,this_00,this);
      std::string::string(asStack_40,"delete");
      LevelEditorMultifunctionAssembly::AttachButton
                (this_00,1,(Insets *)local_38,afStack_28,asStack_40);
      std::string::~string(asStack_40);
      nop();
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
      UIUtil::ShowDialog((Widget *)this_00);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

