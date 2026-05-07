// Class: SpawnWhackAZombiesAction


/* SpawnWhackAZombiesAction::spawnZombieFromGridItem(BoardEntity*, Zombie*) */

void __thiscall
SpawnWhackAZombiesAction::spawnZombieFromGridItem
          (SpawnWhackAZombiesAction *this,BoardEntity *param_1,Zombie *param_2)

{
  SexyVector3 *pSVar1;
  
  pSVar1 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  BoardEntity::PlaceOnBoard((SexyVector3 *)param_2);
  Zombie::RiseFromGround(param_2,pSVar1,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnWhackAZombiesAction::StaticClassInit() */

void SpawnWhackAZombiesAction::StaticClassInit(void)

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
    std::string::string(asStack_10,"SpawnWhackAZombiesAction");
    (*pcVar2)(plVar1,asStack_10,FUN_04a0db1c,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpawnWhackAZombiesAction::StaticGetClass() */

long * SpawnWhackAZombiesAction::StaticGetClass(void)

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
  uVar2 = SpawnZombiesDelayedFromGridItemsWaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"SpawnWhackAZombiesAction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpawnWhackAZombiesAction::SpawnWhackAZombiesAction() */

void __thiscall SpawnWhackAZombiesAction::SpawnWhackAZombiesAction(SpawnWhackAZombiesAction *this)

{
  SpawnZombiesDelayedFromGridItemsWaveAction::SpawnZombiesDelayedFromGridItemsWaveAction
            ((SpawnZombiesDelayedFromGridItemsWaveAction *)this);
  *(undefined ***)this = &PTR_GetActionClass_0692e030;
  return;
}


/* SpawnWhackAZombiesAction::StaticNew() */

SpawnWhackAZombiesAction * SpawnWhackAZombiesAction::StaticNew(void)

{
  SpawnWhackAZombiesAction *this;
  
  this = ::operator_new(0x78);
  SpawnWhackAZombiesAction(this);
  return this;
}


/* SpawnWhackAZombiesAction::~SpawnWhackAZombiesAction() */

void __thiscall SpawnWhackAZombiesAction::~SpawnWhackAZombiesAction(SpawnWhackAZombiesAction *this)

{
  *(undefined ***)this = &PTR_GetActionClass_0692e030;
  SpawnZombiesDelayedFromGridItemsWaveAction::~SpawnZombiesDelayedFromGridItemsWaveAction
            ((SpawnZombiesDelayedFromGridItemsWaveAction *)this);
  return;
}


/* SpawnWhackAZombiesAction::~SpawnWhackAZombiesAction() */

void __thiscall SpawnWhackAZombiesAction::~SpawnWhackAZombiesAction(SpawnWhackAZombiesAction *this)

{
  ~SpawnWhackAZombiesAction(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnWhackAZombiesAction::getTargetGridItems() */

void __thiscall SpawnWhackAZombiesAction::getTargetGridItems(SpawnWhackAZombiesAction *this)

{
  bool bVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  vector *pvVar2;
  RtWeakPtrBase *pRVar3;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  ResourceInfo *local_28;
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)FUN_04a0ead8(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  pvVar2 = (vector *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_00);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::vector
            (avStack_20,pvVar2);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1) {
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,pRVar3);
    local_28 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_40);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)in_x8,(BoardEntity **)&local_28)
    ;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            (avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

