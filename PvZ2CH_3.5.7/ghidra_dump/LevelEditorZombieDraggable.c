// Class: LevelEditorZombieDraggable


/* LevelEditorZombieDraggable::TouchMoved(Sexy::Touch const&) */

void __thiscall
LevelEditorZombieDraggable::TouchMoved(LevelEditorZombieDraggable *this,Touch *param_1)

{
  *(undefined8 *)(this + 0xf4) = *(undefined8 *)(param_1 + 0x10);
  return;
}


/* LevelEditorZombieDraggable::TouchesCanceled() */

void __thiscall LevelEditorZombieDraggable::TouchesCanceled(LevelEditorZombieDraggable *this)

{
  this[0xf0] = (LevelEditorZombieDraggable)0x0;
  return;
}


/* LevelEditorZombieDraggable::~LevelEditorZombieDraggable() */

void __thiscall
LevelEditorZombieDraggable::~LevelEditorZombieDraggable(LevelEditorZombieDraggable *this)

{
  *(undefined ***)this = &PTR_GetClass_06965390;
  if (*(long **)(this + 0xe0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xe0) + 0x18))();
    *(undefined8 *)(this + 0xe0) = 0;
  }
  std::string::~string((string *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorZombieDraggable::~LevelEditorZombieDraggable() */

void __thiscall
LevelEditorZombieDraggable::~LevelEditorZombieDraggable(LevelEditorZombieDraggable *this)

{
  ~LevelEditorZombieDraggable(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorZombieDraggable::LevelEditorZombieDraggable() */

void __thiscall
LevelEditorZombieDraggable::LevelEditorZombieDraggable(LevelEditorZombieDraggable *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined ***)this = &PTR_GetClass_06965390;
  Set8BytesTo0(this + 0xe8);
  this[0xf0] = (LevelEditorZombieDraggable)0x0;
  Sexy::Point::Point((Point *)(this + 0xf4));
  *(undefined4 *)(this + 0xfc) = 0;
  this[0x59] = (LevelEditorZombieDraggable)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorZombieDraggable::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
LevelEditorZombieDraggable::DrawAll
          (LevelEditorZombieDraggable *this,ModalFlags *param_1,Graphics *param_2)

{
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if ((this[0xf0] != (LevelEditorZombieDraggable)0x0) && (*(long *)(this + 0xe0) != 0)) {
    Sexy::Insets::Insets
              (aIStack_18,*(int *)(this + 0xf4) - *(int *)(this + 0x50) / 2,
               *(int *)(this + 0xf8) - *(int *)(this + 0x54) / 2,*(int *)(this + 0x50),
               *(int *)(this + 0x54));
    DrawAdaptiveImage(param_2,aIStack_18,*(undefined8 *)(this + 0xe0));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorZombieDraggable::TouchBegan(Sexy::Touch const&) */

void __thiscall
LevelEditorZombieDraggable::TouchBegan(LevelEditorZombieDraggable *this,Touch *param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  long lVar2;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = FUN_04b534f4(*(undefined4 *)(lVar2 + 0x40));
  if (iVar1 != 0x3c) {
    *(undefined8 *)(this + 0xf4) = *(undefined8 *)(param_1 + 0x10);
    this[0xf0] = (LevelEditorZombieDraggable)0x1;
    return;
  }
  lVar2 = LawnApp::GetGameMaskUI(gLawnApp);
  FUN_04b53674(lVar2 + 0x140);
  *(undefined8 *)(this + 0xf4) = *(undefined8 *)(param_1 + 0x10);
  this[0xf0] = (LevelEditorZombieDraggable)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorZombieDraggable::TouchEnded(Sexy::Touch const&) */

void __thiscall
LevelEditorZombieDraggable::TouchEnded(LevelEditorZombieDraggable *this,Touch *param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  long lVar2;
  RtObject *this_01;
  LevelEditorZombieCursorSlot *pLVar3;
  long *plVar4;
  bool local_21;
  int local_20;
  int local_1c;
  TPoint aTStack_18 [8];
  TPoint aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = FUN_04b534f4(*(undefined4 *)(lVar2 + 0x40));
  if (iVar1 == 0x3c) {
    plVar4 = (long *)LawnApp::GetGameMaskUI(gLawnApp);
    (**(code **)(*plVar4 + 0x158))(plVar4,0);
  }
  this[0xf0] = (LevelEditorZombieDraggable)0x0;
  local_21 = false;
  (**(code **)(*(long *)this + 0xd0))(aTStack_18,this);
  Sexy::TPoint<int>::operator+((TPoint<int> *)(param_1 + 0x10),aTStack_18);
  Sexy::Point::Point((Point *)&local_20,aTStack_10);
  this_01 = (RtObject *)
            Sexy::WidgetContainer::GetWidgetAtHelper
                      (*(WidgetContainer **)(gLawnApp + 0x360),local_20,local_1c,0x10,&local_21,
                       (int *)0x0,(int *)0x0);
  if ((this_01 != (RtObject *)0x0) && (local_21 != false)) {
    do {
      pLVar3 = Sexy::RtObject::Cast<LevelEditorZombieCursorSlot>(this_01);
      if (pLVar3 != (LevelEditorZombieCursorSlot *)0x0) {
        (**(code **)(*(long *)pLVar3 + 0x310))(pLVar3,(Point *)&local_20,this + 0xe8);
        goto LAB_04b5d41c;
      }
      this_01 = *(RtObject **)(this_01 + 0x20);
    } while (this_01 != (RtObject *)0x0);
  }
  iVar1 = FUN_04b534f4(*(undefined4 *)(lVar2 + 0x40));
  if (iVar1 == 0x3c) {
    if (*(int *)(this + 0xfc) == 0) {
      MessageRouter::Broadcast((_func_void *)gMessageRouter);
    }
    else {
      MessageRouter::Broadcast((_func_void *)gMessageRouter);
    }
  }
LAB_04b5d41c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorZombieDraggable::Init(std::string const&) */

void __thiscall LevelEditorZombieDraggable::Init(LevelEditorZombieDraggable *this,string *param_1)

{
  undefined8 uVar1;
  SeedPacketUtils *this_00;
  PacketRenderData *pPVar2;
  DeviceImage *pDVar3;
  string *extraout_x1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  thunk_FUN_05475e00((string *)(this + 0xe8));
  Sexy::StringToUpper((Sexy *)param_1,extraout_x1);
  std::operator+("IMAGE_UI_ZOMBIEALMANAC_PACKETS_ZOMBIES_",asStack_18);
  uVar1 = StringHelper::ToImage(asStack_10,false);
  *(undefined8 *)(this + 0xd8) = uVar1;
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (*(long *)(this + 0xe0) == 0) {
    this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    std::string::string(asStack_10,"IMAGE_UI_ZOMBIE_PVP1_PACKETS_");
    pPVar2 = (PacketRenderData *)
             SeedPacketUtils::GetZombiePacketRenderData
                       (this_00,(string *)(this + 0xe8),asStack_10,-1);
    std::string::~string(asStack_10);
    nop();
    pDVar3 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(this_00,pPVar2,0,0);
    *(DeviceImage **)(this + 0xe0) = pDVar3;
    SeedPacketUtils::DrawPacketToDeviceImage(this_00,pDVar3,pPVar2,false,-1,false,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorZombieDraggable::Draw(Sexy::Graphics*) */

void __thiscall LevelEditorZombieDraggable::Draw(LevelEditorZombieDraggable *this,Graphics *param_1)

{
  undefined8 uVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b864b8);
  Draw9SliceImage(param_1,aIStack_18,uVar1);
  if (*(long *)(this + 0xd8) != 0) {
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0xd8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

