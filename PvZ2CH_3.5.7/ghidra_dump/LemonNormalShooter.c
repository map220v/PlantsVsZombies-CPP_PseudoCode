// Class: LemonNormalShooter


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LemonNormalShooter::StaticClassInit() */

void LemonNormalShooter::StaticClassInit(void)

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
    std::string::string(asStack_10,"LemonNormalShooter");
    (*pcVar2)(plVar1,asStack_10,FUN_03fdfcd8,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LemonNormalShooter::StaticGetClass() */

long * LemonNormalShooter::StaticGetClass(void)

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
  uVar2 = PlantFoodCounter::StaticGetClass();
  (*pcVar3)(plVar1,"LemonNormalShooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LemonNormalShooter::GetClass() const */

long * LemonNormalShooter::GetClass(void)

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
  uVar2 = PlantFoodCounter::StaticGetClass();
  (*pcVar3)(plVar1,"LemonNormalShooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LemonNormalShooter::LemonNormalShooter() */

void __thiscall LemonNormalShooter::LemonNormalShooter(LemonNormalShooter *this)

{
  PlantFoodCounter::PlantFoodCounter((PlantFoodCounter *)this);
  *(undefined ***)this = &PTR_GetClass_067afdf0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x18));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x20));
  return;
}


/* LemonNormalShooter::StaticNew() */

LemonNormalShooter * LemonNormalShooter::StaticNew(void)

{
  LemonNormalShooter *this;
  
  this = ::operator_new(0x28);
  LemonNormalShooter(this);
  return this;
}


/* LemonNormalShooter::~LemonNormalShooter() */

void __thiscall LemonNormalShooter::~LemonNormalShooter(LemonNormalShooter *this)

{
  *(undefined ***)this = &PTR_GetClass_067afdf0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  PlantFoodCounter::~PlantFoodCounter((PlantFoodCounter *)this);
  return;
}


/* LemonNormalShooter::~LemonNormalShooter() */

void __thiscall LemonNormalShooter::~LemonNormalShooter(LemonNormalShooter *this)

{
  ~LemonNormalShooter(this);
  AK::FreeHook(this);
  return;
}


/* LemonNormalShooter::Start(float, int, Sexy::RtWeakPtr<BoardEntity>,
   Sexy::RtWeakPtr<ProjectilePropertySheet>) */

void __thiscall
LemonNormalShooter::Start
          (float param_1,LemonNormalShooter *this,int param_2,RtWeakPtr *param_4,RtWeakPtr *param_5)

{
  PlantFoodCounter::Start((PlantFoodCounter *)this,param_1,param_2);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x18),param_4);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x20),param_5);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LemonNormalShooter::Update() */

void __thiscall LemonNormalShooter::Update(LemonNormalShooter *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  int iVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var3;
  float *pfVar4;
  long lVar5;
  ResourceInfo *pRVar6;
  int iVar7;
  undefined8 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  DVec2 aDStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x18);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if ((cVar1 != '\0') &&
     (iVar2 = PlantFoodCounter::GetNumShotsToFireSinceLastUpdate((PlantFoodCounter *)this),
     0 < iVar2)) {
    iVar7 = 0;
    do {
      DVec2::DVec2(aDStack_18,25.0,45.0);
      uVar8 = *(undefined8 *)(gLawnApp + 0x9f0);
      p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
      ;
      pfVar4 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(p_Var3);
      fVar12 = *pfVar4;
      p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
      ;
      lVar5 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(p_Var3);
      fVar11 = *(float *)(lVar5 + 4);
      fVar9 = (float)ValueRange::GetRandomValue((ValueRange *)aDStack_18);
      p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
      ;
      lVar5 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(p_Var3);
      uVar10 = *(undefined4 *)(lVar5 + 8);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x20));
      pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_00);
      lVar5 = Board::AddProjectile
                        ((Board *)(fVar12 + 45.0),fVar11 - fVar9,uVar10,uVar8,aRStack_10,pRVar6,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      if ((lVar5 != 0) && (0 < *(int *)(this + 0x14))) {
        FUN_03fdc140(1.0 / (float)*(int *)(this + 0x14),lVar5 + 0x184);
      }
      iVar7 = iVar7 + 1;
      StreamBuffer::SetBuffReadPos((StreamBuffer *)this,1);
    } while (iVar7 != iVar2);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

