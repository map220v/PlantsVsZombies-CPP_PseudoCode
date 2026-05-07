// Class: DinoTimeWaveAction


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinoTimeWaveAction::StaticClassInit() */

void DinoTimeWaveAction::StaticClassInit(void)

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
    std::string::string(asStack_10,"DinoTimeWaveAction");
    (*pcVar2)(plVar1,asStack_10,FUN_049419a8,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinoTimeWaveAction::StaticGetClass() */

long * DinoTimeWaveAction::StaticGetClass(void)

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
  uVar2 = WaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"DinoTimeWaveAction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinoTimeWaveAction::DinoTimeWaveAction() */

void __thiscall DinoTimeWaveAction::DinoTimeWaveAction(DinoTimeWaveAction *this)

{
  WaveAction::WaveAction((WaveAction *)this);
  *(undefined ***)this = &PTR_GetActionClass_069127a0;
  return;
}


/* DinoTimeWaveAction::StaticNew() */

DinoTimeWaveAction * DinoTimeWaveAction::StaticNew(void)

{
  DinoTimeWaveAction *this;
  
  this = ::operator_new(0x18);
  DinoTimeWaveAction(this);
  return this;
}


/* DinoTimeWaveAction::~DinoTimeWaveAction() */

void __thiscall DinoTimeWaveAction::~DinoTimeWaveAction(DinoTimeWaveAction *this)

{
  *(undefined ***)this = &PTR_GetActionClass_069127a0;
  WaveAction::~WaveAction((WaveAction *)this);
  return;
}


/* DinoTimeWaveAction::~DinoTimeWaveAction() */

void __thiscall DinoTimeWaveAction::~DinoTimeWaveAction(DinoTimeWaveAction *this)

{
  ~DinoTimeWaveAction(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinoTimeWaveAction::convertSpawnTypeToCreatureType(DinoSpawnType const&) */

void DinoTimeWaveAction::convertSpawnTypeToCreatureType(DinoSpawnType *param_1)

{
  char cVar1;
  string *psVar2;
  undefined4 *in_x1;
  RtWeakPtr<Sexy::ResourceInfo> *__n;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = aRStack_10;
  std::string::string(asStack_18,"");
  nop();
  switch(*in_x1) {
  case 0:
    std::string::append(asStack_18,"dinoraptor",(size_t)__n);
    break;
  case 1:
    std::string::append(asStack_18,"dinostego",(size_t)__n);
    break;
  case 2:
    std::string::append(asStack_18,"dinoptero",(size_t)__n);
    break;
  case 3:
    std::string::append(asStack_18,"dinotyranno",(size_t)__n);
    break;
  case 4:
    std::string::append(asStack_18,"dinoankylo",(size_t)__n);
  }
  cVar1 = FUN_0547419c(asStack_18);
  if (cVar1 == '\0') {
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CreatureType>>::GetInstancePtr();
    ObjectTypeDirectory<CreatureType>::GetTypeFromTypeName(psVar2);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  else {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
  }
  std::string::~string(asStack_18);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinoTimeWaveAction::SpawnDino(DinoSpawnType const&, int, int) */

void __thiscall
DinoTimeWaveAction::SpawnDino
          (DinoTimeWaveAction *this,DinoSpawnType *param_1,int param_2,int param_3)

{
  bool bVar1;
  Board *pBVar2;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)param_1 != -1) {
    convertSpawnTypeToCreatureType((DinoSpawnType *)this);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
    if (bVar1) {
      pBVar2 = *(Board **)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      Board::AddCreatureInRow(pBVar2,aRStack_10,param_2,param_3);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinoTimeWaveAction::WaveStart(int, WaveType::WaveType, bool, Sexy::MTRand&) */

void DinoTimeWaveAction::WaveStart(WaveAction *param_1)

{
  FairyTaleWindWaveActionProps *pFVar1;
  
  pFVar1 = WaveAction::GetProps<FairyTaleWindWaveActionProps>(param_1);
  if (*(int *)(pFVar1 + 0x40) != -1) {
    SpawnDino((DinoTimeWaveAction *)param_1,(DinoSpawnType *)(pFVar1 + 0x40),*(int *)(pFVar1 + 0x44)
              ,*(int *)(pFVar1 + 0x48));
  }
  WaveAction::notifyWaveEvents(param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinoTimeWaveAction::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall DinoTimeWaveAction::AddResourceRequirements(DinoTimeWaveAction *this,set *param_1)

{
  bool bVar1;
  FairyTaleWindWaveActionProps *pFVar2;
  undefined8 uVar3;
  CreatureType *this_00;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar2 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  local_18 = FUN_04941bac(*(undefined8 *)(pFVar2 + 0x10));
  local_10 = FUN_04941bfc(*(undefined8 *)(pFVar2 + 0x18));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    FUN_05475d88(asStack_20,uVar3);
    std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
              ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
               asStack_20);
    std::string::~string(asStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (*(int *)(pFVar2 + 0x40) != -1) {
    convertSpawnTypeToCreatureType((DinoSpawnType *)this);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_10);
    if (bVar1) {
      this_00 = (CreatureType *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10)
      ;
      CreatureType::AddInGameResourceRequirements(this_00,param_1);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinoTimeWaveAction::GetDinos(std::vector<CreatureType const*, std::allocator<CreatureType const*>
   >&) */

void __thiscall DinoTimeWaveAction::GetDinos(DinoTimeWaveAction *this,vector *param_1)

{
  FairyTaleWindWaveActionProps *pFVar1;
  CreatureType *local_18;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar1 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  if (*(int *)(pFVar1 + 0x40) != -1) {
    convertSpawnTypeToCreatureType((DinoSpawnType *)this);
    local_18 = (CreatureType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::vector<CreatureType_const*,std::allocator<CreatureType_const*>>::push_back
              ((vector<CreatureType_const*,std::allocator<CreatureType_const*>> *)param_1,&local_18)
    ;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

