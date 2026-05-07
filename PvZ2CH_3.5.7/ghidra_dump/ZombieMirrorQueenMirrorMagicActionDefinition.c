// Class: ZombieMirrorQueenMirrorMagicActionDefinition


/* ZombieMirrorQueenMirrorMagicActionDefinition::~ZombieMirrorQueenMirrorMagicActionDefinition() */

void __thiscall
ZombieMirrorQueenMirrorMagicActionDefinition::~ZombieMirrorQueenMirrorMagicActionDefinition
          (ZombieMirrorQueenMirrorMagicActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_06a0edb0;
  ZombieActionDefinition::~ZombieActionDefinition((ZombieActionDefinition *)this);
  return;
}


/* ZombieMirrorQueenMirrorMagicActionDefinition::~ZombieMirrorQueenMirrorMagicActionDefinition() */

void __thiscall
ZombieMirrorQueenMirrorMagicActionDefinition::~ZombieMirrorQueenMirrorMagicActionDefinition
          (ZombieMirrorQueenMirrorMagicActionDefinition *this)

{
  ~ZombieMirrorQueenMirrorMagicActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMirrorQueenMirrorMagicActionDefinition::StaticClassInit() */

void ZombieMirrorQueenMirrorMagicActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieMirrorQueenMirrorMagicActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_04f07f48,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieMirrorQueenMirrorMagicActionDefinition::StaticGetClass() */

long * ZombieMirrorQueenMirrorMagicActionDefinition::StaticGetClass(void)

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
  uVar2 = ZombieActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieMirrorQueenMirrorMagicActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMirrorQueenMirrorMagicActionDefinition::GetClass() const */

long * ZombieMirrorQueenMirrorMagicActionDefinition::GetClass(void)

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
  uVar2 = ZombieActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieMirrorQueenMirrorMagicActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMirrorQueenMirrorMagicActionDefinition::ZombieMirrorQueenMirrorMagicActionDefinition() */

void __thiscall
ZombieMirrorQueenMirrorMagicActionDefinition::ZombieMirrorQueenMirrorMagicActionDefinition
          (ZombieMirrorQueenMirrorMagicActionDefinition *this)

{
  ZombieActionDefinition::ZombieActionDefinition((ZombieActionDefinition *)this);
  *(undefined ***)this = &PTR_GetClass_06a0edb0;
  return;
}


/* ZombieMirrorQueenMirrorMagicActionDefinition::StaticNew() */

ZombieMirrorQueenMirrorMagicActionDefinition *
ZombieMirrorQueenMirrorMagicActionDefinition::StaticNew(void)

{
  ZombieMirrorQueenMirrorMagicActionDefinition *this;
  
  this = ::operator_new(0x38);
  ZombieMirrorQueenMirrorMagicActionDefinition(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMirrorQueenMirrorMagicActionDefinition::pickAPointToPlaceAMirror(Sexy::Point&) const */

void __thiscall
ZombieMirrorQueenMirrorMagicActionDefinition::pickAPointToPlaceAMirror
          (ZombieMirrorQueenMirrorMagicActionDefinition *this,Point *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  Board *this_00;
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  iVar1 = BoardConstants::NUMBER_OF_ROWS();
  if (0 < iVar1) {
    do {
      this_00 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_28,"zombie_mirror_queen_mirror");
      lVar3 = Board::GetGridItemAt(this_00,asStack_28,6,iVar2);
      std::string::~string(asStack_28);
      nop();
      if (lVar3 == 0) {
        Sexy::Point::Point((Point *)asStack_28,6,iVar2);
        std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                  ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,(Point *)asStack_28)
        ;
      }
      iVar2 = iVar2 + 1;
      iVar1 = BoardConstants::NUMBER_OF_ROWS();
    } while (iVar2 < iVar1);
  }
  lVar3 = FUN_04f05dac(local_20,local_18);
  if (lVar3 == 0) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 1;
      Sexy::Point::Point((Point *)asStack_28,6,iVar2);
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,(Point *)asStack_28);
      iVar2 = iVar1;
    } while (iVar1 != 5);
    lVar3 = FUN_04f05dac(local_20,local_18);
    if (lVar3 == 0) goto LAB_04f0ee60;
  }
  iVar2 = Sexy::Rand((int)lVar3);
  puVar4 = (undefined8 *)FUN_04f05db8(local_20,(long)iVar2);
  *(undefined8 *)param_1 = *puVar4;
LAB_04f0ee60:
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x04f1059c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombieMirrorQueenMirrorMagicActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition
   const>, ZombieWithActions*) const */

void ZombieMirrorQueenMirrorMagicActionDefinition::TryStartAction
               (ZombieMirrorQueenMirrorMagicActionDefinition *param_1,RtWeakPtrBase *param_2)

{
  ZombieWithActions *pZVar1;
  ZombieMirrorQueenMirrorMagicActionHandler *pZVar2;
  Point aPStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_18,-1,-1);
  pZVar1 = (ZombieWithActions *)pickAPointToPlaceAMirror(param_1,aPStack_18);
  if (((ulong)pZVar1 & 0xff) != 0) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    pZVar2 = ZombieWithActions::QueueAction<ZombieMirrorQueenMirrorMagicActionHandler>
                       (pZVar1,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::Point::Point((Point *)aRStack_10,(TPoint *)aPStack_18);
    ZombieMirrorQueenMirrorMagicActionHandler::setGridPosition(pZVar2,aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

