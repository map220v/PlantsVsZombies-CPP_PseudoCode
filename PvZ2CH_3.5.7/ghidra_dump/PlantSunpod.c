// Class: PlantSunpod


/* PlantSunpod::Initialize() */

void __thiscall PlantSunpod::Initialize(PlantSunpod *this)

{
  *(undefined4 *)(this + 0x28) = 0;
  return;
}


/* PlantSunpod::PlantSunpod() */

void __thiscall PlantSunpod::PlantSunpod(PlantSunpod *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR_GetClass_067e8f80;
  return;
}


/* PlantSunpod::StaticNew() */

PlantSunpod * PlantSunpod::StaticNew(void)

{
  PlantSunpod *this;
  
  this = ::operator_new(0x30);
  PlantSunpod(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSunpod::StaticClassInit() */

void PlantSunpod::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantSunpod");
    (*pcVar2)(plVar1,asStack_10,FUN_04120868,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSunpod::StaticGetClass() */

long * PlantSunpod::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantSunpod",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSunpod::GetClass() const */

long * PlantSunpod::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantSunpod",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSunpod::~PlantSunpod() */

void __thiscall PlantSunpod::~PlantSunpod(PlantSunpod *this)

{
  *(undefined ***)this = &PTR_GetClass_067e8f80;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantSunpod::~PlantSunpod() */

void __thiscall PlantSunpod::~PlantSunpod(PlantSunpod *this)

{
  ~PlantSunpod(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSunpod::FireSelected(int) */

void __thiscall PlantSunpod::FireSelected(PlantSunpod *this,int param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar1;
  float local_18;
  undefined4 uStack_14;
  float local_10;
  long local_8;
  
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0;
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)PlantFramework::Fire
                         ((PlantFramework *)this,
                          (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                          &local_18,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_00);
  local_18 = (float)*puVar1;
  local_10 = *(float *)(&DAT_05753120 + (long)param_1 * 4) + *(float *)(puVar1 + 1);
  _local_18 = CONCAT44((int)((ulong)*puVar1 >> 0x20),
                       *(float *)(&DAT_05753100 + (long)param_1 * 4) + local_18);
  (**(code **)(*(long *)this_00 + 0x78))
            (this_00,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSunpod::OnAnimCommand(std::string const&, std::string const&) */

void PlantSunpod::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  char *__s;
  code *__n;
  int iVar4;
  RealObject *this;
  string asStack_18 [8];
  string asStack_10 [8];
  code *local_8;
  
  iVar4 = 0;
  local_8 = ___stack_chk_guard;
  __n = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"use_action1");
  if (bVar1) {
LAB_04120b44:
    __n = *(code **)(*(long *)param_1 + 0x180);
    cVar2 = (*__n)(param_1);
    if (cVar2 == '\0') {
      bVar1 = true;
      FireSelected((PlantSunpod *)param_1,iVar4);
      goto LAB_04120b6c;
    }
  }
  else {
    iVar4 = 1;
    bVar1 = std::operator==(param_2,"use_action2");
    if (bVar1) goto LAB_04120b44;
    iVar4 = 2;
    bVar1 = std::operator==(param_2,"use_action3");
    if (bVar1) goto LAB_04120b44;
    iVar4 = 3;
    bVar1 = std::operator==(param_2,"use_action4");
    if (bVar1) goto LAB_04120b44;
    bVar1 = std::operator==(param_2,"use_action5");
    if (bVar1) {
      iVar4 = 4;
      goto LAB_04120b44;
    }
  }
  Set8BytesTo0(asStack_18);
  bVar1 = std::operator==(param_2,"begin_plantfood");
  if (bVar1) {
    std::string::append(asStack_18,"Play_PeaPod_Emerge_PF",(size_t)__n);
    lVar3 = FUN_05474178(asStack_18);
  }
  else {
    bVar1 = std::operator==(param_2,"end_plantfood");
    if (bVar1) {
      std::string::append(asStack_18,"Play_PeaPod_Descend_PF",(size_t)__n);
    }
    lVar3 = FUN_05474178(asStack_18);
  }
  bVar1 = lVar3 != 0;
  if (bVar1) {
    this = *(RealObject **)(param_1 + 0x10);
    __s = (char *)FUN_0547429c(asStack_18);
    std::string::string(asStack_10,__s);
    RealObject::PlayPositionalSound(this,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
  }
  std::string::~string(asStack_18);
LAB_04120b6c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSunpod::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantSunpod::Fire(PlantFramework *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_1 + 0x180))();
  if (cVar1 == '\0') {
    this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)0x0;
  }
  else {
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x150) = 1;
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
    this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)PlantFramework::Fire
                        (param_1,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                                 &local_18,param_3,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    uVar2 = FUN_041206c4(*(undefined8 *)(this + 0xe0));
    uVar2 = operator|(uVar2,0x2000);
    FUN_041206c8(this + 0xe0,uVar2);
    puVar3 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this);
    local_18 = *puVar3;
    local_10 = *(float *)(puVar3 + 1) - 15.0;
    (**(code **)(*(long *)this + 0x78))
              (this,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x150) = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSunpod::SetLevel(int) */

void __thiscall PlantSunpod::SetLevel(PlantSunpod *this,int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  PlantAnimRig_Sunpod *this_00;
  long *plVar3;
  long lVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x28) != param_1) {
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_Plant");
    uVar1 = ClampInt(param_1,0,4);
    *(undefined4 *)(this + 0x28) = uVar1;
    this_00 = (PlantAnimRig_Sunpod *)FUN_04120e84(*(undefined8 *)(this + 0x10));
    PlantAnimRig_Sunpod::SetLevel(this_00,*(int *)(this + 0x28));
    lVar4 = *(long *)(this + 0x10);
    Plant::GetType();
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    uVar1 = (**(code **)(*plVar3 + 0x50))();
    *(undefined4 *)(lVar4 + 0xd8) = uVar1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSunpod::UpdateActions() */

void __thiscall PlantSunpod::UpdateActions(PlantSunpod *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = Board::GetSunCurrency(*(Board **)(gLawnApp + 0x9f0));
  lVar3 = FUN_04120f0c(*(undefined8 *)(this + 0x10));
  iVar2 = 0;
  if (*(int *)(lVar3 + 0x2b8) != 0) {
    iVar2 = iVar1 / *(int *)(lVar3 + 0x2b8);
  }
  iVar2 = ClampInt(iVar2,0,4);
  SetLevel(this,iVar2);
  return;
}

