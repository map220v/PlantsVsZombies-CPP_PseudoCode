// Class: LevelEditorSingleHandedPlantSetting


/* LevelEditorSingleHandedPlantSetting::LevelEditorSingleHandedPlantSetting() */

void __thiscall
LevelEditorSingleHandedPlantSetting::LevelEditorSingleHandedPlantSetting
          (LevelEditorSingleHandedPlantSetting *this)

{
  LevelEditorPlantSetting::LevelEditorPlantSetting((LevelEditorPlantSetting *)this);
  *(undefined ***)this = &PTR_GetClass_0695f280;
  *(undefined ***)(this + 0xd8) = &PTR__LevelEditorSingleHandedPlantSetting_0695f5b8;
  return;
}


/* LevelEditorSingleHandedPlantSetting::~LevelEditorSingleHandedPlantSetting() */

void __thiscall
LevelEditorSingleHandedPlantSetting::~LevelEditorSingleHandedPlantSetting
          (LevelEditorSingleHandedPlantSetting *this)

{
  *(undefined ***)this = &PTR_GetClass_0695f280;
  *(undefined ***)(this + 0xd8) = &PTR__LevelEditorSingleHandedPlantSetting_0695f5b8;
  LevelEditorPlantSetting::~LevelEditorPlantSetting((LevelEditorPlantSetting *)this);
  return;
}


/* non-virtual thunk to LevelEditorSingleHandedPlantSetting::~LevelEditorSingleHandedPlantSetting()
    */

void __thiscall
LevelEditorSingleHandedPlantSetting::~LevelEditorSingleHandedPlantSetting
          (LevelEditorSingleHandedPlantSetting *this)

{
  ~LevelEditorSingleHandedPlantSetting(this + -0xd8);
  return;
}


/* LevelEditorSingleHandedPlantSetting::~LevelEditorSingleHandedPlantSetting() */

void __thiscall
LevelEditorSingleHandedPlantSetting::~LevelEditorSingleHandedPlantSetting
          (LevelEditorSingleHandedPlantSetting *this)

{
  ~LevelEditorSingleHandedPlantSetting(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LevelEditorSingleHandedPlantSetting::~LevelEditorSingleHandedPlantSetting()
    */

void __thiscall
LevelEditorSingleHandedPlantSetting::~LevelEditorSingleHandedPlantSetting
          (LevelEditorSingleHandedPlantSetting *this)

{
  ~LevelEditorSingleHandedPlantSetting(this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSingleHandedPlantSetting::GatherOtherBlackList(std::vector<std::string,
   std::allocator<std::string > >&) */

void __thiscall
LevelEditorSingleHandedPlantSetting::GatherOtherBlackList
          (LevelEditorSingleHandedPlantSetting *this,vector *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  int extraout_w1;
  code *pcVar6;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_40);
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x9f);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pcVar6 = *(code **)(*plVar4 + 0x20);
      uVar3 = LevelEditorConfig::StaticGetClass();
      cVar2 = (*pcVar6)(plVar4,uVar3);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)a_Stack_40,(RtWeakPtrBase *)aRStack_38);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_40);
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)param_1,(vector *)(lVar5 + 0xb8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

