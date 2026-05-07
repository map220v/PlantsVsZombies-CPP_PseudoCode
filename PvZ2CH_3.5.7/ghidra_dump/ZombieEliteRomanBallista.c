// Class: ZombieEliteRomanBallista


/* ZombieEliteRomanBallista::onDraw(Sexy::Graphics*) */

void __thiscall ZombieEliteRomanBallista::onDraw(ZombieEliteRomanBallista *this,Graphics *param_1)

{
  Zombie::onDraw((Graphics *)this);
  (**(code **)(*(long *)(this + 0x840) + 0x10))(this + 0x840,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEliteRomanBallista::StaticClassInit() */

void ZombieEliteRomanBallista::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieEliteRomanBallista");
    (*pcVar2)(plVar1,asStack_10,FUN_04ef6b98,0x878,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEliteRomanBallista::StaticGetClass() */

long * ZombieEliteRomanBallista::StaticGetClass(void)

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
  uVar2 = ZombieRomanBallista::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieEliteRomanBallista",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEliteRomanBallista::GetClass() const */

long * ZombieEliteRomanBallista::GetClass(void)

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
  uVar2 = ZombieRomanBallista::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieEliteRomanBallista",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEliteRomanBallista::FindRandomTarget() */

void ZombieEliteRomanBallista::FindRandomTarget(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  long lVar4;
  ulong uVar5;
  int in_w2;
  undefined4 uVar6;
  undefined4 local_20;
  undefined4 local_1c;
  
  lVar1 = ___stack_chk_guard;
  lVar4 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(in_x0);
  uVar6 = *(undefined4 *)(lVar4 + 8);
  iVar2 = BoardConstants::NUMBER_OF_ROWS();
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  uVar5 = Sexy::Rand(iVar3 + -1);
  iVar2 = Sexy::Rand(iVar2 + -1);
  BoardTransforms::GridToBoardSpacePos((BoardTransforms *)(uVar5 & 0xffffffff),iVar2,in_w2);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((float)local_20,(float)local_1c,uVar6);
}


/* ZombieEliteRomanBallista::onZombieInitialize() */

void __thiscall ZombieEliteRomanBallista::onZombieInitialize(ZombieEliteRomanBallista *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar1;
  float fVar2;
  
  this[0x1b8] = (ZombieEliteRomanBallista)0x1;
  Zombie::onZombieInitialize((Zombie *)this);
  fVar2 = (float)FUN_04ef6a14(*(undefined4 *)(this + 0x284));
  ZombieEliteModule::SetMaxHealth((ZombieEliteModule *)(this + 0x840),fVar2);
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  Zombie::SetZombieScale((Zombie *)this,*(float *)(lVar1 + 0x1d4));
  return;
}


/* ZombieEliteRomanBallista::onPlaceOnBoard() */

void __thiscall ZombieEliteRomanBallista::onPlaceOnBoard(ZombieEliteRomanBallista *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar1;
  undefined4 *puVar2;
  
  ZombieRomanBallista::onPlaceOnBoard((ZombieRomanBallista *)this);
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  if (*(int *)(lVar1 + 0x1dc) != 2) {
    return;
  }
  puVar2 = (undefined4 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  ZombieEliteModule::SpawnZombieEffect(*puVar2,puVar2[1],puVar2[2],this + 0x840);
  return;
}


/* ZombieEliteRomanBallista::onUpdate() */

void __thiscall ZombieEliteRomanBallista::onUpdate(ZombieEliteRomanBallista *this)

{
  ZombieEliteModule *this_00;
  undefined4 *puVar1;
  float fVar2;
  
  ZombieRomanBallista::onUpdate((ZombieRomanBallista *)this);
  this_00 = (ZombieEliteModule *)(this + 0x840);
  fVar2 = (float)FUN_04ef6a10(*(undefined4 *)(this + 0x280));
  ZombieEliteModule::SetCurrentHealth(this_00,fVar2);
  puVar1 = (undefined4 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  ZombieEliteModule::SetPosition(*puVar1,puVar1[1],puVar1[2],this_00);
  fVar2 = (float)PVZ_T();
  HeroPlantTalentButton::OnSelect
            ((HeroPlantTalentButton *)this_00,fVar2 <= *(float *)(this + 0x1bc));
  return;
}


/* ZombieEliteRomanBallista::ZombieEliteRomanBallista() */

void __thiscall ZombieEliteRomanBallista::ZombieEliteRomanBallista(ZombieEliteRomanBallista *this)

{
  ZombieRomanBallista::ZombieRomanBallista((ZombieRomanBallista *)this);
  ZombieEliteModule::ZombieEliteModule((ZombieEliteModule *)(this + 0x840));
  *(undefined ***)this = &PTR_GetClass_06a065f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieEliteRomanBallista_06a07070;
  *(undefined ***)(this + 0x840) = &PTR__ZombieEliteRomanBallista_06a070a0;
  return;
}


/* ZombieEliteRomanBallista::StaticNew() */

ZombieEliteRomanBallista * ZombieEliteRomanBallista::StaticNew(void)

{
  ZombieEliteRomanBallista *this;
  
  this = ::operator_new(0x878);
  ZombieEliteRomanBallista(this);
  return this;
}


/* ZombieEliteRomanBallista::~ZombieEliteRomanBallista() */

void __thiscall ZombieEliteRomanBallista::~ZombieEliteRomanBallista(ZombieEliteRomanBallista *this)

{
  *(undefined ***)this = &PTR_GetClass_06a065f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieEliteRomanBallista_06a07070;
  *(undefined ***)(this + 0x840) = &PTR__ZombieEliteRomanBallista_06a070a0;
  nop();
  ZombieRomanBallista::~ZombieRomanBallista((ZombieRomanBallista *)this);
  return;
}


/* non-virtual thunk to ZombieEliteRomanBallista::~ZombieEliteRomanBallista() */

void __thiscall ZombieEliteRomanBallista::~ZombieEliteRomanBallista(ZombieEliteRomanBallista *this)

{
  ~ZombieEliteRomanBallista(this + -0x10);
  return;
}


/* non-virtual thunk to ZombieEliteRomanBallista::~ZombieEliteRomanBallista() */

void __thiscall ZombieEliteRomanBallista::~ZombieEliteRomanBallista(ZombieEliteRomanBallista *this)

{
  ~ZombieEliteRomanBallista(this + -0x840);
  return;
}


/* ZombieEliteRomanBallista::~ZombieEliteRomanBallista() */

void __thiscall ZombieEliteRomanBallista::~ZombieEliteRomanBallista(ZombieEliteRomanBallista *this)

{
  ~ZombieEliteRomanBallista(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieEliteRomanBallista::~ZombieEliteRomanBallista() */

void __thiscall ZombieEliteRomanBallista::~ZombieEliteRomanBallista(ZombieEliteRomanBallista *this)

{
  ~ZombieEliteRomanBallista(this + -0x10);
  return;
}


/* non-virtual thunk to ZombieEliteRomanBallista::~ZombieEliteRomanBallista() */

void __thiscall ZombieEliteRomanBallista::~ZombieEliteRomanBallista(ZombieEliteRomanBallista *this)

{
  ~ZombieEliteRomanBallista(this + -0x840);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEliteRomanBallista::launchVase() */

void ZombieEliteRomanBallista::launchVase(void)

{
  char cVar1;
  Zombie *in_x0;
  ZombieEliteRomanBallistaProps *pZVar2;
  CreatureConditionTracker *this;
  SexyVector3 *this_00;
  undefined4 *puVar3;
  int iVar4;
  long lVar5;
  float fVar6;
  undefined4 in_s1;
  undefined4 uVar7;
  undefined4 in_s2;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  RtWeakPtr<Sexy::SoundResource> aRStack_60 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_58 [8];
  Vec3 aVStack_50 [16];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetProps<ZombieEliteRomanBallistaProps>(in_x0);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(pZVar2 + 0x238));
  if (cVar1 != '\0') {
    iVar4 = 0;
    this = (CreatureConditionTracker *)Zombie::GetConditionTracker(in_x0);
    fVar6 = (float)CreatureConditionTracker::GetDrawScale(this);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    if (0 < *(int *)(pZVar2 + 0x268)) {
      do {
        iVar4 = iVar4 + 1;
        local_30 = FindRandomTarget();
        local_2c = in_s1;
        local_28 = in_s2;
        std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::push_back
                  ((vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>> *)local_20,
                   (SexyVector3 *)&local_30);
      } while (iVar4 < *(int *)(pZVar2 + 0x268));
    }
    uVar7 = 0;
    uVar8 = 0x43110000;
    EATextSquish::Vec3::Vec3(aVStack_50,-10.0,0.0,145.0);
    uVar9 = *(undefined4 *)(pZVar2 + 0x220);
    uVar10 = *(undefined4 *)(pZVar2 + 0x224);
    if (0 < *(int *)(pZVar2 + 0x268)) {
      lVar5 = 0;
      this_00 = (SexyVector3 *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)in_x0);
      do {
        local_40 = Sexy::SexyVector3::operator*((SexyVector3 *)aVStack_50,fVar6);
        local_3c = uVar7;
        local_38 = uVar8;
        local_30 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)&local_40);
        local_2c = uVar7;
        local_28 = uVar8;
        puVar3 = (undefined4 *)FUN_04ef6a18(local_20[0],lVar5);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  (aRStack_60,(RtWeakPtrBase *)(pZVar2 + 0x238));
        FUN_04ef69e0(*(undefined4 *)(in_x0 + 0x24));
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  (a_Stack_58);
        uVar7 = local_2c;
        uVar8 = local_28;
        ZombieRomanBallista::launchProjectile
                  (local_30,local_2c,local_28,*puVar3,puVar3[1],puVar3[2],uVar9,uVar10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60)
        ;
        iVar4 = (int)lVar5;
        lVar5 = lVar5 + 1;
      } while (iVar4 + 1 < *(int *)(pZVar2 + 0x268));
    }
    std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::~vector
              ((vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>> *)local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

