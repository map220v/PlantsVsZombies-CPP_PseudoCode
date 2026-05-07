// Class: ZombieProjectileLaunchActionDefinition


/* ZombieProjectileLaunchActionDefinition::ZombieProjectileLaunchActionDefinition() */

void __thiscall
ZombieProjectileLaunchActionDefinition::ZombieProjectileLaunchActionDefinition
          (ZombieProjectileLaunchActionDefinition *this)

{
  ZombieProjectileActionDefinition::ZombieProjectileActionDefinition
            ((ZombieProjectileActionDefinition *)this);
  this[0x80] = (ZombieProjectileLaunchActionDefinition)0x0;
  this[0x81] = (ZombieProjectileLaunchActionDefinition)0x0;
  this[0x82] = (ZombieProjectileLaunchActionDefinition)0x0;
  *(undefined ***)this = &PTR_GetClass_0687f0c0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  return;
}


/* ZombieProjectileLaunchActionDefinition::StaticNew() */

ZombieProjectileLaunchActionDefinition * ZombieProjectileLaunchActionDefinition::StaticNew(void)

{
  ZombieProjectileLaunchActionDefinition *this;
  
  this = ::operator_new(0x88);
  ZombieProjectileLaunchActionDefinition(this);
  return this;
}


/* ZombieProjectileLaunchActionDefinition::~ZombieProjectileLaunchActionDefinition() */

void __thiscall
ZombieProjectileLaunchActionDefinition::~ZombieProjectileLaunchActionDefinition
          (ZombieProjectileLaunchActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_0687f0c0;
  ZombieProjectileActionDefinition::~ZombieProjectileActionDefinition
            ((ZombieProjectileActionDefinition *)this);
  return;
}


/* ZombieProjectileLaunchActionDefinition::~ZombieProjectileLaunchActionDefinition() */

void __thiscall
ZombieProjectileLaunchActionDefinition::~ZombieProjectileLaunchActionDefinition
          (ZombieProjectileLaunchActionDefinition *this)

{
  ~ZombieProjectileLaunchActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieProjectileLaunchActionDefinition::findTarget(ZombieWithActions*) const */

void __thiscall
ZombieProjectileLaunchActionDefinition::findTarget
          (ZombieProjectileLaunchActionDefinition *this,ZombieWithActions *param_1)

{
  char cVar1;
  undefined8 uVar2;
  vector *pvVar3;
  code *pcVar4;
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x82] != (ZombieProjectileLaunchActionDefinition)0x0) {
    pvVar3 = (vector *)Zombie::GetTargetHistory((Zombie *)param_1);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    operator=((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              s_EmptyTargetHistory,pvVar3);
  }
  if (*(int *)(this + 0x84) == 0) {
    pcVar4 = *(code **)(*(long *)param_1 + 0x1f8);
  }
  else {
    pcVar4 = *(code **)(*(long *)param_1 + 0x1f0);
  }
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::vector
            (avStack_20,(vector *)s_EmptyTargetHistory);
  uVar2 = (*pcVar4)(param_1,avStack_20);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            (avStack_20);
  cVar1 = (**(code **)(*(long *)this + 0x90))(this,uVar2);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


/* ZombieProjectileLaunchActionDefinition::CanStartAction(ZombieWithActions*) const */

bool __thiscall
ZombieProjectileLaunchActionDefinition::CanStartAction
          (ZombieProjectileLaunchActionDefinition *this,ZombieWithActions *param_1)

{
  long lVar1;
  
  lVar1 = findTarget(this,param_1);
  return lVar1 != 0;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x04631148 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombieProjectileLaunchActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition
   const>, ZombieWithActions*) const */

void ZombieProjectileLaunchActionDefinition::TryStartAction
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,
               ZombieProjectileLaunchActionDefinition *param_4,RtWeakPtrBase *param_5,
               ZombieWithActions *param_6)

{
  bool bVar1;
  RtObject *this;
  ZombieProjectileLaunchActionHandler *pZVar2;
  undefined4 *puVar3;
  Zombie *pZVar4;
  undefined8 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (RtObject *)findTarget(param_4,param_6);
  if (this == (RtObject *)0x0) {
    uVar5 = 0;
  }
  else {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_5);
    pZVar2 = ZombieWithActions::QueueAction<ZombieProjectileLaunchActionHandler>
                       ((ZombieWithActions *)this,(RtWeakPtr<Sexy::SoundResource> *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    bVar1 = Sexy::RtObject::IsA<Zombie>(this);
    if (bVar1) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,(RtWeakPtrBase *)aRStack_28);
      pZVar4 = Sexy::RtObject::Cast<Zombie>(this);
      local_18 = (**(code **)(*(long *)pZVar4 + 0x3b0))(*(undefined4 *)(param_4 + 0x7c));
      local_14 = param_2;
      local_10 = param_3;
      ZombieProjectileLaunchActionHandler::SetTarget
                (pZVar2,(RtWeakPtr<Sexy::SoundResource> *)aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      uVar5 = 1;
    }
    else {
      uVar5 = 1;
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_20);
      puVar3 = (undefined4 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this);
      ZombieProjectileLaunchActionHandler::SetTarget
                (*puVar3,puVar3[1],puVar3[2],pZVar2,(RtWeakPtr<Sexy::SoundResource> *)&local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieProjectileLaunchActionDefinition::StaticClassInit() */

void ZombieProjectileLaunchActionDefinition::StaticClassInit(void)

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
            (apStack_30,"PlantGroups",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"FriendlyZombies",(MagicianActionStatus *)local_38);
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
    std::string::string((string *)apStack_30,"ZombieProjectileActionTarget");
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
    std::string::string((string *)avStack_20,"ZombieProjectileLaunchActionDefinition");
    (*pcVar3)(plVar2,avStack_20,FUN_04632e7c,0x88,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieProjectileLaunchActionDefinition::StaticGetClass() */

long * ZombieProjectileLaunchActionDefinition::StaticGetClass(void)

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
  uVar2 = ZombieProjectileActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieProjectileLaunchActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieProjectileLaunchActionDefinition::GetClass() const */

long * ZombieProjectileLaunchActionDefinition::GetClass(void)

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
  uVar2 = ZombieProjectileActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieProjectileLaunchActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

