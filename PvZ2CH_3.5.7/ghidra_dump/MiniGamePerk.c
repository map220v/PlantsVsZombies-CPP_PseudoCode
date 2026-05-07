// Class: MiniGamePerk


/* MiniGamePerk::GetProps() */

RtWeakPtr<Sexy::SoundResource> * MiniGamePerk::GetProps(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0x18));
  return in_x8;
}


/* MiniGamePerk::Initialize(Sexy::RtWeakPtr<MiniGamePerkProperties>, int) */

void __thiscall MiniGamePerk::Initialize(MiniGamePerk *this,RtWeakPtr *param_2,undefined4 param_3)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x18),param_2);
  *(undefined4 *)(this + 0x10) = param_3;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerk::StaticClassInit() */

void MiniGamePerk::StaticClassInit(void)

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
    std::string::string(asStack_10,"MiniGamePerk");
    (*pcVar2)(plVar1,asStack_10,FUN_0389cb84,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGamePerk::StaticGetClass() */

long * MiniGamePerk::StaticGetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"MiniGamePerk",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGamePerk::GetClass() const */

long * MiniGamePerk::GetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"MiniGamePerk",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGamePerk::~MiniGamePerk() */

void __thiscall MiniGamePerk::~MiniGamePerk(MiniGamePerk *this)

{
  *(undefined ***)this = &PTR_GetClass_066afdd0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  GameObject::~GameObject((GameObject *)this);
  return;
}


/* MiniGamePerk::~MiniGamePerk() */

void __thiscall MiniGamePerk::~MiniGamePerk(MiniGamePerk *this)

{
  ~MiniGamePerk(this);
  AK::FreeHook(this);
  return;
}


/* MiniGamePerk::MiniGamePerk() */

void __thiscall MiniGamePerk::MiniGamePerk(MiniGamePerk *this)

{
  GameObject::GameObject((GameObject *)this);
  *(undefined ***)this = &PTR_GetClass_066afdd0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x18));
  this[0x20] = (MiniGamePerk)0x0;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}


/* MiniGamePerk::StaticNew() */

MiniGamePerk * MiniGamePerk::StaticNew(void)

{
  MiniGamePerk *this;
  
  this = ::operator_new(0x28);
  MiniGamePerk(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerk::GetBuffValue(int, int, PlantType const*) */

void __thiscall
MiniGamePerk::GetBuffValue(MiniGamePerk *this,int param_1,int param_2,PlantType *param_3)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(lVar2 + 0x30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_0389cf40(uVar3,uVar4,CONCAT44(param_2,param_1),param_3);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  uVar6 = 0;
  if (bVar1) {
    lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    puVar5 = (undefined4 *)FUN_03896040(*(undefined8 *)(lVar2 + 0x30),(long)*(int *)(this + 0x10));
    uVar6 = *puVar5;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerk::Activate() */

void __thiscall MiniGamePerk::Activate(MiniGamePerk *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this[0x20] = (MiniGamePerk)0x1;
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)FUN_03896020(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (pLVar1 != (LevelModuleManager *)0x0) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0x88);
    Sexy::Delegate0::Delegate0<MiniGamePerk,void(MiniGamePerk::*)()>(aDStack_38,aCStack_50);
    LevelModuleManager::RegisterOnGameplayUpdate(pLVar1,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

