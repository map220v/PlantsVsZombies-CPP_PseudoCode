// Class: LevelEditorUtil


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorUtil::GetStageInfoByName(std::string const&) */

void __thiscall LevelEditorUtil::GetStageInfoByName(LevelEditorUtil *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  int extraout_w1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  code *pcVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x9f);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (in_x8);
LAB_04b4a970:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pcVar6 = *(code **)(*plVar4 + 0x20);
      uVar3 = LevelEditorStageInfo::StaticGetClass();
      cVar2 = (*pcVar6)(plVar4,uVar3);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        cVar2 = std::operator==((string *)(lVar5 + 0x10),(string *)this);
        if (cVar2 != '\0') {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)in_x8,(RtWeakPtrBase *)aRStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
          goto LAB_04b4a970;
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* LevelEditorUtil::ShowDialogWithTouchClose(Sexy::Widget*, bool) */

TouchCloseContainer * LevelEditorUtil::ShowDialogWithTouchClose(Widget *param_1,bool param_2)

{
  TouchCloseContainer *this;
  
  this = ::operator_new(0x108);
  TouchCloseContainer::TouchCloseContainer(this);
  (**(code **)(*(long *)this + 0x60))(this,param_1);
  FUN_04b4bb64(this + 0x100,param_2);
  UIUtil::ShowDialog((Widget *)this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorUtil::GetStageLeftImage(std::string const&) */

void LevelEditorUtil::GetStageLeftImage(string *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  int extraout_w1;
  code *pcVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  string asStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x9f);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
      uVar3 = 0;
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
LAB_04b501ec:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar3);
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_48,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_48);
    if (bVar1) {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
      pcVar6 = *(code **)(*plVar4 + 0x20);
      uVar3 = LevelEditorStageInfo::StaticGetClass();
      cVar2 = (*pcVar6)(plVar4,uVar3);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)aRStack_48);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
        cVar2 = std::operator==((string *)(lVar5 + 0x10),param_1);
        if (cVar2 != '\0') {
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
          std::operator+((string *)(lVar5 + 0x18),"_");
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
          std::operator+(asStack_38,(string *)(lVar5 + 0x20));
          uVar3 = StringHelper::ToImage((string *)aRStack_30,false);
          std::string::~string((string *)aRStack_30);
          std::string::~string(asStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
          Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
          goto LAB_04b501ec;
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40)
        ;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorUtil::GetStageCenterImage(std::string const&) */

void LevelEditorUtil::GetStageCenterImage(string *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  int extraout_w1;
  code *pcVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  string asStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x9f);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
      uVar3 = 0;
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
LAB_04b503a0:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar3);
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_48,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_48);
    if (bVar1) {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
      pcVar6 = *(code **)(*plVar4 + 0x20);
      uVar3 = LevelEditorStageInfo::StaticGetClass();
      cVar2 = (*pcVar6)(plVar4,uVar3);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)aRStack_48);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
        cVar2 = std::operator==((string *)(lVar5 + 0x10),param_1);
        if (cVar2 != '\0') {
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
          std::operator+((string *)(lVar5 + 0x18),"_");
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
          std::operator+(asStack_38,(string *)(lVar5 + 0x28));
          uVar3 = StringHelper::ToImage((string *)aRStack_30,false);
          std::string::~string((string *)aRStack_30);
          std::string::~string(asStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
          Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
          goto LAB_04b503a0;
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40)
        ;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorUtil::GetStageRightImage(std::string const&) */

void LevelEditorUtil::GetStageRightImage(string *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  int extraout_w1;
  code *pcVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  string asStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x9f);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
      uVar3 = 0;
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
LAB_04b50554:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar3);
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_48,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_48);
    if (bVar1) {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
      pcVar6 = *(code **)(*plVar4 + 0x20);
      uVar3 = LevelEditorStageInfo::StaticGetClass();
      cVar2 = (*pcVar6)(plVar4,uVar3);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)aRStack_48);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
        cVar2 = std::operator==((string *)(lVar5 + 0x10),param_1);
        if (cVar2 != '\0') {
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
          std::operator+((string *)(lVar5 + 0x18),"_");
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
          std::operator+(asStack_38,(string *)(lVar5 + 0x30));
          uVar3 = StringHelper::ToImage((string *)aRStack_30,false);
          std::string::~string((string *)aRStack_30);
          std::string::~string(asStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
          Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
          goto LAB_04b50554;
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40)
        ;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* LevelEditorUtil::ShowSelectWorldWidget(std::vector<std::string, std::allocator<std::string > >
   const&) */

LevelEditorWorldSelect * LevelEditorUtil::ShowSelectWorldWidget(vector *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  LevelEditorWorldSelect *this;
  
  this = ::operator_new(0x128);
  LevelEditorWorldSelect::LevelEditorWorldSelect(this);
  lVar1 = gLawnApp;
  iVar2 = FUN_04b4c0a8(700);
  iVar3 = FUN_04b4c0a8(0x21c);
  uVar4 = FUN_04b4c0a8(500);
  (**(code **)(*(long *)this + 0x198))
            (this,(*(int *)(lVar1 + 0xd4) - iVar2) / 2,(*(int *)(lVar1 + 0xd8) - iVar3) / 2,iVar2,
             uVar4);
  LevelEditorWorldSelect::Init(this,param_1);
  UIUtil::ShowDialog((Widget *)this);
  return this;
}

