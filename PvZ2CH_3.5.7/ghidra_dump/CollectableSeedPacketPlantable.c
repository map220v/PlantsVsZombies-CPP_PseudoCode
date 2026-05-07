// Class: CollectableSeedPacketPlantable


/* CollectableSeedPacketPlantable::drawSelectionMarker() */

bool __thiscall
CollectableSeedPacketPlantable::drawSelectionMarker(CollectableSeedPacketPlantable *this)

{
  return *(long *)(this + 0x200) != 0;
}


/* CollectableSeedPacketPlantable::onCursorDestroyed(BaseCursor*) */

void __thiscall
CollectableSeedPacketPlantable::onCursorDestroyed
          (CollectableSeedPacketPlantable *this,BaseCursor *param_1)

{
  char cVar1;
  
  if (*(LuaUpdater **)(this + 0x200) != (LuaUpdater *)param_1) {
    return;
  }
  cVar1 = Lua::LuaUpdater::GetBlocked(*(LuaUpdater **)(this + 0x200));
  if (cVar1 == '\0') {
    Collectable::SetPauseExpirationTimer((Collectable *)this,false);
    *(undefined8 *)(this + 0x200) = 0;
  }
  else {
    (**(code **)(*(long *)this + 0x48))(this);
    *(undefined8 *)(this + 0x200) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableSeedPacketPlantable::StaticClassInit() */

void CollectableSeedPacketPlantable::StaticClassInit(void)

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
    std::string::string(asStack_10,"CollectableSeedPacketPlantable");
    (*pcVar2)(plVar1,asStack_10,FUN_03c66e24,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableSeedPacketPlantable::StaticGetClass() */

long * CollectableSeedPacketPlantable::StaticGetClass(void)

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
  uVar2 = CollectableSeedPacket::StaticGetClass();
  (*pcVar3)(plVar1,"CollectableSeedPacketPlantable",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectableSeedPacketPlantable::GetClass() const */

long * CollectableSeedPacketPlantable::GetClass(void)

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
  uVar2 = CollectableSeedPacket::StaticGetClass();
  (*pcVar3)(plVar1,"CollectableSeedPacketPlantable",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableSeedPacketPlantable::onTouchEvent(Sexy::Touch const&) */

void __thiscall
CollectableSeedPacketPlantable::onTouchEvent(CollectableSeedPacketPlantable *this,Touch *param_1)

{
  char cVar1;
  char cVar2;
  Insets *pIVar3;
  ArenaEditPlantCursor *this_00;
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  Insets aIStack_28 [16];
  undefined1 auStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Collectable::IsTouched((Collectable *)this,param_1);
  if (cVar1 != '\0') {
    if (*(int *)(param_1 + 0x30) == 0) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)(this + 0x1f0));
      pIVar3 = (Insets *)(**(code **)(*(long *)this + 0x178))(this);
      Sexy::Insets::Insets(aIStack_28,pIVar3);
      FUN_03c674b8(auStack_18,aIStack_28);
      this_00 = ::operator_new(0x58);
      PlantCursor::PlantCursor
                ((PlantCursor *)this_00,param_1,aRStack_30,auStack_18,0,
                 *(undefined4 *)(this + 0x208));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      ArenaEditPlantCursor::SetPlantingFreeForCursor(this_00,true);
      cVar2 = Board::TryToAddCursor(*(Board **)(gLawnApp + 0x9f0),(BaseCursor *)this_00,true);
      if (cVar2 != '\0') {
        *(ArenaEditPlantCursor **)(this + 0x200) = this_00;
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


/* CollectableSeedPacketPlantable::~CollectableSeedPacketPlantable() */

void __thiscall
CollectableSeedPacketPlantable::~CollectableSeedPacketPlantable
          (CollectableSeedPacketPlantable *this)

{
  *(undefined ***)this = &PTR_GetClass_06756cc0;
  *(undefined ***)(this + 0x10) = &PTR__CollectableSeedPacketPlantable_06756f20;
  CollectableSeedPacket::~CollectableSeedPacket((CollectableSeedPacket *)this);
  return;
}


/* non-virtual thunk to CollectableSeedPacketPlantable::~CollectableSeedPacketPlantable() */

void __thiscall
CollectableSeedPacketPlantable::~CollectableSeedPacketPlantable
          (CollectableSeedPacketPlantable *this)

{
  ~CollectableSeedPacketPlantable(this + -0x10);
  return;
}


/* CollectableSeedPacketPlantable::~CollectableSeedPacketPlantable() */

void __thiscall
CollectableSeedPacketPlantable::~CollectableSeedPacketPlantable
          (CollectableSeedPacketPlantable *this)

{
  ~CollectableSeedPacketPlantable(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CollectableSeedPacketPlantable::~CollectableSeedPacketPlantable() */

void __thiscall
CollectableSeedPacketPlantable::~CollectableSeedPacketPlantable
          (CollectableSeedPacketPlantable *this)

{
  ~CollectableSeedPacketPlantable(this + -0x10);
  return;
}


/* CollectableSeedPacketPlantable::CollectableSeedPacketPlantable() */

void __thiscall
CollectableSeedPacketPlantable::CollectableSeedPacketPlantable(CollectableSeedPacketPlantable *this)

{
  undefined4 uVar1;
  
  CollectableSeedPacket::CollectableSeedPacket((CollectableSeedPacket *)this);
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined ***)this = &PTR_GetClass_06756cc0;
  *(undefined ***)(this + 0x10) = &PTR__CollectableSeedPacketPlantable_06756f20;
  *(undefined4 *)(this + 0x208) = 0xffffffff;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x20c) = uVar1;
  return;
}


/* CollectableSeedPacketPlantable::StaticNew() */

CollectableSeedPacketPlantable * CollectableSeedPacketPlantable::StaticNew(void)

{
  CollectableSeedPacketPlantable *this;
  
  this = ::operator_new(0x210);
  CollectableSeedPacketPlantable(this);
  return this;
}


/* CollectableSeedPacketPlantable::registerForEvents() */

void __thiscall
CollectableSeedPacketPlantable::registerForEvents(CollectableSeedPacketPlantable *this)

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
  Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<CollectableSeedPacketPlantable,void(CollectableSeedPacketPlantable::*)(BaseCursor*)>>
            ((MessageRouter *)puVar1,Message::CursorDestroyed,&local_40);
  return;
}

