// Class: PlantPeapod


/* PlantPeapod::Initialize() */

void __thiscall PlantPeapod::Initialize(PlantPeapod *this)

{
  PlantFramework::Initialize((PlantFramework *)this);
  *(undefined4 *)(this + 0x28) = 0;
  this[0x34] = (PlantPeapod)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  return;
}


/* PlantPeapod::PlantPeapod() */

void __thiscall PlantPeapod::PlantPeapod(PlantPeapod *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067bf6c0;
  return;
}


/* PlantPeapod::StaticNew() */

PlantPeapod * PlantPeapod::StaticNew(void)

{
  PlantPeapod *this;
  
  this = ::operator_new(0x38);
  PlantPeapod(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPeapod::StaticClassInit() */

void PlantPeapod::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantPeapod");
    (*pcVar2)(plVar1,asStack_10,FUN_04050070,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPeapod::StaticGetClass() */

long * PlantPeapod::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantPeapod",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPeapod::GetClass() const */

long * PlantPeapod::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantPeapod",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPeapod::CanUpgrade() */

byte __thiscall PlantPeapod::CanUpgrade(PlantPeapod *this)

{
  byte bVar1;
  
  bVar1 = 0;
  if (*(int *)(this + 0x28) < 4) {
    bVar1 = (**(code **)(*(long *)this + 0x180))();
    bVar1 = bVar1 ^ 1;
  }
  return bVar1;
}


/* PlantPeapod::~PlantPeapod() */

void __thiscall PlantPeapod::~PlantPeapod(PlantPeapod *this)

{
  *(undefined ***)this = &PTR_GetClass_067bf6c0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantPeapod::~PlantPeapod() */

void __thiscall PlantPeapod::~PlantPeapod(PlantPeapod *this)

{
  ~PlantPeapod(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPeapod::GetRefundSunAmount() */

void __thiscall PlantPeapod::GetRefundSunAmount(PlantPeapod *this)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetType();
  plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  iVar2 = (**(code **)(*plVar3 + 0x70))(plVar3,0xfffffffe);
  iVar1 = *(int *)(this + 0x28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((float)(iVar2 + iVar1 * iVar2));
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPeapod::FireSelected(int) */

void __thiscall PlantPeapod::FireSelected(PlantPeapod *this,int param_1)

{
  int iVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  Plant *this_01;
  undefined8 *puVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
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
  this_01 = *(Plant **)(this + 0x10);
  uVar3 = *(undefined4 *)(this_00 + 0xd8);
  *(undefined4 *)(this_01 + 0x150) = 0xffffffff;
  fVar4 = (float)FUN_0404fe94(uVar3);
  iVar1 = *(int *)(this + 0x28);
  fVar5 = (float)Plant::GetGeneSkillBoost(this_01);
  FUN_0404fe98(((float)(iVar1 + 1) * fVar5 + 1.0) * fVar4,this_00 + 0xd8);
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_00);
  local_18 = (float)*puVar2;
  local_10 = *(float *)(&DAT_05752ef0 + (long)param_1 * 4) + *(float *)(puVar2 + 1);
  _local_18 = CONCAT44((int)((ulong)*puVar2 >> 0x20),
                       *(float *)(&DAT_05752f10 + (long)param_1 * 4) + local_18);
  (**(code **)(*(long *)this_00 + 0x78))
            (this_00,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPeapod::OnAnimCommand(std::string const&, std::string const&) */

void PlantPeapod::OnAnimCommand(string *param_1,string *param_2)

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
LAB_0405052c:
    __n = *(code **)(*(long *)param_1 + 0x180);
    cVar2 = (*__n)(param_1);
    if (cVar2 == '\0') {
      bVar1 = true;
      FireSelected((PlantPeapod *)param_1,iVar4);
      goto LAB_04050554;
    }
  }
  else {
    iVar4 = 1;
    bVar1 = std::operator==(param_2,"use_action2");
    if (bVar1) goto LAB_0405052c;
    iVar4 = 2;
    bVar1 = std::operator==(param_2,"use_action3");
    if (bVar1) goto LAB_0405052c;
    iVar4 = 3;
    bVar1 = std::operator==(param_2,"use_action4");
    if (bVar1) goto LAB_0405052c;
    bVar1 = std::operator==(param_2,"use_action5");
    if (bVar1) {
      iVar4 = 4;
      goto LAB_0405052c;
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
LAB_04050554:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPeapod::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantPeapod::Fire(PlantFramework *param_1)

{
  int iVar1;
  char cVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined8 local_18;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = (**(code **)(*(long *)param_1 + 0x180))();
  if (cVar2 == '\0') {
    this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)0x0;
  }
  else {
    cVar2 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
    if (cVar2 == '\0') {
      *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x150) = 1;
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
      lVar5 = *(long *)(param_1 + 0x10);
    }
    else {
      *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x150) = 2;
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
      lVar5 = *(long *)(param_1 + 0x10);
    }
    this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)PlantFramework::Fire
                        (param_1,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                                 &local_18,*(undefined4 *)(lVar5 + 0x110),1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    fVar6 = (float)FUN_0404fe94(*(undefined4 *)(this + 0xd8));
    iVar1 = *(int *)(param_1 + 0x28);
    fVar7 = (float)Plant::GetGeneSkillBoost(*(Plant **)(param_1 + 0x10));
    FUN_0404fe98(((float)(iVar1 + 1) * fVar7 + 1.0) * fVar6,this + 0xd8);
    uVar3 = FUN_0404fe88(*(undefined8 *)(this + 0xe0));
    uVar3 = operator|(uVar3,0x2000);
    FUN_0404fe8c(this + 0xe0,uVar3);
    puVar4 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this);
    local_18 = *puVar4;
    local_10 = *(float *)(puVar4 + 1) - 15.0;
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
/* PlantPeapod::Upgrade() */

void __thiscall PlantPeapod::Upgrade(PlantPeapod *this)

{
  int iVar1;
  char *pcVar2;
  PlantAnimRig_Peapod *this_00;
  long lVar3;
  Plant *this_01;
  float fVar4;
  float fVar5;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0x2c) = 0;
  this[0x34] = (PlantPeapod)0x0;
  local_8 = ___stack_chk_guard;
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_Plant");
  this_00 = (PlantAnimRig_Peapod *)FUN_04050984(*(undefined8 *)(this + 0x10));
  iVar1 = *(int *)(this + 0x28);
  *(int *)(this + 0x28) = iVar1 + 1;
  PlantAnimRig_Peapod::SetLevel(this_00,iVar1 + 1);
  FUN_0404feb0(aRStack_10,*(undefined8 *)(this + 0x10));
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  this_01 = *(Plant **)(this + 0x10);
  iVar1 = FUN_0404fea8(*(undefined4 *)(this_01 + 0x3c8));
  fVar6 = *(float *)(lVar3 + 0x24);
  fVar4 = (float)FUN_0404fea4(*(undefined4 *)(this_01 + 0x3c4));
  fVar5 = (float)Plant::GetExtraHitPointsmodifier(this_01);
  *(float *)(this_01 + 0xd8) = fVar5 * fVar4 * ((float)iVar1 + fVar6);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  MessageRouter::Post<Plant*,int,Plant*,int>
            ((MessageRouter *)gMessageRouter,Message::PlantUpgraded,*(Plant **)(this + 0x10),
             *(int *)(this + 0x28));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPeapod::UpdateActions() */

void __thiscall PlantPeapod::UpdateActions(PlantPeapod *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  
  cVar1 = CanUpgrade(this);
  if (cVar1 == '\0') {
LAB_04050ae4:
    if (this[0x34] == (PlantPeapod)0x0) {
      return;
    }
  }
  else if (this[0x34] == (PlantPeapod)0x0) {
    uVar3 = PVZ_T();
    *(undefined4 *)(this + 0x2c) = uVar3;
    iVar2 = FUN_0404fed4(*(undefined8 *)(this + 0x10));
    if (iVar2 != 2) {
      if (2 < iVar2) {
        this[0x34] = (PlantPeapod)0x1;
        *(undefined4 *)(this + 0x30) = 0x42200000;
        fVar4 = (float)PVZ_T();
        if (fVar4 - *(float *)(this + 0x2c) < *(float *)(this + 0x30)) {
          return;
        }
        goto LAB_04050b20;
      }
      goto LAB_04050ae4;
    }
    this[0x34] = (PlantPeapod)0x1;
    *(undefined4 *)(this + 0x30) = 0x42700000;
  }
  fVar4 = (float)PVZ_T();
  if (fVar4 - *(float *)(this + 0x2c) < *(float *)(this + 0x30)) {
    return;
  }
LAB_04050b20:
  cVar1 = CanUpgrade(this);
  if (cVar1 == '\0') {
    return;
  }
  Upgrade(this);
  return;
}

