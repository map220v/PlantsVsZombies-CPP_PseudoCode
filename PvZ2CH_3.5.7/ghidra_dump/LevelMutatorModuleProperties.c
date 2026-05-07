// Class: LevelMutatorModuleProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelMutatorModuleProperties::StaticClassInit() */

void LevelMutatorModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelMutatorModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0369f26c,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelMutatorModuleProperties::StaticGetClass() */

long * LevelMutatorModuleProperties::StaticGetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"LevelMutatorModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelMutatorModuleProperties::GetClass() const */

long * LevelMutatorModuleProperties::GetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"LevelMutatorModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelMutatorModuleProperties::GetModuleClass() const */

long * LevelMutatorModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (LevelMutatorModule::sClass != (long *)0x0) {
    return LevelMutatorModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  LevelMutatorModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"LevelMutatorModule",uVar2,LevelMutatorModule::StaticNew);
  return LevelMutatorModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelMutatorModuleProperties::GatherDifficultyProps(std::vector<Sexy::RtWeakPtr<LevelModuleDifficultyProps>,
   std::allocator<Sexy::RtWeakPtr<LevelModuleDifficultyProps> > >&,
   std::vector<Sexy::RtWeakPtr<LevelModuleDifficultyUIProps>,
   std::allocator<Sexy::RtWeakPtr<LevelModuleDifficultyUIProps> > >&, bool) const */

void LevelMutatorModuleProperties::GatherDifficultyProps
               (vector *param_1,vector *param_2,bool param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  RtId *pRVar4;
  long lVar5;
  long lVar6;
  RtWeakPtrBase *pRVar7;
  long *plVar8;
  undefined8 uVar9;
  RtId aRStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = RiftUtils::GetDifficultyForNextLevel();
  if (-1 < iVar3) {
    local_38 = FUN_0369f3d0(*(undefined8 *)(param_1 + 0x40));
    local_30 = FUN_0369f420(*(undefined8 *)(param_1 + 0x48));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1)
    {
      pRVar4 = (RtId *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      Sexy::RtId::RtId(aRStack_40,pRVar4);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_28,(RtWeakPtrBase *)aRStack_40);
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_28);
      if ((cVar2 != '\0') &&
         (lVar5 = LevelMutatorTableHelper::Find((RtWeakPtr *)aRStack_28,iVar3,0), lVar5 != 0)) {
        uVar9 = *(undefined8 *)(lVar5 + 0x20);
        lVar6 = FUN_0369ef20(uVar9,*(undefined8 *)(lVar5 + 0x28));
        if (lVar6 != 0) {
          local_20 = FUN_0369f3d0(uVar9);
          local_18 = FUN_0369f420(*(undefined8 *)(lVar5 + 0x28));
          while (bVar1 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18),
                bVar1) {
            pRVar7 = (RtWeakPtrBase *)
                     std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,pRVar7);
            bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_10);
            if (bVar1) {
              plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
              (**(code **)(*plVar8 + 0x98))(plVar8,param_2,param_3,0);
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
          }
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      Sexy::RtId::~RtId(aRStack_40);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelMutatorModuleProperties::LevelMutatorModuleProperties() */

void __thiscall
LevelMutatorModuleProperties::LevelMutatorModuleProperties(LevelMutatorModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0667f0e0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* LevelMutatorModuleProperties::StaticNew() */

LevelMutatorModuleProperties * LevelMutatorModuleProperties::StaticNew(void)

{
  LevelMutatorModuleProperties *this;
  
  this = ::operator_new(0x58);
  LevelMutatorModuleProperties(this);
  return this;
}


/* LevelMutatorModuleProperties::~LevelMutatorModuleProperties() */

void __thiscall
LevelMutatorModuleProperties::~LevelMutatorModuleProperties(LevelMutatorModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0667f0e0;
  std::vector<Sexy::RtId,std::allocator<Sexy::RtId>>::~vector
            ((vector<Sexy::RtId,std::allocator<Sexy::RtId>> *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* LevelMutatorModuleProperties::~LevelMutatorModuleProperties() */

void __thiscall
LevelMutatorModuleProperties::~LevelMutatorModuleProperties(LevelMutatorModuleProperties *this)

{
  ~LevelMutatorModuleProperties(this);
  AK::FreeHook(this);
  return;
}

