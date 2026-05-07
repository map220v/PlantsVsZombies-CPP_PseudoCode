// Class: PlantGeneConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneConfig::StaticClassInit() */

void PlantGeneConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantGeneConfig");
    (*pcVar2)(plVar1,asStack_10,FUN_037fbe9c,0xd8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGeneConfig::StaticGetClass() */

long * PlantGeneConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantGeneConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGeneConfig::GetClass() const */

long * PlantGeneConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantGeneConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGeneConfig::GetGeneByID(int) */

void PlantGeneConfig::GetGeneByID(int param_1)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  RtMixedPtrBase *pRVar4;
  ulong uVar5;
  RtWeakPtrBase *pRVar6;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar7;
  int in_w1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  ulong uVar8;
  undefined8 uVar9;
  
  uVar2 = (ulong)(uint)param_1;
  uVar8 = 0;
  uVar9 = *(undefined8 *)(uVar2 + 0x10);
  lVar3 = FUN_037f9fd4(uVar9,*(undefined8 *)(uVar2 + 0x18));
  if (lVar3 != 0) {
    do {
      pRVar4 = (RtMixedPtrBase *)FUN_037f9ffc(uVar9,uVar8);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(pRVar4);
      if (cVar1 != '\0') {
        pRVar7 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_037f9ffc(*(undefined8 *)(uVar2 + 0x10),uVar8);
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
        if (*(int *)(lVar3 + 0x10) == in_w1) {
          uVar9 = *(undefined8 *)(uVar2 + 0x10);
          goto LAB_037fabd4;
        }
      }
      uVar9 = *(undefined8 *)(uVar2 + 0x10);
      uVar8 = uVar8 + 1;
      uVar5 = FUN_037f9fd4(uVar9,*(undefined8 *)(uVar2 + 0x18));
    } while (uVar8 < uVar5);
  }
  uVar9 = *(undefined8 *)(uVar2 + 0x28);
  uVar8 = 0;
  lVar3 = FUN_037f9fd4(uVar9,*(undefined8 *)(uVar2 + 0x30));
  if (lVar3 != 0) {
    do {
      pRVar4 = (RtMixedPtrBase *)FUN_037f9ffc(uVar9,uVar8);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(pRVar4);
      if (cVar1 != '\0') {
        pRVar7 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_037f9ffc(*(undefined8 *)(uVar2 + 0x28),uVar8);
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
        if (*(int *)(lVar3 + 0x10) == in_w1) {
          uVar9 = *(undefined8 *)(uVar2 + 0x28);
          goto LAB_037fabd4;
        }
      }
      uVar9 = *(undefined8 *)(uVar2 + 0x28);
      uVar8 = uVar8 + 1;
      uVar5 = FUN_037f9fd4(uVar9,*(undefined8 *)(uVar2 + 0x30));
    } while (uVar8 < uVar5);
  }
  uVar9 = *(undefined8 *)(uVar2 + 0x40);
  uVar8 = 0;
  lVar3 = FUN_037f9fd4(uVar9,*(undefined8 *)(uVar2 + 0x48));
  if (lVar3 != 0) {
    do {
      pRVar4 = (RtMixedPtrBase *)FUN_037f9ffc(uVar9,uVar8);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(pRVar4);
      if (cVar1 != '\0') {
        pRVar7 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_037f9ffc(*(undefined8 *)(uVar2 + 0x40),uVar8);
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
        if (*(int *)(lVar3 + 0x10) == in_w1) {
          uVar9 = *(undefined8 *)(uVar2 + 0x40);
          goto LAB_037fabd4;
        }
      }
      uVar9 = *(undefined8 *)(uVar2 + 0x40);
      uVar8 = uVar8 + 1;
      uVar5 = FUN_037f9fd4(uVar9,*(undefined8 *)(uVar2 + 0x48));
    } while (uVar8 < uVar5);
  }
  uVar8 = 0;
  do {
    uVar9 = *(undefined8 *)(uVar2 + 0x58);
    uVar5 = FUN_037f9fd4(uVar9,*(undefined8 *)(uVar2 + 0x60));
    if (uVar5 <= uVar8) {
      uVar8 = 0;
      do {
        uVar9 = *(undefined8 *)(uVar2 + 0x70);
        uVar5 = FUN_037f9fd4(uVar9,*(undefined8 *)(uVar2 + 0x78));
        if (uVar5 <= uVar8) {
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
          return;
        }
        pRVar4 = (RtMixedPtrBase *)FUN_037f9ffc(uVar9,uVar8);
        cVar1 = Sexy::RtMixedPtrBase::IsValid(pRVar4);
        if (cVar1 != '\0') {
          pRVar7 = (RtWeakPtr<Sexy::ResourceInfo> *)
                   FUN_037f9ffc(*(undefined8 *)(uVar2 + 0x70),uVar8);
          lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
          if (*(int *)(lVar3 + 0x10) == in_w1) {
            uVar9 = *(undefined8 *)(uVar2 + 0x70);
LAB_037fabd4:
            pRVar6 = (RtWeakPtrBase *)FUN_037f9ffc(uVar9,uVar8);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,pRVar6);
            return;
          }
        }
        uVar8 = uVar8 + 1;
      } while( true );
    }
    pRVar4 = (RtMixedPtrBase *)FUN_037f9ffc(uVar9,uVar8);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(pRVar4);
    if (cVar1 != '\0') {
      pRVar7 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_037f9ffc(*(undefined8 *)(uVar2 + 0x58),uVar8);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
      if (*(int *)(lVar3 + 0x10) == in_w1) {
        uVar9 = *(undefined8 *)(uVar2 + 0x58);
        goto LAB_037fabd4;
      }
    }
    uVar8 = uVar8 + 1;
  } while( true );
}


/* PlantGeneConfig::PlantGeneConfig() */

void __thiscall PlantGeneConfig::PlantGeneConfig(PlantGeneConfig *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_0669cf30;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x90));
  HowToPlayScreenData::HowToPlayScreenData((HowToPlayScreenData *)(this + 0xa8));
  return;
}


/* PlantGeneConfig::StaticNew() */

PlantGeneConfig * PlantGeneConfig::StaticNew(void)

{
  PlantGeneConfig *this;
  
  this = ::operator_new(0xd8);
  PlantGeneConfig(this);
  return this;
}


/* PlantGeneConfig::~PlantGeneConfig() */

void __thiscall PlantGeneConfig::~PlantGeneConfig(PlantGeneConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_0669cf30;
  HowToPlayScreenData::~HowToPlayScreenData((HowToPlayScreenData *)(this + 0xa8));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x90));
  std::vector<Sexy::RtWeakPtr<PlantGene>,std::allocator<Sexy::RtWeakPtr<PlantGene>>>::~vector
            ((vector<Sexy::RtWeakPtr<PlantGene>,std::allocator<Sexy::RtWeakPtr<PlantGene>>> *)
             (this + 0x70));
  std::vector<Sexy::RtWeakPtr<PlantGene>,std::allocator<Sexy::RtWeakPtr<PlantGene>>>::~vector
            ((vector<Sexy::RtWeakPtr<PlantGene>,std::allocator<Sexy::RtWeakPtr<PlantGene>>> *)
             (this + 0x58));
  std::vector<Sexy::RtWeakPtr<PlantGene>,std::allocator<Sexy::RtWeakPtr<PlantGene>>>::~vector
            ((vector<Sexy::RtWeakPtr<PlantGene>,std::allocator<Sexy::RtWeakPtr<PlantGene>>> *)
             (this + 0x40));
  std::vector<Sexy::RtWeakPtr<PlantGene>,std::allocator<Sexy::RtWeakPtr<PlantGene>>>::~vector
            ((vector<Sexy::RtWeakPtr<PlantGene>,std::allocator<Sexy::RtWeakPtr<PlantGene>>> *)
             (this + 0x28));
  std::vector<Sexy::RtWeakPtr<PlantGene>,std::allocator<Sexy::RtWeakPtr<PlantGene>>>::~vector
            ((vector<Sexy::RtWeakPtr<PlantGene>,std::allocator<Sexy::RtWeakPtr<PlantGene>>> *)
             (this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* PlantGeneConfig::~PlantGeneConfig() */

void __thiscall PlantGeneConfig::~PlantGeneConfig(PlantGeneConfig *this)

{
  ~PlantGeneConfig(this);
  AK::FreeHook(this);
  return;
}

