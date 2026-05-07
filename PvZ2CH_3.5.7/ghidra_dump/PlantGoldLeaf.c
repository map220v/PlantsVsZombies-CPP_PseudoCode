// Class: PlantGoldLeaf


/* PlantGoldLeaf::HasShadow() */

PlantGoldLeaf __thiscall PlantGoldLeaf::HasShadow(PlantGoldLeaf *this)

{
  return this[0x29];
}


/* PlantGoldLeaf::CalcRenderOrder() */

int __thiscall PlantGoldLeaf::CalcRenderOrder(PlantGoldLeaf *this)

{
  int iVar1;
  
  iVar1 = PlantFramework::CalcRenderOrder((PlantFramework *)this);
  return iVar1 + 1;
}


/* PlantGoldLeaf::PlantGoldLeaf() */

void __thiscall PlantGoldLeaf::PlantGoldLeaf(PlantGoldLeaf *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  this[0x28] = (PlantGoldLeaf)0x0;
  this[0x29] = (PlantGoldLeaf)0x1;
  *(undefined ***)this = &PTR_GetClass_067e5980;
  return;
}


/* PlantGoldLeaf::StaticNew() */

PlantGoldLeaf * PlantGoldLeaf::StaticNew(void)

{
  PlantGoldLeaf *this;
  
  this = ::operator_new(0x30);
  PlantGoldLeaf(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGoldLeaf::StaticClassInit() */

void PlantGoldLeaf::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantGoldLeaf");
    (*pcVar2)(plVar1,asStack_10,FUN_04112460,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGoldLeaf::StaticGetClass() */

long * PlantGoldLeaf::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantGoldLeaf",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGoldLeaf::GetClass() const */

long * PlantGoldLeaf::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantGoldLeaf",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGoldLeaf::~PlantGoldLeaf() */

void __thiscall PlantGoldLeaf::~PlantGoldLeaf(PlantGoldLeaf *this)

{
  *(undefined ***)this = &PTR_GetClass_067e5980;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantGoldLeaf::~PlantGoldLeaf() */

void __thiscall PlantGoldLeaf::~PlantGoldLeaf(PlantGoldLeaf *this)

{
  ~PlantGoldLeaf(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGoldLeaf::Initialize() */

void __thiscall PlantGoldLeaf::Initialize(PlantGoldLeaf *this)

{
  char cVar1;
  long *plVar2;
  RealObject *this_00;
  code *pcVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x28] = (PlantGoldLeaf)0x0;
  this[0x29] = (PlantGoldLeaf)0x1;
  cVar1 = Plant::IsOnBoard(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pcVar3 = *(code **)(*plVar2 + 0x130);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    (*pcVar3)(plVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    this_00 = *(RealObject **)(this + 0x10);
    std::string::string(asStack_58,"Play_Plant_Power_Plant_Spawn");
    RealObject::PlayPositionalSound(this_00,asStack_58,0.0);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGoldLeaf::createTile() */

void __thiscall PlantGoldLeaf::createTile(PlantGoldLeaf *this)

{
  string *psVar1;
  Board *pBVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
  std::string::string(asStack_10,"goldtile");
  ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar1);
  std::string::~string(asStack_10);
  nop();
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
  Board::AddGridItem(pBVar2,asStack_10,*(undefined4 *)(*(long *)(this + 0x10) + 0x114),
                     *(undefined4 *)(*(long *)(this + 0x10) + 0x110),1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  this[0x28] = (PlantGoldLeaf)0x1;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGoldLeaf::OnAnimCommand(std::string const&, std::string const&) */

bool PlantGoldLeaf::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_2,"_special");
  if (bVar1) {
    createTile((PlantGoldLeaf *)param_1);
    param_1[0x29] = (string)0x0;
  }
  return bVar1;
}

