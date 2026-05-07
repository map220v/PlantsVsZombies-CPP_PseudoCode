// Class: SkatePlant_Citron


/* SkatePlant_Citron::GetDamageAmount() */

float __thiscall SkatePlant_Citron::GetDamageAmount(SkatePlant_Citron *this)

{
  return (*(float *)(this + 0x34) + 1.0) * 1500.0;
}


/* SkatePlant_Citron::~SkatePlant_Citron() */

void __thiscall SkatePlant_Citron::~SkatePlant_Citron(SkatePlant_Citron *this)

{
  *(undefined ***)this = &PTR__SkatePlant_Citron_0669b100;
  SkatePlant::~SkatePlant((SkatePlant *)this);
  return;
}


/* SkatePlant_Citron::~SkatePlant_Citron() */

void __thiscall SkatePlant_Citron::~SkatePlant_Citron(SkatePlant_Citron *this)

{
  ~SkatePlant_Citron(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkatePlant_Citron::SkatePlant_Citron(SkateBoardMower*) */

void __thiscall
SkatePlant_Citron::SkatePlant_Citron(SkatePlant_Citron *this,SkateBoardMower *param_1)

{
  float fVar1;
  FastCurve aFStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SkatePlant::SkatePlant((SkatePlant *)this,param_1);
  *(undefined ***)this = &PTR__SkatePlant_Citron_0669b100;
  fVar1 = (float)PVZ_T();
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 3;
  *(undefined4 *)(this + 0x3c) = 0x3f800000;
  *(float *)(this + 0x38) = fVar1 + 1.0;
  Sexy::FastCurve::SetOutRange(aFStack_10,5.0,-5.0);
  Sexy::TPoint<float>::operator+=((TPoint<float> *)(this + 0x28),(TPoint *)aFStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkatePlant_Citron::Fire() */

void __thiscall SkatePlant_Citron::Fire(SkatePlant_Citron *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  char *pcVar1;
  float *pfVar2;
  long lVar3;
  RtObject *this_01;
  PlasmaCloudProjectile *this_02;
  undefined8 uVar4;
  float fVar5;
  Board *pBVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  Vec3 aVStack_18 [16];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18);
  local_8 = ___stack_chk_guard;
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_Plant_Future_Citron_PF_Charge");
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 8));
  fVar5 = *pfVar2;
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  lVar3 = FUN_037dbdbc(*(undefined8 *)(lVar3 + 0x70),3);
  pBVar6._0_4_ = (Board *)(fVar5 + *(float *)(lVar3 + 0x68) + 40.0);
  lVar3 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          **)(this + 8));
  fVar5 = *(float *)(lVar3 + 4);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  lVar3 = FUN_037dbdbc(*(undefined8 *)(lVar3 + 0x70),3);
  fVar5 = fVar5 + *(float *)(lVar3 + 0x6c) + -15.0;
  EATextSquish::Vec3::Vec3(aVStack_18,(float)pBVar6._0_4_,fVar5,20.0);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  lVar3 = FUN_037dbdbc(*(undefined8 *)(lVar3 + 0x70),3);
  uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)(lVar3 + 8));
  this_01 = (RtObject *)Board::AddProjectile(pBVar6._0_4_,fVar5,0x41a00000,uVar4,aRStack_20,0,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  FUN_037dbe54(this_01 + 0x24);
  (**(code **)(*(long *)this + 0x40))(this);
  FUN_037dbd54(this_01 + 0xd8);
  (**(code **)(*(long *)this + 0x40))(this);
  FUN_037dbd5c(this_01 + 0x178);
  this_02 = Sexy::RtObject::Cast<PlasmaCloudProjectile>(this_01);
  if (this_02 != (PlasmaCloudProjectile *)0x0) {
    EgretflowerPlantFoodBomb::SetDamageRate((EgretflowerPlantFoodBomb *)this_02,200.0);
    GridItemLava::SetLifeTime((GridItemLava *)this_02,5.0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SkatePlant_Citron::UpdateAction() */

void __thiscall SkatePlant_Citron::UpdateAction(SkatePlant_Citron *this)

{
  float fVar1;
  
  SkatePlant::UpdateAction((SkatePlant *)this);
  if ((*(int *)(this + 0x40) < *(int *)(this + 0x44)) &&
     (fVar1 = (float)PVZ_T(), *(float *)(this + 0x38) < fVar1)) {
    Fire(this);
    fVar1 = (float)PVZ_T();
    *(int *)(this + 0x40) = *(int *)(this + 0x40) + 1;
    *(float *)(this + 0x38) = fVar1 + *(float *)(this + 0x3c);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkatePlant_Citron::Initialize(std::string const&) */

void SkatePlant_Citron::Initialize(string *param_1)

{
  PopAnimRig *pPVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SkatePlant::Initialize(param_1);
  pPVar1 = *(PopAnimRig **)(param_1 + 0x20);
  std::string::string(asStack_40,"plantfood");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

