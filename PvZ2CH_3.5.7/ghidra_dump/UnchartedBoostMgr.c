// Class: UnchartedBoostMgr


/* UnchartedBoostMgr::isSpecialBoostValue(UnchartedBoostType) */

bool __thiscall UnchartedBoostMgr::isSpecialBoostValue(undefined8 param_1,int param_2)

{
  return (param_2 - 10U & 0xfffffffd) == 0 || param_2 == 5;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedBoostMgr::GetBoostImage(int) */

void UnchartedBoostMgr::GetBoostImage(int param_1)

{
  string *extraout_x1;
  HotUIHelpers aHStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("IMAGE_UI_UNCHARTEDBOOST_%d",aHStack_10);
  HotUIHelpers::GetImageFromStringId(aHStack_10,extraout_x1);
  std::string::~string((string *)aHStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UnchartedBoostMgr::getValidTypeCount(ValidBoostType) */

void __thiscall UnchartedBoostMgr::getValidTypeCount(UnchartedBoostMgr *this,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(this + 8));
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 8));
  FUN_0340ca08(uVar1,uVar2,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedBoostMgr::GetBoostValueBySlot(UnchartedBoostType, int, int) */

void __thiscall
UnchartedBoostMgr::GetBoostValueBySlot(UnchartedBoostMgr *this,int param_2,int param_3,int param_4)

{
  bool bVar1;
  long lVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = 0;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 8));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 8));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
      uVar5 = 0;
LAB_0340cb28:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar5);
    }
    lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (*(int *)(lVar2 + 0x20) == param_2) {
      if (iVar4 == param_3) {
        puVar3 = (undefined4 *)FUN_0340bd98(*(undefined8 *)(lVar2 + 8),(long)param_4);
        uVar5 = *puVar3;
        goto LAB_0340cb28;
      }
      iVar4 = iVar4 + 1;
    }
    __gnu_cxx::
    __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
    ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                  *)&local_18);
  } while( true );
}


/* UnchartedBoostMgr::UnchartedBoostMgr() */

void __thiscall UnchartedBoostMgr::UnchartedBoostMgr(UnchartedBoostMgr *this)

{
  Sexy::LazySingleton<UnchartedBoostMgr>::LazySingleton((LazySingleton<UnchartedBoostMgr> *)this);
  *(undefined ***)this = &PTR__UnchartedBoostMgr_0661fd60;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* UnchartedBoostMgr::IsValidLevel() */

bool UnchartedBoostMgr::IsValidLevel(void)

{
  bool bVar1;
  UnchartedBoostModule *pUVar2;
  
  bVar1 = false;
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    pUVar2 = BoardHelpers::GetLevelModuleByClass<UnchartedBoostModule>();
    bVar1 = pUVar2 != (UnchartedBoostModule *)0x0;
  }
  return bVar1;
}


/* UnchartedBoostMgr::~UnchartedBoostMgr() */

void __thiscall UnchartedBoostMgr::~UnchartedBoostMgr(UnchartedBoostMgr *this)

{
  *(undefined ***)this = &PTR__UnchartedBoostMgr_0661fd60;
  std::vector<BoostValue,std::allocator<BoostValue>>::~vector
            ((vector<BoostValue,std::allocator<BoostValue>> *)(this + 8));
  Sexy::LazySingleton<UnchartedBoostMgr>::~LazySingleton((LazySingleton<UnchartedBoostMgr> *)this);
  return;
}


/* UnchartedBoostMgr::~UnchartedBoostMgr() */

void __thiscall UnchartedBoostMgr::~UnchartedBoostMgr(UnchartedBoostMgr *this)

{
  ~UnchartedBoostMgr(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedBoostMgr::isValidBoostType(PlantType const*, ValidBoostType) */

void __thiscall UnchartedBoostMgr::isValidBoostType(undefined8 param_1_00,long param_1,int param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int local_44 [4];
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  vector<PlantTag,std::allocator<PlantTag>> avStack_20 [24];
  long local_8;
  
  bVar1 = param_1 == 0 || param_3 == 7;
  local_8 = ___stack_chk_guard;
  local_44[0] = param_3;
  if (param_1 != 0 && param_3 != 7) {
    std::vector<PlantTag,std::allocator<PlantTag>>::vector(avStack_20,(vector *)(param_1 + 0xf0));
    puVar2 = (undefined4 *)
             std::
             map<ValidBoostType,PlantTag,std::less<ValidBoostType>,std::allocator<std::pair<ValidBoostType_const,PlantTag>>>
             ::operator[]((map<ValidBoostType,PlantTag,std::less<ValidBoostType>,std::allocator<std::pair<ValidBoostType_const,PlantTag>>>
                           *)&DAT_06a9efa8,(ValidBoostType *)local_44);
    local_34 = *puVar2;
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_20);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
    local_30 = FUN_0340d70c(uVar3,uVar4,&local_34);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    std::vector<PlantTag,std::allocator<PlantTag>>::~vector(avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedBoostMgr::HasAnyValidBoostType(UnchartedBoostType, PlantType const*) */

void __thiscall
UnchartedBoostMgr::HasAnyValidBoostType
          (UnchartedBoostMgr *this,undefined4 param_2,undefined8 param_3)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  UnchartedBoostMgr *local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  UnchartedBoostMgr *local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 8);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_50 = CONCAT44(uStack_1c,param_2);
  uStack_48 = param_3;
  local_40 = this;
  local_20 = param_2;
  local_18 = param_3;
  local_10 = this;
  local_30 = FUN_0340e8d8(uVar2,uVar3,&local_50);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedBoostMgr::getSpecialBoostValue(std::vector<float, std::allocator<float> > const&,
   ValidBoostType, UnchartedBoostType, int) */

void __thiscall
UnchartedBoostMgr::getSpecialBoostValue
          (UnchartedBoostMgr *this,undefined8 *param_1,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float local_24;
  float local_20 [6];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_4 == 5) {
    pfVar2 = (float *)FUN_0340bda0(*param_1,(long)param_5);
    fVar5 = *pfVar2;
    iVar1 = getValidTypeCount(this,param_3);
    fVar5 = (float)iVar1 * fVar5;
  }
  else if (param_4 == 10) {
    pfVar2 = (float *)FUN_0340bda0(*param_1,(long)param_5);
    fVar5 = *pfVar2;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    EntityFinder::GetEntitiesOnBoard
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20,1);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)local_20);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)local_20);
    iVar1 = FUN_0340eb34(uVar4,uVar3,param_3,this);
    fVar5 = (float)iVar1 * fVar5;
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_20);
  }
  else {
    fVar5 = 0.0;
    if (param_4 == 0xc) {
      iVar1 = Board::GetSunCurrency(*(Board **)(gLawnApp + 0x9f0));
      uVar4 = *param_1;
      pfVar2 = (float *)FUN_0340bda0(uVar4,0);
      fVar5 = *pfVar2;
      pfVar2 = (float *)FUN_0340bda0(uVar4,2);
      local_24 = *pfVar2;
      pfVar2 = (float *)FUN_0340bda0(uVar4,(long)param_5);
      local_20[0] = (float)(int)((float)iVar1 / fVar5) * *pfVar2;
      pfVar2 = eastl::min_alt<float>(local_20,&local_24);
      fVar5 = *pfVar2;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedBoostMgr::GetBoostValue(PlantType const*, UnchartedBoostType, int) */

void __thiscall
UnchartedBoostMgr::GetBoostValue(UnchartedBoostMgr *this,undefined8 param_1,int param_3,int param_4)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined4 *puVar4;
  ulong uVar5;
  float *pfVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  fVar9 = 0.0;
  local_8 = ___stack_chk_guard;
  cVar2 = IsValidLevel();
  if (cVar2 != '\0') {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 8));
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 8));
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar3)
    {
      puVar4 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      if (puVar4[8] == param_3) {
        iVar1 = puVar4[9];
        if (iVar1 == 0) {
          fVar9 = 0.0;
          break;
        }
        if (0 < iVar1) {
          puVar4[9] = iVar1 + -1;
        }
        cVar2 = isValidBoostType(this,param_1,*puVar4);
        if (cVar2 == '\0') {
LAB_0340ee20:
          fVar8 = 0.0;
        }
        else {
          cVar2 = isSpecialBoostValue(this,param_3);
          if (cVar2 == '\0') {
            uVar7 = *(undefined8 *)(puVar4 + 2);
            uVar5 = FUN_0340bd80(uVar7,*(undefined8 *)(puVar4 + 4));
            if (uVar5 <= (ulong)(long)param_4) goto LAB_0340ee20;
            pfVar6 = (float *)FUN_0340bd98(uVar7,(long)param_4);
            fVar8 = *pfVar6;
          }
          else {
            fVar8 = (float)getSpecialBoostValue(this,puVar4 + 2,*puVar4,param_3,param_4);
          }
        }
        fVar9 = fVar9 + fVar8;
      }
      __gnu_cxx::
      __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
      ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                    *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar9);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedBoostMgr::GetUnchartedBoostPropertiesById(int) */

void UnchartedBoostMgr::GetUnchartedBoostPropertiesById(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  RtObject *this;
  UnchartedBoostPropertySheet *pUVar5;
  int extraout_w1;
  int extraout_w1_00;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  string asStack_40 [8];
  RtId aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = UnchartedBoostMapper::GetInstance();
  NameMapperBase::GetNameForId(iVar3);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar4,0xa9);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
LAB_03410598:
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      std::string::~string(asStack_40);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
    this = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    pUVar5 = Sexy::RtObject::Cast<UnchartedBoostPropertySheet>(this);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_38);
    iVar3 = extraout_w1;
    if ((pUVar5 != (UnchartedBoostPropertySheet *)0x0) &&
       (cVar2 = std::operator==((string *)(pUVar5 + 0x10),asStack_40), iVar3 = extraout_w1_00,
       cVar2 != '\0')) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                ((RtWeakPtr<CthulhuPropertySheet> *)in_x8,(RtId *)aRStack_30);
      Sexy::RtId::~RtId((RtId *)aRStack_30);
      goto LAB_03410598;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar3);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedBoostMgr::GetUnchartedBoostType(int) */

void UnchartedBoostMgr::GetUnchartedBoostType(int param_1)

{
  bool bVar1;
  long lVar2;
  undefined4 uVar3;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  uVar3 = 0;
  local_8 = ___stack_chk_guard;
  GetUnchartedBoostPropertiesById(param_1);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    uVar3 = *(undefined4 *)(lVar2 + 0x40);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedBoostMgr::GetUnchartedBoostValues(int, std::vector<float, std::allocator<float> >&) */

void __thiscall
UnchartedBoostMgr::GetUnchartedBoostValues(UnchartedBoostMgr *this,int param_1,vector *param_2)

{
  bool bVar1;
  long lVar2;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetUnchartedBoostPropertiesById((int)this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    std::vector<float,std::allocator<float>>::operator=
              ((vector<float,std::allocator<float>> *)param_2,(vector *)(lVar2 + 0x28));
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedBoostMgr::GetUnchartedBoostValidBoostType(int) */

void UnchartedBoostMgr::GetUnchartedBoostValidBoostType(int param_1)

{
  bool bVar1;
  long lVar2;
  undefined4 uVar3;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  uVar3 = 7;
  local_8 = ___stack_chk_guard;
  GetUnchartedBoostPropertiesById(param_1);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    uVar3 = *(undefined4 *)(lVar2 + 0x44);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedBoostMgr::GetUnchartedBoostInfo(int, BoostValue&) */

void __thiscall
UnchartedBoostMgr::GetUnchartedBoostInfo(UnchartedBoostMgr *this,int param_1,BoostValue *param_2)

{
  bool bVar1;
  long lVar2;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetUnchartedBoostPropertiesById((int)this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(lVar2 + 0x40);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    std::vector<float,std::allocator<float>>::operator=
              ((vector<float,std::allocator<float>> *)(param_2 + 8),(vector *)(lVar2 + 0x28));
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    *(undefined4 *)param_2 = *(undefined4 *)(lVar2 + 0x44);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(lVar2 + 0x48);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedBoostMgr::GetUnchartedBoostName(int) */

void __thiscall UnchartedBoostMgr::GetUnchartedBoostName(UnchartedBoostMgr *this,int param_1)

{
  bool bVar1;
  string *in_x8;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetUnchartedBoostPropertiesById((int)this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    FUN_05475d88();
  }
  else {
    std::string::string(in_x8,"");
    nop();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedBoostMgr::GetUnchartedBoostDescription(int) */

void __thiscall UnchartedBoostMgr::GetUnchartedBoostDescription(UnchartedBoostMgr *this,int param_1)

{
  bool bVar1;
  string *in_x8;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetUnchartedBoostPropertiesById((int)this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    FUN_05475d88();
  }
  else {
    std::string::string(in_x8,"");
    nop();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedBoostMgr::Sync(std::vector<int, std::allocator<int> > const&) */

void __thiscall UnchartedBoostMgr::Sync(UnchartedBoostMgr *this,vector *param_1)

{
  bool bVar1;
  int *piVar2;
  undefined8 local_40;
  undefined8 local_38;
  BoostValue aBStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<BoostValue,std::allocator<BoostValue>>::clear
            ((vector<BoostValue,std::allocator<BoostValue>> *)(this + 8));
  local_40 = FUN_0340c89c(*(undefined8 *)param_1);
  local_38 = FUN_0340c8ec(*(undefined8 *)(param_1 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    BoostValue::BoostValue(aBStack_30);
    GetUnchartedBoostInfo(this,*piVar2,aBStack_30);
    std::vector<BoostValue,std::allocator<BoostValue>>::push_back
              ((vector<BoostValue,std::allocator<BoostValue>> *)(this + 8),aBStack_30);
    BoostValue::~BoostValue(aBStack_30);
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

