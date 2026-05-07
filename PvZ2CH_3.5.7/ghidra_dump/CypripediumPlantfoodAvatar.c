// Class: CypripediumPlantfoodAvatar


/* CypripediumPlantfoodAvatar::~CypripediumPlantfoodAvatar() */

void __thiscall
CypripediumPlantfoodAvatar::~CypripediumPlantfoodAvatar(CypripediumPlantfoodAvatar *this)

{
  *(undefined ***)this = &PTR_GetClass_06820cd0;
  *(undefined ***)(this + 0x10) = &PTR__CypripediumPlantfoodAvatar_06820ec0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to CypripediumPlantfoodAvatar::~CypripediumPlantfoodAvatar() */

void __thiscall
CypripediumPlantfoodAvatar::~CypripediumPlantfoodAvatar(CypripediumPlantfoodAvatar *this)

{
  ~CypripediumPlantfoodAvatar(this + -0x10);
  return;
}


/* CypripediumPlantfoodAvatar::~CypripediumPlantfoodAvatar() */

void __thiscall
CypripediumPlantfoodAvatar::~CypripediumPlantfoodAvatar(CypripediumPlantfoodAvatar *this)

{
  ~CypripediumPlantfoodAvatar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CypripediumPlantfoodAvatar::~CypripediumPlantfoodAvatar() */

void __thiscall
CypripediumPlantfoodAvatar::~CypripediumPlantfoodAvatar(CypripediumPlantfoodAvatar *this)

{
  ~CypripediumPlantfoodAvatar(this + -0x10);
  return;
}


/* CypripediumPlantfoodAvatar::CypripediumPlantfoodAvatar() */

void __thiscall
CypripediumPlantfoodAvatar::CypripediumPlantfoodAvatar(CypripediumPlantfoodAvatar *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06820cd0;
  *(undefined ***)(this + 0x10) = &PTR__CypripediumPlantfoodAvatar_06820ec0;
  return;
}


/* CypripediumPlantfoodAvatar::StaticNew() */

CypripediumPlantfoodAvatar * CypripediumPlantfoodAvatar::StaticNew(void)

{
  CypripediumPlantfoodAvatar *this;
  
  this = ::operator_new(0x1a8);
  CypripediumPlantfoodAvatar(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CypripediumPlantfoodAvatar::StaticClassInit() */

void CypripediumPlantfoodAvatar::StaticClassInit(void)

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
    std::string::string(asStack_10,"CypripediumPlantfoodAvatar");
    (*pcVar2)(plVar1,asStack_10,FUN_04272b18,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CypripediumPlantfoodAvatar::StaticGetClass() */

long * CypripediumPlantfoodAvatar::StaticGetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"CypripediumPlantfoodAvatar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CypripediumPlantfoodAvatar::GetClass() const */

long * CypripediumPlantfoodAvatar::GetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"CypripediumPlantfoodAvatar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CypripediumPlantfoodAvatar::OnCollideEntity(BoardEntity*) */

void __thiscall
CypripediumPlantfoodAvatar::OnCollideEntity(CypripediumPlantfoodAvatar *this,BoardEntity *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar6;
  Zombie *pZVar7;
  RtObject *this_01;
  undefined8 local_48;
  undefined4 local_40;
  float fStack_3c;
  undefined4 local_38;
  undefined8 local_30 [2];
  RtWeakPtr aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    puVar5 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_1);
    local_38 = *(undefined4 *)(puVar5 + 1);
    fStack_3c = (float)((ulong)*puVar5 >> 0x20);
    _local_40 = CONCAT44(fStack_3c - 30.0,(int)*puVar5);
    this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string((string *)local_30,"POPANIM_EFFECTS_CYPRIPEDIUM_PLANTFOOD_AVATAR");
    GetPAMByName((string *)local_30);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
    Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar6,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    std::string::~string((string *)local_30);
    nop();
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_40,-1);
    Effect_PopAnim::SetCentered(this_00,true);
    FUN_04271bfc(this_00 + 0x1c);
    std::string::string((string *)aRStack_20,"smoke");
    Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_20,0);
    std::string::~string((string *)aRStack_20);
    nop();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_20);
    uVar2 = operator|(2,4);
    iVar3 = BoardEntity::CalcColumnPosition(param_1);
    iVar4 = SharkMinion::getRow((SharkMinion *)param_1);
    Sexy::Insets::Insets((Insets *)local_30,iVar3 + -2,iVar4 + -2,5,5);
    EntityFinder::GetEntitiesInGridSquares(aRStack_20,uVar2,(string *)local_30);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)aRStack_20);
    local_30[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)aRStack_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_48,(__normal_iterator *)local_30), bVar1)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48)
      ;
      this_01 = (RtObject *)*puVar5;
      pZVar7 = Sexy::RtObject::Cast<Zombie>(this_01);
      if (pZVar7 != (Zombie *)0x0) {
        Zombie::ApplyCondition((Zombie *)0x40400000,0,pZVar7,0x53,1);
        Zombie::ApplyCondition((Zombie *)0x40000000,0,pZVar7,0x18,1);
      }
      if (this_01 != (RtObject *)param_1) {
        (**(code **)(*(long *)this + 0x1b0))(this,this_01);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aRStack_20);
  }
  Projectile::OnCollideEntity((Projectile *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

