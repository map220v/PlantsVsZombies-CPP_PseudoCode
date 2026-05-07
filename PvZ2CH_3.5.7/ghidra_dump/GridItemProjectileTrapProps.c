// Class: GridItemProjectileTrapProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProjectileTrapProps::GridItemProjectileTrapProps() */

void __thiscall
GridItemProjectileTrapProps::GridItemProjectileTrapProps(GridItemProjectileTrapProps *this)

{
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemTriggerTileProps::GridItemTriggerTileProps((GridItemTriggerTileProps *)this);
  *(undefined ***)this = &PTR_GetClass_06788980;
  std::
  vector<GridItemProjectileTrapPositioningFlags,std::allocator<GridItemProjectileTrapPositioningFlags>>
  ::vector((vector<GridItemProjectileTrapPositioningFlags,std::allocator<GridItemProjectileTrapPositioningFlags>>
            *)(this + 0x100),&DAT_057528f0,1,auStack_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x118));
  Set8BytesTo0(this + 0x120);
  DVec3::DVec3((DVec3 *)(this + 0x128));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemProjectileTrapProps::StaticNew() */

GridItemProjectileTrapProps * GridItemProjectileTrapProps::StaticNew(void)

{
  GridItemProjectileTrapProps *this;
  
  this = ::operator_new(0x138);
  GridItemProjectileTrapProps(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProjectileTrapProps::StaticClassInit() */

void GridItemProjectileTrapProps::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 local_38 [2];
  pair<std::string,unsigned_int> apStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"manual",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"lockx",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"locky",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 3;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"lockall",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"GridItemProjectileTrapPositioningFlags");
    (*pcVar3)(plVar2,apStack_30,avStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_20);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"GridItemProjectileTrapProps");
    (*pcVar3)(plVar2,avStack_20,FUN_03e2f3ac,0x138,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemProjectileTrapProps::StaticGetClass() */

long * GridItemProjectileTrapProps::StaticGetClass(void)

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
  uVar2 = GridItemTriggerTileProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemProjectileTrapProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemProjectileTrapProps::GetClass() const */

long * GridItemProjectileTrapProps::GetClass(void)

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
  uVar2 = GridItemTriggerTileProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemProjectileTrapProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemProjectileTrapProps::~GridItemProjectileTrapProps() */

void __thiscall
GridItemProjectileTrapProps::~GridItemProjectileTrapProps(GridItemProjectileTrapProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06788980;
  std::string::~string((string *)(this + 0x120));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x118));
  std::
  vector<GridItemProjectileTrapPositioningFlags,std::allocator<GridItemProjectileTrapPositioningFlags>>
  ::~vector((vector<GridItemProjectileTrapPositioningFlags,std::allocator<GridItemProjectileTrapPositioningFlags>>
             *)(this + 0x100));
  GridItemTriggerTileProps::~GridItemTriggerTileProps((GridItemTriggerTileProps *)this);
  return;
}


/* GridItemProjectileTrapProps::~GridItemProjectileTrapProps() */

void __thiscall
GridItemProjectileTrapProps::~GridItemProjectileTrapProps(GridItemProjectileTrapProps *this)

{
  ~GridItemProjectileTrapProps(this);
  AK::FreeHook(this);
  return;
}

