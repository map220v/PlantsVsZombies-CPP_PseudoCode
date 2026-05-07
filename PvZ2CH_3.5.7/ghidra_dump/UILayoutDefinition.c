// Class: UILayoutDefinition


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILayoutDefinition::StaticClassInit() */

void UILayoutDefinition::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"UIWidgetType");
    (*pcVar3)(plVar2,asStack_10,FUN_04b7deb4,0xb0,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"UILayoutDefinition");
    (*pcVar3)(plVar2,asStack_10,FUN_04b7dbf4,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UILayoutDefinition::StaticGetClass() */

long * UILayoutDefinition::StaticGetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"UILayoutDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UILayoutDefinition::GetClass() const */

long * UILayoutDefinition::GetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"UILayoutDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UILayoutDefinition::NeedAttachLawnApp() const */

UILayoutDefinition __thiscall UILayoutDefinition::NeedAttachLawnApp(UILayoutDefinition *this)

{
  return this[0x41];
}


/* UILayoutDefinition::UILayoutDefinition() */

void __thiscall UILayoutDefinition::UILayoutDefinition(UILayoutDefinition *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_0696f220;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  this[0x40] = (UILayoutDefinition)0x0;
  this[0x41] = (UILayoutDefinition)0x1;
  return;
}


/* UILayoutDefinition::StaticNew() */

UILayoutDefinition * UILayoutDefinition::StaticNew(void)

{
  UILayoutDefinition *this;
  
  this = ::operator_new(0x48);
  UILayoutDefinition(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILayoutDefinition::GetLayout(std::string const&) */

void UILayoutDefinition::GetLayout(string *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  PVZDB *pPVar4;
  RtObject *this;
  ResourceInfo *pRVar5;
  int extraout_w1;
  string *extraout_x1;
  string asStack_50 [8];
  string asStack_48 [8];
  RtMixedPtrBase aRStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Sexy aSStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c();
  if (cVar1 == '\0') {
    uVar3 = FUN_054743b0(param_1,0x2e,0);
    FUN_05475ffc(aSStack_28,param_1,0,uVar3);
    Sexy::Upper(aSStack_28,extraout_x1);
    std::string::~string((string *)aSStack_28);
    FUN_031f5e7c(asStack_48,"LUA_PACKAGES_LAYOUT_",asStack_50);
    bVar2 = SUB81(asStack_48,0);
    Sexy::ResourceManager::GetResourceForStringIdT<Sexy::GenericResFile>
              (*(string **)(gLawnApp + 0x848),bVar2);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_40);
    if (cVar1 == '\0') {
      FUN_031f5e7c(aSStack_28,"RESFILE_PACKAGES_LAYOUT_",asStack_50);
      FUN_05474278(asStack_48,aSStack_28);
      std::string::~string((string *)aSStack_28);
      Sexy::ResourceManager::GetResourceForStringIdT<Sexy::GenericResFile>
                (*(string **)(gLawnApp + 0x848),bVar2);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)aRStack_40,(RtWeakPtr *)aSStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_28);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_40);
    }
    else {
      cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_40);
    }
    pRVar5 = (ResourceInfo *)0x0;
    if (cVar1 != '\0') {
      pPVar4 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aSStack_28,(RtWeakPtrBase *)aRStack_40);
      PVZDB::LoadPackageForTable(pPVar4,0x57,aSStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_28);
      uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
      PVZDB::GetObjectIteratorForTable(aSStack_28,uVar3,0x57);
      while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)aSStack_28), bVar2
            ) {
        Sexy::RtDbTable::Iterator::operator*((Iterator *)aSStack_28);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
        Sexy::RtId::~RtId(aRStack_30);
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
        if (bVar2) {
          this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
          bVar2 = Sexy::RtObject::IsA<UILayoutDefinition>(this);
          if (bVar2) {
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
            pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_30);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
            goto LAB_04b7da1c;
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        Sexy::RtDbTable::Iterator::operator++((Iterator *)aSStack_28,extraout_w1);
      }
      pRVar5 = (ResourceInfo *)0x0;
LAB_04b7da1c:
      Sexy::RtDbTable::Iterator::~Iterator((Iterator *)aSStack_28);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    std::string::~string(asStack_48);
    std::string::~string(asStack_50);
  }
  else {
    pRVar5 = (ResourceInfo *)0x0;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pRVar5);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILayoutDefinition::GetLayoutCurrent() */

void UILayoutDefinition::GetLayoutCurrent(void)

{
  bool bVar1;
  undefined8 uVar2;
  RtObject *this;
  ResourceInfo *pRVar3;
  int extraout_w1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x57);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
      pRVar3 = (ResourceInfo *)0x0;
LAB_04b7db14:
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(pRVar3);
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      bVar1 = Sexy::RtObject::IsA<UILayoutDefinition>(this);
      if (bVar1) {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
        pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        goto LAB_04b7db14;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* UILayoutDefinition::~UILayoutDefinition() */

void __thiscall UILayoutDefinition::~UILayoutDefinition(UILayoutDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_0696f220;
  std::vector<UIWidgetType,std::allocator<UIWidgetType>>::~vector
            ((vector<UIWidgetType,std::allocator<UIWidgetType>> *)(this + 0x28));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* UILayoutDefinition::~UILayoutDefinition() */

void __thiscall UILayoutDefinition::~UILayoutDefinition(UILayoutDefinition *this)

{
  ~UILayoutDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILayoutDefinition::WriteWidgetTypeChilds(Reflection::RCustomType*, std::vector<UIWidgetType,
   std::allocator<UIWidgetType> >&, Sexy::RtSerialRtonSync*, Sexy::RtSerialRtonKey const&) */

void __thiscall
UILayoutDefinition::WriteWidgetTypeChilds
          (UILayoutDefinition *this,RCustomType *param_1,vector *param_2,RtSerialRtonSync *param_3,
          RtSerialRtonKey *param_4)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  RtSerialRtonWriter *this_00;
  long lVar6;
  long extraout_x0;
  RClass *this_01;
  void *pvVar7;
  CRefNamedSymbolCollection *this_02;
  RCustomType *extraout_x0_00;
  long lVar8;
  RAttribute *this_03;
  char *pcVar9;
  UIWidgetType *this_04;
  uint uVar10;
  string asStack_18 [8];
  RtSerialRtonKey aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (RCustomType *)0x0) {
    cVar1 = FUN_04b7d2bc(param_3[0x10]);
    if ((cVar1 != '\0') &&
       (cVar2 = std::vector<UIWidgetType,std::allocator<UIWidgetType>>::empty
                          ((vector<UIWidgetType,std::allocator<UIWidgetType>> *)param_2),
       cVar2 == '\0')) {
      FUN_04b7d2d4(*(undefined8 *)(param_1 + 0x78));
      this_00 = (RtSerialRtonWriter *)FUN_04b7d2cc(*(undefined8 *)(param_3 + 8));
      lVar6 = FUN_04b7d2d8(*(undefined8 *)(param_1 + 0x80));
      if (lVar6 == 0) {
        cVar1 = '\0';
      }
      else {
        iVar4 = FUN_04b7d388(*(undefined8 *)param_2,*(undefined8 *)(param_2 + 8));
        Sexy::RtSerialRtonWriter::BeginArray(this_00,param_4,iVar4,0xfd);
        if (0 < iVar4) {
          lVar6 = 0;
          nop();
          do {
            this_01 = (RClass *)FUN_04b7d4f0(extraout_x0 + 0x78);
            if (this_01 != (RClass *)0x0) {
              Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_10,(char *)0x0);
              cVar2 = Sexy::RtSerialRtonSync::SyncBeginObject(param_3,aRStack_10);
              std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                        ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_10);
              if (cVar2 != '\0') {
                uVar10 = 0;
                pvVar7 = (void *)FUN_04b7d3c4(*(undefined8 *)param_2,lVar6);
                this_02 = (CRefNamedSymbolCollection *)Reflection::RClass::GetFields(this_01,true);
                uVar5 = Reflection::CRefNamedSymbolCollection::GetCount(this_02);
                if (uVar5 != 0) {
                  do {
                    while( true ) {
                      this_03 = (RAttribute *)
                                Reflection::TRefNamedSymbolCollection<Reflection::RField>::
                                GetIndexed((TRefNamedSymbolCollection<Reflection::RField> *)this_02,
                                           uVar10);
                      pcVar9 = (char *)Reflection::RAttribute::GetName(this_03);
                      std::string::string(asStack_18,pcVar9);
                      nop();
                      bVar3 = std::operator==(asStack_18,"m_thisPtr");
                      if (!bVar3) break;
LAB_04b7ec48:
                      uVar10 = uVar10 + 1;
                      std::string::~string(asStack_18);
                      if (uVar10 == uVar5) goto LAB_04b7ed10;
                    }
                    bVar3 = std::operator==(asStack_18,"Childs");
                    if (bVar3) {
                      FUN_04b7d2e4(*(undefined8 *)(this_03 + 0x80));
                      nop();
                      lVar8 = FUN_04b7d3c4(*(undefined8 *)param_2,lVar6);
                      pcVar9 = (char *)Reflection::RAttribute::GetName(this_03);
                      Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_10,pcVar9);
                      WriteWidgetTypeChilds
                                (this,extraout_x0_00,(vector *)(lVar8 + 0x88),param_3,aRStack_10);
                      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                                ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_10);
                      goto LAB_04b7ec48;
                    }
                    this_04 = (UIWidgetType *)FUN_04b7d3c4(*(undefined8 *)param_2,lVar6);
                    cVar2 = UIWidgetType::IsPropertyNeedWrite(this_04,asStack_18);
                    if (cVar2 == '\0') goto LAB_04b7ec48;
                    uVar10 = uVar10 + 1;
                    pcVar9 = (char *)Reflection::RAttribute::GetName(this_03);
                    Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_10,pcVar9);
                    Reflection::RField::InstanceRtonSync
                              ((RField *)this_03,pvVar7,param_3,aRStack_10);
                    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                              ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_10);
                    std::string::~string(asStack_18);
                  } while (uVar10 != uVar5);
                }
LAB_04b7ed10:
                Sexy::RtSerialRtonSync::SyncEndObject(param_3);
              }
            }
            lVar6 = lVar6 + 1;
          } while ((int)lVar6 < iVar4);
        }
        Sexy::RtSerialRtonWriter::EndArray(this_00);
      }
      goto LAB_04b7eaa4;
    }
  }
  cVar1 = '\0';
LAB_04b7eaa4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILayoutDefinition::Serialize(Sexy::RtSerializeContext const&) */

void __thiscall UILayoutDefinition::Serialize(UILayoutDefinition *this,RtSerializeContext *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  RtClass *this_00;
  RClass *this_01;
  RtSerialRtonSync *this_02;
  RtSerialRtonKey *pRVar4;
  CRefNamedSymbolCollection *this_03;
  RCustomType *extraout_x0;
  RAttribute *this_04;
  char *pcVar5;
  uint uVar6;
  string asStack_18 [8];
  RtSerialRtonKey aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtClass *)(*(code *)**(undefined8 **)this)();
  this_01 = (RClass *)Sexy::RtClass::GetBoundReflectionClass(this_00,true);
  if (this_01 != (RClass *)0x0) {
    this_02 = (RtSerialRtonSync *)FUN_04b7d2d0(*(undefined8 *)(param_1 + 8));
    pRVar4 = (RtSerialRtonKey *)
             std::
             _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                        *)param_1);
    cVar1 = FUN_04b7d2b8(this_02[0x10]);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*(long *)this_01 + 0x68))(this_01,this,this_02,pRVar4);
      goto LAB_04b7ef20;
    }
    cVar1 = Sexy::RtSerialRtonSync::SyncBeginObject(this_02,pRVar4);
    if (cVar1 != '\0') {
      this_03 = (CRefNamedSymbolCollection *)Reflection::RClass::GetFields(this_01,true);
      uVar3 = Reflection::CRefNamedSymbolCollection::GetCount(this_03);
      if (uVar3 != 0) {
        uVar6 = 0;
LAB_04b7ee78:
        do {
          this_04 = (RAttribute *)
                    Reflection::TRefNamedSymbolCollection<Reflection::RField>::GetIndexed
                              ((TRefNamedSymbolCollection<Reflection::RField> *)this_03,uVar6);
          pcVar5 = (char *)Reflection::RAttribute::GetName(this_04);
          std::string::string(asStack_18,pcVar5);
          nop();
          bVar2 = std::operator==(asStack_18,"m_thisPtr");
          if (!bVar2) {
            bVar2 = std::operator==(asStack_18,"Childs");
            if (!bVar2) {
              uVar6 = uVar6 + 1;
              pcVar5 = (char *)Reflection::RAttribute::GetName(this_04);
              Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_10,pcVar5);
              Reflection::RField::InstanceRtonSync((RField *)this_04,this,this_02,aRStack_10);
              std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                        ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_10);
              std::string::~string(asStack_18);
              if (uVar6 == uVar3) break;
              goto LAB_04b7ee78;
            }
            FUN_04b7d2e4(*(undefined8 *)(this_04 + 0x80));
            nop();
            pcVar5 = (char *)Reflection::RAttribute::GetName(this_04);
            Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_10,pcVar5);
            WriteWidgetTypeChilds(this,extraout_x0,(vector *)(this + 0x28),this_02,aRStack_10);
            std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                      ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_10);
          }
          uVar6 = uVar6 + 1;
          std::string::~string(asStack_18);
        } while (uVar6 != uVar3);
      }
      Sexy::RtSerialRtonSync::SyncEndObject(this_02);
      goto LAB_04b7ef20;
    }
  }
  cVar1 = '\0';
LAB_04b7ef20:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILayoutDefinition::GetLayoutByPath(std::string const&) */

void UILayoutDefinition::GetLayoutByPath(string *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ColourFit *this;
  void *__src;
  PVZDB *pPVar4;
  undefined8 uVar5;
  RtObject *this_00;
  int extraout_w1;
  ResourceInfo *pRVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [32];
  Buffer aBStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c();
  if (cVar1 == '\0') {
    cVar1 = Sexy::SexyAppBase::FileExists(gLawnApp,param_1);
    if (cVar1 != '\0') {
      Sexy::Buffer::Buffer(aBStack_38);
      cVar1 = Sexy::SexyAppBase::ReadBufferFromFile
                        ((string *)gLawnApp,(Buffer *)param_1,SUB81(aBStack_38,0));
      if (cVar1 == '\0') {
LAB_04b7f444:
        pRVar6 = (ResourceInfo *)0x0;
      }
      else {
        iVar3 = Sexy::Buffer::GetDataLen(aBStack_38);
        this = operator_new__((long)(iVar3 + 1));
        this[iVar3] = (ColourFit)0x0;
        __src = (void *)Sexy::Buffer::GetDataPtr(aBStack_38);
        memcpy(this,__src,(long)iVar3);
        pPVar4 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
        std::string::string(asStack_58,(char *)this);
        cVar1 = PVZDB::LoadPackageForTableFromJson(pPVar4,0x57,asStack_58,0);
        std::string::~string(asStack_58);
        nop();
        EATextSquish::ColourFit::~ColourFit(this);
        if (cVar1 == '\0') goto LAB_04b7f444;
        uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
        PVZDB::GetObjectIteratorForTable(asStack_58,uVar5,0x57);
        while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)asStack_58),
              bVar2) {
          Sexy::RtDbTable::Iterator::operator*((Iterator *)asStack_58);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_68,(RtWeakPtrBase *)aRStack_60);
          Sexy::RtId::~RtId(aRStack_60);
          bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_68);
          if (bVar2) {
            this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
            bVar2 = Sexy::RtObject::IsA<UILayoutDefinition>(this_00);
            if (bVar2) {
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)aRStack_60,(RtWeakPtrBase *)aRStack_68);
              pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_60);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
              goto LAB_04b7f584;
            }
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
          Sexy::RtDbTable::Iterator::operator++((Iterator *)asStack_58,extraout_w1);
        }
        pRVar6 = (ResourceInfo *)0x0;
LAB_04b7f584:
        Sexy::RtDbTable::Iterator::~Iterator((Iterator *)asStack_58);
      }
      Sexy::Buffer::~Buffer(aBStack_38);
      goto LAB_04b7f3d0;
    }
  }
  pRVar6 = (ResourceInfo *)0x0;
LAB_04b7f3d0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pRVar6);
}

