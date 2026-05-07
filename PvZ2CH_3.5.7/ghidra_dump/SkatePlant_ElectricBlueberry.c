// Class: SkatePlant_ElectricBlueberry


/* SkatePlant_ElectricBlueberry::GetDamageAmount() */

float __thiscall SkatePlant_ElectricBlueberry::GetDamageAmount(SkatePlant_ElectricBlueberry *this)

{
  float fVar1;
  
  fVar1 = (float)(*(int *)(this + 0x30) * 0x14 + 600);
  return *(float *)(this + 0x34) * fVar1 + fVar1;
}


/* SkatePlant_ElectricBlueberry::~SkatePlant_ElectricBlueberry() */

void __thiscall
SkatePlant_ElectricBlueberry::~SkatePlant_ElectricBlueberry(SkatePlant_ElectricBlueberry *this)

{
  *(undefined ***)this = &PTR__SkatePlant_ElectricBlueberry_0669b0a0;
  SkatePlant::~SkatePlant((SkatePlant *)this);
  return;
}


/* SkatePlant_ElectricBlueberry::~SkatePlant_ElectricBlueberry() */

void __thiscall
SkatePlant_ElectricBlueberry::~SkatePlant_ElectricBlueberry(SkatePlant_ElectricBlueberry *this)

{
  ~SkatePlant_ElectricBlueberry(this);
  AK::FreeHook(this);
  return;
}


/* SkatePlant_ElectricBlueberry::SkatePlant_ElectricBlueberry(SkateBoardMower*) */

void __thiscall
SkatePlant_ElectricBlueberry::SkatePlant_ElectricBlueberry
          (SkatePlant_ElectricBlueberry *this,SkateBoardMower *param_1)

{
  float fVar1;
  
  SkatePlant::SkatePlant((SkatePlant *)this,param_1);
  *(undefined ***)this = &PTR__SkatePlant_ElectricBlueberry_0669b0a0;
  fVar1 = (float)PVZ_T();
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 3;
  *(undefined4 *)(this + 0x3c) = 0x3f800000;
  *(float *)(this + 0x38) = fVar1 + 1.0;
  return;
}


/* SkatePlant_ElectricBlueberry::Fire() */

void __thiscall SkatePlant_ElectricBlueberry::Fire(SkatePlant_ElectricBlueberry *this)

{
  char *pcVar1;
  long extraout_x0;
  BlueberryZapCloud *this_00;
  float fVar2;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_Plant_ElectricBlueberry_PlantFood_Start");
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  nop();
  this_00 = GameObject::Create<BlueberryZapCloud>();
  std::
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  **)(this + 8));
  BoardEntity::PlaceOnBoard((SexyVector3 *)this_00);
  RealObject::JoinTeam((RealObject *)this_00,1);
  BlueberryZapCloud::SetMinifyDuration(this_00,*(float *)(extraout_x0 + 0x2e4));
  FUN_037dbda4(*(undefined4 *)(extraout_x0 + 0x2cc),this_00 + 0xd0);
  FUN_037dbd9c(*(undefined4 *)(extraout_x0 + 0x2d4),this_00 + 0xcc);
  fVar2 = (float)(**(code **)(*(long *)this + 0x40))(this);
  FUN_037dbdac(fVar2 * 0.5,this_00 + 0xd4);
  FUN_037dbe48(this_00 + 0xe0);
  FUN_037dbe3c(this_00 + 0xe4);
  BlueberryZapCloud::SetSuper(this_00,true);
  BlueberryZapCloud::Spawn(this_00);
  BlueberryZapCloud::SetZombieWeights
            (this_00,(float)*(int *)(extraout_x0 + 0x2d8),(float)*(int *)(extraout_x0 + 0x2dc),
             (float)*(int *)(extraout_x0 + 0x2e0));
  return;
}


/* SkatePlant_ElectricBlueberry::UpdateAction() */

void __thiscall SkatePlant_ElectricBlueberry::UpdateAction(SkatePlant_ElectricBlueberry *this)

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

