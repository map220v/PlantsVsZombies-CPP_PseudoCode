// Class: CollectableSeedPacketZombie


/* CollectableSeedPacketZombie::CalcRenderOrder() const */

undefined8 CollectableSeedPacketZombie::CalcRenderOrder(void)

{
  return 0x7a508;
}


/* non-virtual thunk to CollectableSeedPacketZombie::CalcRenderOrder() const */

void __thiscall CollectableSeedPacketZombie::CalcRenderOrder(CollectableSeedPacketZombie *this)

{
  CalcRenderOrder();
  return;
}


/* CollectableSeedPacketZombie::drawSelectionMarker() */

bool __thiscall CollectableSeedPacketZombie::drawSelectionMarker(CollectableSeedPacketZombie *this)

{
  return *(long *)(this + 0x210) != 0;
}


/* CollectableSeedPacketZombie::Android_OnAppResumeFocus() */

void __thiscall
CollectableSeedPacketZombie::Android_OnAppResumeFocus(CollectableSeedPacketZombie *this)

{
  if (*(long **)(this + 0x208) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x208) + 0x18))();
  }
  *(undefined8 *)(this + 0x208) = 0;
  return;
}


/* CollectableSeedPacketZombie::onDestroy() */

void __thiscall CollectableSeedPacketZombie::onDestroy(CollectableSeedPacketZombie *this)

{
  if (*(long **)(this + 0x208) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x208) + 0x18))();
    *(undefined8 *)(this + 0x208) = 0;
  }
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  return;
}


/* CollectableSeedPacketZombie::onCursorDestroyed(BaseCursor*) */

void __thiscall
CollectableSeedPacketZombie::onCursorDestroyed
          (CollectableSeedPacketZombie *this,BaseCursor *param_1)

{
  char cVar1;
  
  if (*(LuaUpdater **)(this + 0x210) != (LuaUpdater *)param_1) {
    return;
  }
  cVar1 = Lua::LuaUpdater::GetBlocked(*(LuaUpdater **)(this + 0x210));
  if (cVar1 == '\0') {
    Collectable::SetPauseExpirationTimer((Collectable *)this,false);
    *(undefined8 *)(this + 0x210) = 0;
  }
  else {
    (**(code **)(*(long *)this + 0x48))(this);
    *(undefined8 *)(this + 0x210) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableSeedPacketZombie::StaticClassInit() */

void CollectableSeedPacketZombie::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"CollectableSeedPacketZombie");
    (*pcVar2)(plVar1,asStack_10,FUN_03c68774,0x220,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableSeedPacketZombie::StaticGetClass() */

long * CollectableSeedPacketZombie::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = Collectable::StaticGetClass();
  (*pcVar3)(plVar1,"CollectableSeedPacketZombie",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectableSeedPacketZombie::GetClass() const */

long * CollectableSeedPacketZombie::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = Collectable::StaticGetClass();
  (*pcVar3)(plVar1,"CollectableSeedPacketZombie",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableSeedPacketZombie::onTouchEvent(Sexy::Touch const&) */

void __thiscall
CollectableSeedPacketZombie::onTouchEvent(CollectableSeedPacketZombie *this,Touch *param_1)

{
  char cVar1;
  char cVar2;
  Insets *pIVar3;
  BaseCursor *pBVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  Insets aIStack_28 [16];
  undefined1 auStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Collectable::IsTouched((Collectable *)this,param_1);
  if (cVar1 != '\0') {
    if (*(int *)(param_1 + 0x30) == 0) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)(this + 0x200));
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)(this + 0x218));
      pIVar3 = (Insets *)(**(code **)(*(long *)this + 0x178))(this);
      Sexy::Insets::Insets(aIStack_28,pIVar3);
      FUN_03c674b8(auStack_18,aIStack_28);
      pBVar4 = ::operator_new(0x60);
      ZombieCursor::ZombieCursor((ZombieCursor *)pBVar4,param_1,aRStack_38,aRStack_30,auStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      cVar2 = Board::TryToAddCursor(*(Board **)(gLawnApp + 0x9f0),pBVar4,true);
      if (cVar2 != '\0') {
        *(BaseCursor **)(this + 0x210) = pBVar4;
      }
      Collectable::SetPauseExpirationTimer((Collectable *)this,true);
    }
    else {
      cVar1 = '\0';
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* CollectableSeedPacketZombie::~CollectableSeedPacketZombie() */

void __thiscall
CollectableSeedPacketZombie::~CollectableSeedPacketZombie(CollectableSeedPacketZombie *this)

{
  *(undefined ***)this = &PTR_GetClass_06756f50;
  *(undefined ***)(this + 0x10) = &PTR__CollectableSeedPacketZombie_067571b0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x218));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x200));
  Collectable::~Collectable((Collectable *)this);
  return;
}


/* non-virtual thunk to CollectableSeedPacketZombie::~CollectableSeedPacketZombie() */

void __thiscall
CollectableSeedPacketZombie::~CollectableSeedPacketZombie(CollectableSeedPacketZombie *this)

{
  ~CollectableSeedPacketZombie(this + -0x10);
  return;
}


/* CollectableSeedPacketZombie::~CollectableSeedPacketZombie() */

void __thiscall
CollectableSeedPacketZombie::~CollectableSeedPacketZombie(CollectableSeedPacketZombie *this)

{
  ~CollectableSeedPacketZombie(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CollectableSeedPacketZombie::~CollectableSeedPacketZombie() */

void __thiscall
CollectableSeedPacketZombie::~CollectableSeedPacketZombie(CollectableSeedPacketZombie *this)

{
  ~CollectableSeedPacketZombie(this + -0x10);
  return;
}


/* CollectableSeedPacketZombie::spawnZombie() */

void __thiscall CollectableSeedPacketZombie::spawnZombie(CollectableSeedPacketZombie *this)

{
  Zombie *this_00;
  
  this_00 = (Zombie *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x218));
  if (this_00 != (Zombie *)0x0) {
    Zombie::SetIgnoresAllDamage(this_00,false);
    Zombie::SetIsTargetable(this_00,true);
    Zombie::EndCondition(this_00,0x18);
    Zombie::EndCondition(this_00,0x9a);
    (**(code **)(*(long *)this_00 + 0x80))(this_00,0);
    Zombie::SetIgnoreFindTarget(this_00,false);
    Zombie::SetIgnoresCollisions(this_00,false);
    Zombie::InvokeInvisible(this_00,false,false,false);
    Zombie::SetIsControlled(this_00,false);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableSeedPacketZombie::drawToBuffer() */

void __thiscall CollectableSeedPacketZombie::drawToBuffer(CollectableSeedPacketZombie *this)

{
  SeedPacketUtils *this_00;
  long lVar1;
  PacketRenderData *pPVar2;
  DeviceImage *pDVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x200));
  std::string::string(asStack_10,"IMAGE_UI_ZOMBIE_PVP1_PACKETS_");
  pPVar2 = (PacketRenderData *)
           SeedPacketUtils::GetZombiePacketRenderData(this_00,(string *)(lVar1 + 8),asStack_10,-1);
  std::string::~string(asStack_10);
  nop();
  pDVar3 = *(DeviceImage **)(this + 0x208);
  if (pDVar3 == (DeviceImage *)0x0) {
    pDVar3 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(this_00,pPVar2,0,0);
    *(DeviceImage **)(this + 0x208) = pDVar3;
  }
  SeedPacketUtils::DrawPacketToDeviceImage(this_00,pDVar3,pPVar2,false,-1,false,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableSeedPacketZombie::onDraw(Sexy::Graphics*) */

void __thiscall
CollectableSeedPacketZombie::onDraw(CollectableSeedPacketZombie *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  Image *pIVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  GraphicsAutoState aGStack_28 [8];
  undefined4 local_20;
  float local_1c;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  drawToBuffer(this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_28,param_1);
  Collectable::getDesiredEffectColor();
  fVar8 = *(float *)(this + 0x1c);
  local_20 = FUN_03c66684(*(undefined4 *)(this + 0x18),fVar8,*(undefined4 *)(this + 0x20));
  local_1c = fVar8;
  fVar5 = (float)FUN_03c66900();
  fVar5 = (float)Sexy::SexyVector2::operator*((SexyVector2 *)&local_20,fVar5);
  lVar4 = *(long *)(this + 0x208);
  fVar6 = (float)FUN_03c665cc(*(undefined4 *)(this + 0xb8));
  iVar1 = *(int *)(lVar4 + 0x38);
  iVar2 = *(int *)(lVar4 + 0x3c);
  fVar9 = *(float *)(param_1 + 0x20);
  fVar11 = *(float *)(param_1 + 0x24);
  fVar12 = *(float *)(param_1 + 0x18);
  fVar10 = *(float *)(param_1 + 0x1c);
  Sexy::Graphics::SetColor(param_1,aCStack_18);
  Sexy::Graphics::SetColorizeImages(param_1,true);
  pIVar3 = *(Image **)(this + 0x208);
  fVar7 = (float)FUN_03c665cc(*(undefined4 *)(this + 0xb8));
  Sexy::Graphics::DrawImage
            (param_1,pIVar3,
             (int)((float)(int)(((fVar5 - fVar6 * (float)iVar1 * 0.5) - fVar9) * fVar12) + fVar9),
             (int)((float)(int)(((fVar8 - fVar6 * (float)iVar2 * 0.5) - fVar11) * fVar10) + fVar11),
             (int)((float)*(int *)(pIVar3 + 0x38) * *(float *)(param_1 + 0x18) * fVar7),
             (int)((float)*(int *)(pIVar3 + 0x3c) * *(float *)(param_1 + 0x1c) * fVar7));
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableSeedPacketZombie::CollectableSeedPacketZombie() */

void __thiscall
CollectableSeedPacketZombie::CollectableSeedPacketZombie(CollectableSeedPacketZombie *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Collectable::Collectable((Collectable *)this);
  *(undefined4 *)(this + 0x1f0) = 0xffffffff;
  this[500] = (CollectableSeedPacketZombie)0x0;
  *(undefined ***)this = &PTR_GetClass_06756f50;
  *(undefined ***)(this + 0x10) = &PTR__CollectableSeedPacketZombie_067571b0;
  *(undefined4 *)(this + 0x1f8) = 0xbf800000;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x200));
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x218));
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,Android_OnAppResumeFocus);
  Sexy::Delegate0::Delegate0<CollectableSeedPacketZombie,void(CollectableSeedPacketZombie::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::AppResumeFocus,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableSeedPacketZombie::StaticNew() */

CollectableSeedPacketZombie * CollectableSeedPacketZombie::StaticNew(void)

{
  CollectableSeedPacketZombie *this;
  
  this = ::operator_new(0x220);
  CollectableSeedPacketZombie(this);
  return this;
}


/* CollectableSeedPacketZombie::registerForEvents() */

void __thiscall CollectableSeedPacketZombie::registerForEvents(CollectableSeedPacketZombie *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Collectable::registerForEvents((Collectable *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCursorDestroyed);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<CollectableSeedPacketZombie,void(CollectableSeedPacketZombie::*)(BaseCursor*)>>
            ((MessageRouter *)puVar1,Message::CursorDestroyed,&local_40);
  return;
}

